#ifndef USERGUIDE_H
#define USERGUIDE_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>

#include "cmechanizm.h"
#include "cukladwspolrz.h"
#include "crysrobota.h"

QT_BEGIN_NAMESPACE
namespace Ui { class UserGuide; }
QT_END_NAMESPACE

class UserGuide : public QMainWindow
{
    Q_OBJECT

public:
    UserGuide(QWidget *parent = nullptr);
    ~UserGuide();

    void setSkala(QString param);           // metoda ustawiająca wartość atrybutu skala_ na podstawie wartości typu QString

    void pobierzDaneZOkna();        
    bool czyDodatni(float param);
    bool czyDodatni(QString param);
    bool czyWpisaneDoLeDodatnie();
    bool czyTWZasiegu();
    void wypiszObliczoneISpr();
    void wypiszWynikiOkno(CMechanizm mech);

    // funkcja wyznacza wartości punktów TCP kroków animacji
    void wyznaczTCPAnim();

private:
    // ta metoda pobiera wartości dla elementów tabMech_ bez punktów TCP
    void daneZOknaDoKrokow();

    // funkcja zwraca true, gdy którykolwiek mechanizm z tablicy *tabMech_ ma przynajmniej jeden punkt Nan
    bool sprawdzPunktyAnim_NaN();

    // funkcja zwraca true, gdy którykolwiek mechanizm z tablicy *tabMech_ ma przynajmniej jeden o ujemnej współrzędnej zetowej
    bool sprawdzPunktyAnim_Zety();

private slots:
    void on_pbRysuj_clicked();

    void on_pbWczytaj_clicked();        

    void on_pbUkryjOsie_clicked();

    void on_pbPokazOsie_clicked();          

    void on_sbNrKroku_valueChanged(int arg1);

    void on_leLbKrokow_textChanged(const QString &arg1);

public slots:
    //void rysujKropke();
    void animacja();

private:
    Ui::UserGuide *ui;

    SPunkt tabPunktow_[8], wektorPrzej_;
    CMechanizm mech1_, mech2_, *tabMech_;
    QGraphicsScene *sceneXY_, *sceneXZ_, *sceneYZ_;
    QTimer *timer_;
    CUkladWspolrz *ukladWspolrz_;
    CRysRobota *tabRys_, *tabRysXz_, *tabRysYz_;
    CRysRobota *aktXy_, *aktXz_, *aktYz_;               // atrybuty wskazują na elementy QGraphicsScene aktualnie wyświetlane
    float skala_;
    int x1_, y1_, x2_, y2_;
    int krokiAnim_;                     // zmienna określa, ile kroków ma mieć animacja przejścia
    int liczAnim_;                      // licznik używany w funkcji uruchamianej przez timer_
    bool czyMozliwaAnim_;               // zmienna bool określa, czy możliwa jest animacja    
};
#endif // USERGUIDE_H
