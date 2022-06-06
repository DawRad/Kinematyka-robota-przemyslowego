#include "userguide.h"
#include "ui_userguide.h"

UserGuide::UserGuide(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UserGuide)
{
    ui->setupUi(this);

    liczAnim_ = 0;
    skala_ = 1;
    czyMozliwaAnim_ = false;    
    krokiAnim_ = 100;
    x1_ = 0;
    y1_ = 0;
    x2_ = 10;
    y2_ = 10;

    ui->sbNrKroku->setMaximum(krokiAnim_);
    aktXy_ = NULL;
    aktXz_ = NULL;
    aktYz_ = NULL;

    ukladWspolrz_ = new CUkladWspolrz [3];
    tabRys_ = new CRysRobota [krokiAnim_ + 1];
    tabRysXz_ = new CRysRobota [krokiAnim_ + 1];
    tabRysYz_ = new CRysRobota [krokiAnim_ + 1];

    sceneXY_ = new QGraphicsScene;
    ui->gvOsXY->setScene(sceneXY_);
    ui->gvOsXY->setRenderHint(QPainter::Antialiasing);    

    sceneXZ_ = new QGraphicsScene;
    ui->gvOsXZ->setScene(sceneXZ_);   
    ui->gvOsXZ->setRenderHint(QPainter::Antialiasing);

    sceneYZ_ = new QGraphicsScene;
    ui->gvOsYZ->setScene(sceneYZ_);
    ui->gvOsYZ->setRenderHint(QPainter::Antialiasing);
}

UserGuide::~UserGuide()
{
    delete [] tabMech_;
    delete [] ukladWspolrz_;
    delete [] tabRys_;
    delete sceneXY_;
    delete sceneXZ_;
    delete sceneYZ_;
    delete ui;
}

void UserGuide::setSkala(QString param)
{
    skala_ = param.toFloat();
}

void UserGuide::pobierzDaneZOkna()
{
    // mechanizm dla początkowego TCP
    mech1_.setDelta1(ui->cbDelta_1->currentText());
    mech1_.setDelta2(ui->cbDelta_2->currentText());
    mech1_.setDelta5(ui->cbDelta_5->currentText());

    mech1_.setL_1(ui->leL_1->text());
    mech1_.setL_2(ui->leL_2->text());
    mech1_.setL_3(ui->leL_3->text());
    mech1_.setL_4(ui->leL_4->text());
    mech1_.setL_5(ui->leL_5->text());
    mech1_.setL_6(ui->leL_6->text());

    mech1_.setD(ui->leD->text());
    mech1_.setE(ui->leE->text());

    mech1_.setPsi(ui->lePsi->text());
    mech1_.setTeta(ui->leTeta->text());

    mech1_.setT(ui->leXT_1->text(), ui->leYT_1->text(), ui->leZT_1->text());

    // mechanizm dla końcowego TCP
    mech2_.setDelta1(ui->cbDelta_1->currentText());
    mech2_.setDelta2(ui->cbDelta_2->currentText());
    mech2_.setDelta5(ui->cbDelta_5->currentText());

    mech2_.setL_1(ui->leL_1->text());
    mech2_.setL_2(ui->leL_2->text());
    mech2_.setL_3(ui->leL_3->text());
    mech2_.setL_4(ui->leL_4->text());
    mech2_.setL_5(ui->leL_5->text());
    mech2_.setL_6(ui->leL_6->text());

    mech2_.setD(ui->leD->text());
    mech2_.setE(ui->leE->text());

    mech2_.setPsi(ui->lePsi->text());
    mech2_.setTeta(ui->leTeta->text());

    mech2_.setT(ui->leXT_2->text(), ui->leYT_2->text(), ui->leZT_2->text());

    UserGuide::setSkala(ui->leSkala->text());
    krokiAnim_ = ui->leLbKrokow->text().toFloat();
}

bool UserGuide::czyDodatni(float param)
{
    if(param > 0)
        return true;
    else
        return false;
}

bool UserGuide::czyDodatni(QString param)
{
    if(param.toFloat() > 0)
        return true;
    else
        return false;
}

bool UserGuide::czyWpisaneDoLeDodatnie()
{
    bool tabSpr[12], tmp = true;

    tabSpr[0] = czyDodatni(ui->leL_1->text());
    tabSpr[1] = czyDodatni(ui->leL_2->text());
    tabSpr[2] = czyDodatni(ui->leL_3->text());
    tabSpr[3] = czyDodatni(ui->leL_4->text());
    tabSpr[4] = czyDodatni(ui->leL_5->text());
    tabSpr[5] = czyDodatni(ui->leL_6->text());
    tabSpr[6] = czyDodatni(ui->leD->text());
    tabSpr[7] = czyDodatni(ui->leE->text());
    tabSpr[8] = czyDodatni(ui->leSkala->text());
    tabSpr[9] = czyDodatni(ui->leZT_1->text());
    tabSpr[10] = czyDodatni(ui->leZT_2->text());
    tabSpr[11] = czyDodatni(ui->leLbKrokow->text());

    for(int i = 0; i < 11; i++)
        if(tabSpr[i] != true)
        {
            tmp = false;
            break;
        }

    return tmp;
}

bool UserGuide::czyTWZasiegu()
{
    SPunkt t0, t1;
    float r, d0, m0, d1, m1, caly;

    r = ui->leL_1->text().toFloat();

    t0.x = ui->leXT_1->text().toFloat();
    t0.y = ui->leYT_1->text().toFloat();
    t0.z = ui->leZT_1->text().toFloat();

    t1.x = ui->leXT_1->text().toFloat();
    t1.y = ui->leYT_1->text().toFloat();
    t1.z = ui->leZT_1->text().toFloat();

    d0 = fabs(sqrt(pow(t0.x, 2) + pow(t0.y, 2)) - r);
    m0 = sqrt(pow(t0.z, 2) + pow(d0, 2));

    d1 = fabs(sqrt(pow(t1.x, 2) + pow(t1.y, 2)) - r);
    m1 = sqrt(pow(t1.z, 2) + pow(d1, 2));

    caly = ui->leL_2->text().toFloat() + ui->leL_3->text().toFloat() + ui->leL_4->text().toFloat() + ui->leL_5->text().toFloat() + ui->leL_6->text().toFloat();

    if(m1 <= caly && m0 <= caly)
        return true;
    else
        return false;
}

void UserGuide::wypiszObliczoneISpr()
{
    SPunkt Obl[3], Spr[3];
    string tmpStr;
    QString tmpQStr;

    mech1_.wypiszTPR(Obl);
    mech1_.wypiszTPRSpr(Spr);

    for(int i = 0; i < 3; i++)
    {
        ui->lwWczytane->addItem("Współrzędna x:");
        tmpStr = std::to_string(Obl[i].x);
        tmpQStr = QString::fromStdString(tmpStr);
        ui->lwWczytane->addItem(tmpQStr);

        tmpStr = std::to_string(Spr[i].x);
        tmpQStr = QString::fromStdString(tmpStr);
        ui->lwWczytane->addItem(tmpQStr);

        ui->lwWczytane->addItem(" ");

        ui->lwWczytane->addItem("Współrzędna y:");
        tmpStr = std::to_string(Obl[i].y);
        tmpQStr = QString::fromStdString(tmpStr);
        ui->lwWczytane->addItem(tmpQStr);

        tmpStr = std::to_string(Spr[i].y);
        tmpQStr = QString::fromStdString(tmpStr);
        ui->lwWczytane->addItem(tmpQStr);

        ui->lwWczytane->addItem(" ");

        ui->lwWczytane->addItem("Współrzędna z:");
        tmpStr = std::to_string(Obl[i].z);
        tmpQStr = QString::fromStdString(tmpStr);
        ui->lwWczytane->addItem(tmpQStr);

        tmpStr = std::to_string(Spr[i].z);
        tmpQStr = QString::fromStdString(tmpStr);
        ui->lwWczytane->addItem(tmpQStr);

        ui->lwWczytane->addItem(" ");
    }
}

void UserGuide::wypiszWynikiOkno(CMechanizm mech)
{
    QString tabWyn[8];

    mech.wypiszWyniki(tabWyn);

    ui->leTCPx->clear();
    ui->leTCPx->insert(tabWyn[0]);

    ui->leTCPy->clear();
    ui->leTCPy->insert(tabWyn[1]);

    ui->leTCPz->clear();
    ui->leTCPz->insert(tabWyn[2]);

    ui->leFi_1->clear();
    ui->leFi_1->insert(tabWyn[3]);

    ui->leFi_2->clear();
    ui->leFi_2->insert(tabWyn[4]);

    ui->leFi_3->clear();
    ui->leFi_3->insert(tabWyn[5]);

    ui->leFi_4->clear();
    ui->leFi_4->insert(tabWyn[6]);

    ui->leFi_5->clear();
    ui->leFi_5->insert(tabWyn[7]);
}

void UserGuide::wyznaczTCPAnim()
{
    SPunkt pocz, koniec, tmp, tmpPrev;
    float odlX, odlY, odlZ;

    tabMech_ = new CMechanizm [krokiAnim_ - 1];

    pocz = mech1_.wypiszT();
    koniec = mech2_.wypiszT();

    odlX = koniec.x - pocz.x;
    odlY = koniec.y - pocz.y;
    odlZ = koniec.z - pocz.z;

    wektorPrzej_.x = odlX/krokiAnim_;
    wektorPrzej_.y = odlY/krokiAnim_;
    wektorPrzej_.z = odlZ/krokiAnim_;

    tmp.x = pocz.x + wektorPrzej_.x;
    tmp.y = pocz.y + wektorPrzej_.y;
    tmp.z = pocz.z + wektorPrzej_.z;
    tabMech_[0].setT(tmp.x, tmp.y, tmp.z);

    for(int i = 0; i < (krokiAnim_ - 2); i++)
    {
        tmpPrev = tabMech_[i].wypiszT();

        tmp.x = tmpPrev.x + wektorPrzej_.x;
        tmp.y = tmpPrev.y + wektorPrzej_.y;
        tmp.z = tmpPrev.z + wektorPrzej_.z;

        tabMech_[i + 1].setT(tmp.x, tmp.y, tmp.z);
    }

    daneZOknaDoKrokow();

    for(int i = 0; i < (krokiAnim_ - 1); i++)
        tabMech_[i].wyznaczWspolrzMech();
}

void UserGuide::daneZOknaDoKrokow()
{
    for(int i = 0; i < (krokiAnim_ - 1); i++)
    {
        tabMech_[i].setDelta1(ui->cbDelta_1->currentText());
        tabMech_[i].setDelta2(ui->cbDelta_2->currentText());
        tabMech_[i].setDelta5(ui->cbDelta_5->currentText());

        tabMech_[i].setL_1(ui->leL_1->text());
        tabMech_[i].setL_2(ui->leL_2->text());
        tabMech_[i].setL_3(ui->leL_3->text());
        tabMech_[i].setL_4(ui->leL_4->text());
        tabMech_[i].setL_5(ui->leL_5->text());
        tabMech_[i].setL_6(ui->leL_6->text());

        tabMech_[i].setD(ui->leD->text());
        tabMech_[i].setE(ui->leE->text());

        tabMech_[i].setPsi(ui->lePsi->text());
        tabMech_[i].setTeta(ui->leTeta->text());
    }
}

bool UserGuide::sprawdzPunktyAnim_NaN()
{
    bool wynik = false;

    for(int i = 0; i < (krokiAnim_ -1); i++)
    {
        if(tabMech_[i].nanPunkty())
        {
            wynik = true;
            break;
        }
    }

    return wynik;
}

bool UserGuide::sprawdzPunktyAnim_Zety()
{
    bool wynik = false;

    for(int i = 0; i < (krokiAnim_ -1); i++)
    {
        if(tabMech_[i].czyZetyUjemne())
        {
            wynik = true;
            break;
        }
    }

    return wynik;
}

void UserGuide::on_pbRysuj_clicked()
{                
    QPoint *wspolrz;    
    wspolrz = new QPoint [8];    

    aktXy_ = NULL;
    aktXz_ = NULL;
    aktYz_ = NULL;

    delete [] tabRys_;
    delete [] tabRysXz_;
    delete [] tabRysYz_;
    tabRys_ = new CRysRobota [krokiAnim_ + 1];
    tabRysXz_ = new CRysRobota [krokiAnim_ + 1];
    tabRysYz_ = new CRysRobota [krokiAnim_ + 1];

    if (czyMozliwaAnim_ == false)
    {
        ui->lwWczytane->addItem("Nie można wykonać animacji");
        ui->lwWczytane->addItem(" ");
    }
    else
    {
        wyznaczTCPAnim();

        if(sprawdzPunktyAnim_NaN())
        {
            ui->lwWczytane->addItem("Nie można przejść pomiędzy zadanymi punktami");
            ui->lwWczytane->addItem(" ");

        }
        else
        {
            if(sprawdzPunktyAnim_Zety())
            {
                ui->lwWczytane->addItem("Nie można przejść pomiędzy zadanymi punktami - poszczególny kroki mają ujemne współrzędne zetowe");
                ui->lwWczytane->addItem(" ");

            }
            else
            {
                /* pobieranie punktów rysunków na płaszczyźnie XY
                */
                mech1_.wypiszPunktyXY(wspolrz);
                for(int i = 0; i < 8; i++)
                {
                    wspolrz[i].setX(round(skala_ * 0.1 * wspolrz[i].x()));
                    wspolrz[i].setY(round(skala_ * 0.1 * wspolrz[i].y()));
                }

                tabRys_[0].setPoints(wspolrz);

                for(int i = 1; i < krokiAnim_; i++)
                {
                    tabMech_[i - 1].wypiszPunktyXY(wspolrz);
                    for(int i = 0; i < 8; i++)
                    {
                        wspolrz[i].setX(round(skala_ * 0.1 * wspolrz[i].x()));
                        wspolrz[i].setY(round(skala_ * 0.1 * wspolrz[i].y()));
                    }

                    tabRys_[i].setPoints(wspolrz);
                }

                mech2_.wypiszPunktyXY(wspolrz);
                for(int i = 0; i < 8; i++)
                {
                    wspolrz[i].setX(round(skala_ * 0.1 * wspolrz[i].x()));
                    wspolrz[i].setY(round(skala_ * 0.1 * wspolrz[i].y()));
                }

                tabRys_[krokiAnim_].setPoints(wspolrz);
                /* koniec pobierania punktów na płaszczyźnie XY
                */

                /* pobieranie punktów rysunków na płaszczyźnie XZ
                */
                mech1_.wypiszPunktyXZ(wspolrz);
                for(int i = 0; i < 8; i++)
                {
                    wspolrz[i].setX(round(skala_ * 0.1 * wspolrz[i].x()));
                    wspolrz[i].setY(round(skala_ * 0.1 * wspolrz[i].y()));
                }

                tabRysXz_[0].setPoints(wspolrz);

                for(int i = 1; i < krokiAnim_; i++)
                {
                    tabMech_[i - 1].wypiszPunktyXZ(wspolrz);
                    for(int i = 0; i < 8; i++)
                    {
                        wspolrz[i].setX(round(skala_ * 0.1 * wspolrz[i].x()));
                        wspolrz[i].setY(round(skala_ * 0.1 * wspolrz[i].y()));
                    }

                    tabRysXz_[i].setPoints(wspolrz);
                }

                mech2_.wypiszPunktyXZ(wspolrz);
                for(int i = 0; i < 8; i++)
                {
                    wspolrz[i].setX(round(skala_ * 0.1 * wspolrz[i].x()));
                    wspolrz[i].setY(round(skala_ * 0.1 * wspolrz[i].y()));
                }

                tabRysXz_[krokiAnim_].setPoints(wspolrz);
                /* koniec pobierania punktów na płaszczyźnie XZ
                */

                /* pobieranie punktów rysunków na płaszczyźnie YZ
                */
                mech1_.wypiszPunktyYZ(wspolrz);
                for(int i = 0; i < 8; i++)
                {
                    wspolrz[i].setX(round(skala_ * 0.1 * wspolrz[i].x()));
                    wspolrz[i].setY(round(skala_ * 0.1 * wspolrz[i].y()));
                }

                tabRysYz_[0].setPoints(wspolrz);

                for(int i = 1; i < krokiAnim_; i++)
                {
                    tabMech_[i - 1].wypiszPunktyYZ(wspolrz);
                    for(int i = 0; i < 8; i++)
                    {
                        wspolrz[i].setX(round(skala_ * 0.1 * wspolrz[i].x()));
                        wspolrz[i].setY(round(skala_ * 0.1 * wspolrz[i].y()));
                    }

                    tabRysYz_[i].setPoints(wspolrz);
                }

                mech2_.wypiszPunktyYZ(wspolrz);
                for(int i = 0; i < 8; i++)
                {
                    wspolrz[i].setX(round(skala_ * 0.1 * wspolrz[i].x()));
                    wspolrz[i].setY(round(skala_ * 0.1 * wspolrz[i].y()));
                }

                tabRysYz_[krokiAnim_].setPoints(wspolrz);
                /* koniec pobierania punktów na płaszczyźnie YZ
                */

                sceneXY_->addItem(&tabRys_[0]);
                sceneXZ_->addItem(&tabRysXz_[0]);
                sceneYZ_->addItem(&tabRysYz_[0]);
                wypiszWynikiOkno(mech1_);

                timer_ = new QTimer(this);

                connect(timer_, SIGNAL(timeout()), this, SLOT(animacja()));
                //timer_->setInterval(200 * (krokiAnim_+1));
                timer_->start(50);
            }

        }
    }


    liczAnim_ = 0;
    delete [] wspolrz;
    //delete [] tabZ;
}

void UserGuide::on_pbWczytaj_clicked()
{
    ui->lwWczytane->clear();
    czyMozliwaAnim_ = false;
    // Ten warunek jest wykonywany, gdy odpowiednie wartości w polach edycyjnych są dodatnie
    if(czyWpisaneDoLeDodatnie())
    {
        // Ten warunek wykonuje się, gdy którykolwiek z podanych punktów TCP jest poza zasięgiem robota
        if(czyTWZasiegu())
        {
            UserGuide::pobierzDaneZOkna();            

            mech1_.wyznaczWspolrzMech();            // wyznaczenie współrzędnych mechanizmu dla początkowego TCP
            mech2_.wyznaczWspolrzMech();            // wyznaczenie współrzędnych mechanizmu dla końcowego TCP

            // Ten warunek jest wykonywany, gdy którykolwiek z punktów mechanizmu ma wartość NaN
            if(mech1_.nanPunkty() || mech2_.nanPunkty())
            {
                ui->lwWczytane->addItem("Wartości współrzędnych punktów mechanizmu nie mogą zostać wyznaczone!\n Zmień parametry");
                ui->lwWczytane->addItem(" ");
                //UserGuide::wypiszObliczoneISpr();
            }
            else
            {
                // Ten warunek jest wykonywany, kiedy przynajmniej jedna ze współrzędnych zetowych punktów mechanizmu jest ujemna
                if(mech1_.czyZetyUjemne() || mech2_.czyZetyUjemne())
                {
                    ui->lwWczytane->addItem("Wartości współrzędnych zetowych punktów mechanizmu są ujemne!\n Zmień parametry");
                    ui->lwWczytane->addItem(" ");
                }
                else
                {
                    czyMozliwaAnim_ = true;
                    ui->lwWczytane->addItem("Wczytane parametry są poprawne. Możliwe jest dokonanie animacji");
                    ui->lwWczytane->addItem(" ");
                    //QString tabAtr[13];
                    //mech1_.wypiszAtrybuty(tabAtr);

                    /*for(int i = 0; i < 13; i++)
                    {
                        ui->lwWczytane->addItem(tabAtr[i]);
                        ui->lwWczytane->addItem(" ");
                    }

                    ui->lwWczytane->addItem("Wartość tekstu w cbDelta_1:     " + ui->cbDelta_1->currentText());
                    ui->lwWczytane->addItem(" ");*/

                    //UserGuide::wypiszObliczoneISpr();
                }
            }
        }
        else
        {
            ui->lwWczytane->addItem("Wartości współrzędnych punktów TCP wykraczają poza zasięg robota!");
            ui->lwWczytane->addItem(" ");
        }
    }
    else
    {
        ui->lwWczytane->addItem("Długości wszystkich członów, wartości d, e oraz skali i współrzędnych zetowych muszą być większe od 0!");
        ui->lwWczytane->addItem(" ");
    }

}

void UserGuide::animacja()
{
    liczAnim_++;
    sceneXY_->removeItem(&tabRys_[liczAnim_ - 1]);
    sceneXY_->addItem(&tabRys_[liczAnim_]);

    sceneXZ_->removeItem(&tabRysXz_[liczAnim_ - 1]);
    sceneXZ_->addItem(&tabRysXz_[liczAnim_]);

    sceneYZ_->removeItem(&tabRysYz_[liczAnim_ - 1]);
    sceneYZ_->addItem(&tabRysYz_[liczAnim_]);

    if(liczAnim_ == (krokiAnim_))
    {
        wypiszWynikiOkno(mech2_);
        aktXy_ = &tabRys_[liczAnim_];
        aktXz_ = &tabRysXz_[liczAnim_];
        aktYz_ = &tabRysYz_[liczAnim_];
        timer_->stop();
    }
    else
    {
        wypiszWynikiOkno(tabMech_[liczAnim_ - 1]);
    }
}


void UserGuide::on_pbUkryjOsie_clicked()
{
    sceneXY_->removeItem(&ukladWspolrz_[0]);
    sceneXZ_->removeItem(&ukladWspolrz_[1]);
    sceneYZ_->removeItem(&ukladWspolrz_[2]);
    sceneXY_->removeItem(&tabRys_[0]);
}

void UserGuide::on_pbPokazOsie_clicked()
{
    sceneXY_->addItem(&ukladWspolrz_[0]);
    sceneXZ_->addItem(&ukladWspolrz_[1]);
    sceneYZ_->addItem(&ukladWspolrz_[2]);
}

void UserGuide::on_sbNrKroku_valueChanged(int arg1)
{
    if(aktXy_ != NULL && aktXz_ != NULL && aktYz_ != NULL)
    {
        sceneXY_->removeItem(aktXy_);
        sceneXY_->addItem(&tabRys_[arg1]);
        aktXy_ = &tabRys_[arg1];

        sceneXZ_->removeItem(aktXz_);
        sceneXZ_->addItem(&tabRysXz_[arg1]);
        aktXz_ = &tabRysXz_[arg1];

        sceneYZ_->removeItem(aktYz_);
        sceneYZ_->addItem(&tabRysYz_[arg1]);
        aktYz_ = &tabRysYz_[arg1];

        if(arg1 == 0)
        {
            wypiszWynikiOkno(mech1_);
        }
        if(arg1 == krokiAnim_)
        {
            wypiszWynikiOkno(mech2_);
        }
        if(arg1 != 0 && arg1 != krokiAnim_)
        {
            wypiszWynikiOkno(tabMech_[arg1-1]);
        }
    }
    else
    {
        ui->lwWczytane->addItem("Nie można wyświetlać wyników poszczególnych kroków w czasie trwania animacji lub po zmianie wartości liczby kroków");
        ui->lwWczytane->addItem(" ");
    }

}

void UserGuide::on_leLbKrokow_textChanged(const QString &arg1)
{
    ui->sbNrKroku->setMaximum(ui->leLbKrokow->text().toInt());
    aktXy_ = NULL;
    aktXz_ = NULL;
    aktYz_ = NULL;
}
