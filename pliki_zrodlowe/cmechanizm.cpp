#include "cmechanizm.h"

CMechanizm::CMechanizm()
{
    delta1_ = 1;
    delta2_ = 1;
    delta5_ = 1;

    p00_.x = 0;
    p00_.y = 0;
    p00_.z = 0;

    pT_.x = 100;
    pT_.y = 244;
    pT_.z = 300;

    l_1_ = 150;
    l_2_ = 100;
    l_3_ = 100;
    l_4_ = 50;
    l_5_ = 50;
    l_6_ = 50;

    psi_.stopnie = 45;
    psi_.radiany = CMechanizm::stNaRad(psi_.stopnie);
    teta_.stopnie = 30;
    teta_.radiany = CMechanizm::stNaRad(teta_.stopnie);

    d_ = 200;
    e_ = 200;

    a_ = 0;
    b_ = 0;

    C1_ = 0;
    S1_ = 0;
    C2_ = 0;
    S2_ = 0;
    C23_ = 0;
    S23_ = 0;
    C234_ = 0;
    S234_ = 0;
    C3_ = 0;
    S3_ = 0;
    C4_ = 0;
    S4_ = 0;
    C5_ = 0;
    S5_ = 0;
}

void CMechanizm::wyznaczWspolrzMech()
{
    CMechanizm::oblicz_pP();
    CMechanizm::oblicz_fi1_();
    CMechanizm::oblicz_fi5_();
    CMechanizm::oblicz_fi234();
    CMechanizm::oblicz_pR();
    CMechanizm::oblicz_ab();
    CMechanizm::oblicz_fi2_();
    CMechanizm::oblicz_fi3_();
    CMechanizm::oblicz_fi23();
    CMechanizm::oblicz_fi4_();

    CMechanizm::oblicz_p01();
    CMechanizm::oblicz_p0prim1();
    CMechanizm::oblicz_p0prim2();
    CMechanizm::oblicz_p02();

    CMechanizm::spr_pR();
    CMechanizm::spr_pP();
    CMechanizm::spr_pT();
}

void CMechanizm::przekazWspolrzPp(SPunkt tabPp[])
{
    tabPp[0].x = pT_.x;
    tabPp[0].y = pT_.y;
    tabPp[0].z = pT_.z;

    tabPp[1].x = pP_.x;
    tabPp[1].y = pP_.y;
    tabPp[1].z = pP_.z;

    tabPp[2].x = pR_.x;
    tabPp[2].y = pR_.y;
    tabPp[2].z = pR_.z;

    tabPp[3].x = p02_.x;
    tabPp[3].y = p02_.y;
    tabPp[3].z = p02_.z;

    tabPp[4].x = p0prim2_.x;
    tabPp[4].y = p0prim2_.y;
    tabPp[4].z = p0prim2_.z;

    tabPp[5].x = p0prim1_.x;
    tabPp[5].y = p0prim1_.y;
    tabPp[5].z = p0prim1_.z;

    tabPp[6].x = p01_.x;
    tabPp[6].y = p01_.y;
    tabPp[6].z = p01_.z;

    tabPp[7].x = p00_.x;
    tabPp[7].y = p00_.y;
    tabPp[7].z = p00_.z;
}

bool CMechanizm::sprawdzPunktyTPR()
{
    bool tmp1 = false, tmp2 = false, tmp3 = false;

    if(pT_.x == pTspr_.x && pT_.y == pTspr_.y && pT_.z == pTspr_.z)
        tmp1 = true;

    if(pP_.x == pPspr_.x && pP_.y == pPspr_.y && pP_.z == pPspr_.z)
        tmp2 = true;

    if(pR_.x == pRspr_.x && pR_.y == pRspr_.y && pR_.z == pRspr_.z)
        tmp3 = true;

    if(tmp1 == true && tmp2 == true && tmp3 == true)
        return true;
    else
        return false;
}

float CMechanizm::radNaSt(float wartWRad)
{
    float wynik;

    wynik = (wartWRad * 180) / M_PI;

    return wynik;
}

float CMechanizm::stNaRad(float wartWSt)
{
    float wynik;

    wynik = (wartWSt * M_PI) / 180;

    return wynik;
}

void CMechanizm::setDelta1(QString param)
{
    delta1_ = param.toInt();
}

void CMechanizm::setDelta2(QString param)
{
    delta2_ = param.toInt();
}

void CMechanizm::setDelta5(QString param)
{
    delta5_ = param.toInt();
}

void CMechanizm::setL_1(QString param)
{
    l_1_ = param.toFloat();
}

void CMechanizm::setL_2(QString param)
{
    l_2_ = param.toFloat();
}

void CMechanizm::setL_3(QString param)
{
    l_3_ = param.toFloat();
}

void CMechanizm::setL_4(QString param)
{
    l_4_ = param.toFloat();
}

void CMechanizm::setL_5(QString param)
{
    l_5_ = param.toFloat();
}

void CMechanizm::setL_6(QString param)
{
    l_6_ = param.toFloat();
}

void CMechanizm::setD(QString param)
{
    d_ = param.toFloat();
}

void CMechanizm::setE(QString param)
{
    e_ = param.toFloat();
}

void CMechanizm::setPsi(QString param)
{
    psi_.stopnie = param.toFloat();
    psi_.radiany = CMechanizm::stNaRad(psi_.stopnie);
}

void CMechanizm::setTeta(QString param)
{
    teta_.stopnie = param.toFloat();
    teta_.radiany = CMechanizm::stNaRad(teta_.stopnie);
}

void CMechanizm::setT(QString param1, QString param2, QString param3)
{
    pT_.x = param1.toFloat();
    pT_.y = param2.toFloat();
    pT_.z = param3.toFloat();
}

void CMechanizm::setT(float x, float y, float z)
{
    pT_.x = x;
    pT_.y = y;
    pT_.z = z;
}

void CMechanizm::wypiszAtrybuty(QString tabAtrParam[])
{
    string tmp;

    tmp = to_string(delta1_);
    tabAtrParam[0] = QString::fromStdString(tmp);

    tmp = to_string(delta2_);
    tabAtrParam[1] = QString::fromStdString(tmp);

    tmp = to_string(delta5_);
    tabAtrParam[2] = QString::fromStdString(tmp);

    tmp = to_string(l_1_);
    tabAtrParam[3] = QString::fromStdString(tmp);

    tmp = to_string(l_2_);
    tabAtrParam[4] = QString::fromStdString(tmp);

    tmp = to_string(l_3_);
    tabAtrParam[5] = QString::fromStdString(tmp);

    tmp = to_string(l_4_);
    tabAtrParam[6] = QString::fromStdString(tmp);

    tmp = to_string(l_5_);
    tabAtrParam[7] = QString::fromStdString(tmp);

    tmp = to_string(l_6_);
    tabAtrParam[8] = QString::fromStdString(tmp);

    tmp = to_string(teta_.stopnie);
    tabAtrParam[9] = QString::fromStdString(tmp);

    tmp = to_string(psi_.stopnie);
    tabAtrParam[10] = QString::fromStdString(tmp);

    tmp = to_string(d_);
    tabAtrParam[11] = QString::fromStdString(tmp);

    tmp = to_string(e_);
    tabAtrParam[12] = QString::fromStdString(tmp);
}

void CMechanizm::wypiszTPR(SPunkt param[])
{
    param[0].x = pT_.x;
    param[0].y = pT_.y;
    param[0].z = pT_.z;

    param[1].x = pP_.x;
    param[1].y = pP_.y;
    param[1].z = pP_.z;

    param[2].x = pR_.x;
    param[2].y = pR_.y;
    param[2].z = pR_.z;
}

void CMechanizm::wypiszTPRSpr(SPunkt param[])
{
    param[0].x = pTspr_.x;
    param[0].y = pTspr_.y;
    param[0].z = pTspr_.z;

    param[1].x = pPspr_.x;
    param[1].y = pPspr_.y;
    param[1].z = pPspr_.z;

    param[2].x = pRspr_.x;
    param[2].y = pRspr_.y;
    param[2].z = pRspr_.z;
}

SPunkt CMechanizm::wypiszT()
{
    return pT_;
}

void CMechanizm::wypiszPunktyXY(QPoint tabXy[])
{
    tabXy[0].setX(round(p00_.x));
    tabXy[0].setY(round(p00_.y));

    tabXy[1].setX(round(p01_.x));
    tabXy[1].setY(round(p01_.y));

    tabXy[2].setX(round(p0prim1_.x));
    tabXy[2].setY(round(p0prim1_.y));

    tabXy[3].setX(round(p0prim2_.x));
    tabXy[3].setY(round(p0prim2_.y));

    tabXy[4].setX(round(p02_.x));
    tabXy[4].setY(round(p02_.y));

    tabXy[5].setX(round(pR_.x));
    tabXy[5].setY(round(pR_.y));

    tabXy[6].setX(round(pP_.x));
    tabXy[6].setY(round(pP_.y));

    tabXy[7].setX(round(pT_.x));
    tabXy[7].setY(round(pT_.y));
}

void CMechanizm::wypiszPunktyXZ(QPoint tabXy[])
{
    tabXy[0].setX(round(p00_.x));
    tabXy[0].setY(round(p00_.z));

    tabXy[1].setX(round(p01_.x));
    tabXy[1].setY(round(p01_.z));

    tabXy[2].setX(round(p0prim1_.x));
    tabXy[2].setY(round(p0prim1_.z));

    tabXy[3].setX(round(p0prim2_.x));
    tabXy[3].setY(round(p0prim2_.z));

    tabXy[4].setX(round(p02_.x));
    tabXy[4].setY(round(p02_.z));

    tabXy[5].setX(round(pR_.x));
    tabXy[5].setY(round(pR_.z));

    tabXy[6].setX(round(pP_.x));
    tabXy[6].setY(round(pP_.z));

    tabXy[7].setX(round(pT_.x));
    tabXy[7].setY(round(pT_.z));
}

void CMechanizm::wypiszPunktyYZ(QPoint tabXy[])
{
    tabXy[0].setX(round(p00_.y));
    tabXy[0].setY(round(p00_.z));

    tabXy[1].setX(round(p01_.y));
    tabXy[1].setY(round(p01_.z));

    tabXy[2].setX(round(p0prim1_.y));
    tabXy[2].setY(round(p0prim1_.z));

    tabXy[3].setX(round(p0prim2_.y));
    tabXy[3].setY(round(p0prim2_.z));

    tabXy[4].setX(round(p02_.y));
    tabXy[4].setY(round(p02_.z));

    tabXy[5].setX(round(pR_.y));
    tabXy[5].setY(round(pR_.z));

    tabXy[6].setX(round(pP_.y));
    tabXy[6].setY(round(pP_.z));

    tabXy[7].setX(round(pT_.y));
    tabXy[7].setY(round(pT_.z));
}

void CMechanizm::wypiszWyniki(QString tabWyn[])
{
    string tmp;

    tmp = to_string(pT_.x);
    tabWyn[0] = QString::fromStdString(tmp);

    tmp = to_string(pT_.y);
    tabWyn[1] = QString::fromStdString(tmp);

    tmp = to_string(pT_.z);
    tabWyn[2] = QString::fromStdString(tmp);

    tmp = to_string(fi1_.stopnie);
    tabWyn[3] = QString::fromStdString(tmp);

    tmp = to_string(fi2_.stopnie);
    tabWyn[4] = QString::fromStdString(tmp);

    tmp = to_string(fi3_.stopnie);
    tabWyn[5] = QString::fromStdString(tmp);

    tmp = to_string(fi4_.stopnie);
    tabWyn[6] = QString::fromStdString(tmp);

    tmp = to_string(fi5_.stopnie);
    tabWyn[7] = QString::fromStdString(tmp);
}

bool CMechanizm::nanPunkty()
{
    if(isnan(pT_.x) || isnan(pT_.y) || isnan(pT_.z) || isnan(pP_.x) || isnan(pP_.y) || isnan(pP_.z) || isnan(pR_.x) || isnan(pR_.y) || isnan(pR_.z) || isnan(p02_.x) || isnan(p02_.y) || isnan(p02_.z) || isnan(p0prim2_.x) || isnan(p0prim2_.y) || isnan(p0prim2_.z) || isnan(p0prim1_.x) || isnan(p0prim1_.y) || isnan(p0prim1_.z) || isnan(p01_.x) || isnan(p01_.y) || isnan(p01_.z))
        return 1;
    else
        return 0;



}

bool CMechanizm::czyZetyUjemne()
{
    if(pT_.z < 0 || pP_.z < 0 || pR_.z < 0 || p02_.z < 0 || p0prim2_.z < 0 || p01_.z < 0 || p0prim1_.z < 0)
        return true;
    else
        return false;
}

void CMechanizm::oblicz_pP()
{
    float l;

    l = l_5_ + l_6_;

    pP_.x = pT_.x - (l*cos(teta_.radiany)*cos(psi_.radiany));
    pP_.y = pT_.y - (l*cos(teta_.radiany)*sin(psi_.radiany));
    pP_.z = pT_.z - (l*sin(teta_.radiany));
}

void CMechanizm::oblicz_pR()
{
    pR_.x = pP_.x-(l_4_*C1_*C234_);
    pR_.y = pP_.y-(l_4_*S1_*C234_);
    pR_.z = pP_.z-(l_4_*S234_);
}

void CMechanizm::oblicz_p01()
{
    p01_.x = l_1_*C1_;
    p01_.y = l_1_*S1_;
    p01_.z = 0;
}

void CMechanizm::oblicz_p0prim1()
{
    p0prim1_.x = p01_.x + (d_*S1_);
    p0prim1_.y = p01_.y - (d_*C1_);
    p0prim1_.z = 0;
}

void CMechanizm::oblicz_p02()
{
    p02_.x = p0prim2_.x - (S1_*(d_ - e_));
    p02_.y = p0prim2_.y + (C1_*(d_ - e_));
    p02_.z = p0prim2_.z;
}

void CMechanizm::oblicz_p0prim2()
{
    p0prim2_.x = p0prim1_.x + (l_2_*C2_*C1_);
    p0prim2_.y = p0prim1_.y + (l_2_*C2_*S1_);
    p0prim2_.z = l_2_*S2_;
}

void CMechanizm::oblicz_ab()
{
    a_ = ((-1)*l_1_)+(delta1_*sqrt(pow(pR_.x, 2) + pow(pR_.y, 2) - pow(e_, 2)));
    b_ = (1/(2*l_2_))*(pow(a_, 2) + pow(pR_.z, 2) + pow(l_2_, 2) - pow(l_3_, 2));
}

void CMechanizm::oblicz_fi1_()
{
    S1_ = (1/(pow(pP_.x,2)+pow(pP_.y,2)))*((e_*pP_.x)+(delta1_*pP_.y*sqrt(pow(pP_.x,2)+pow(pP_.y,2)-pow(e_,2))));
    C1_ = (1/(pow(pP_.x,2)+pow(pP_.y,2)))*(((-1)*e_*pP_.y)+(delta1_*pP_.x*sqrt(pow(pP_.x,2)+pow(pP_.y,2)-pow(e_,2))));

    if(fabs(S1_) <= fabs(C1_)) fi1_.radiany = asin(S1_);
    else fi1_.radiany = acos(C1_);

    fi1_.stopnie = CMechanizm::radNaSt(fi1_.radiany);
}

void CMechanizm::oblicz_fi2_()
{
    S2_ = (1 / (pow(a_,2) + pow(pR_.z,2)))*((pR_.z*b_)+(delta2_*a_*sqrt(pow(a_,2)+pow(pR_.z,2)-pow(b_,2))));
    C2_ = (1/(pow(a_,2)+pow(pR_.z,2)))*((a_*b_)-(delta2_*pR_.z*sqrt(pow(a_,2)+pow(pR_.z,2)-pow(b_,2))));
    if(fabs(S2_)<=fabs(C2_)) fi2_.radiany = asin(S2_);
    else fi2_.radiany = acos(C2_);

    fi2_.stopnie = CMechanizm::radNaSt(fi2_.radiany);
}

void CMechanizm::oblicz_fi3_()
{
    S3_ = (((-1)*delta2_)/l_3_)*sqrt(pow(a_,2)+pow(pR_.z,2)-pow(b_,2));
    C3_ = (b_-l_2_)/l_3_;
    if(fabs(S3_)<=fabs(C3_)) fi3_.radiany = asin(S3_);
    else fi3_.radiany = acos(C3_);

    fi3_.stopnie = CMechanizm::radNaSt(fi3_.radiany);
}

void CMechanizm::oblicz_fi4_()
{
    S4_ = (S234_*C23_)-(C234_*S23_);
    C4_ = (C234_*C23_)+(S234_*S23_);
    if(fabs(S4_)<=fabs(C4_)) fi4_.radiany = asin(S4_);
    else fi4_.radiany = acos(C4_);

    fi4_.stopnie = CMechanizm::radNaSt(fi4_.radiany);
}

void CMechanizm::oblicz_fi5_()
{
    S5_ = cos(teta_.radiany)*((sin(psi_.radiany)*C1_)-(cos(psi_.radiany)*S1_));
    C5_ = delta5_*sqrt(1-pow(S5_,2));
    if(fabs(S5_)<=fabs(C5_)) fi5_.radiany = asin(S5_);
    else fi5_.radiany = acos(C5_);

    fi5_.stopnie = CMechanizm::radNaSt(fi5_.radiany);
}

void CMechanizm::oblicz_fi234()
{
    S234_ = sin(teta_.radiany)/C5_;
    C234_ = (cos(teta_.radiany)/C5_)*(cos(psi_.radiany)*C1_+(sin(psi_.radiany)*S1_));
    if(fabs(S234_)<=fabs(C234_)) fi234_.radiany = asin(S234_);
    else fi234_.radiany = acos(C234_);

    fi234_.stopnie = CMechanizm::radNaSt(fi234_.radiany);
}

void CMechanizm::oblicz_fi23()
{
    S23_ = (pR_.z-(l_2_*S2_))/l_3_;
    C23_ = (a_-(l_2_*C2_))/l_3_;
    if(fabs(S23_)<=fabs(C23_)) fi23_.radiany = asin(S23_);
    else fi23_.radiany = acos(C23_);

    fi23_.stopnie = CMechanizm::radNaSt(fi23_.radiany);
}

void CMechanizm::spr_pP()
{
    pPspr_.x = pRspr_.x + (l_4_*cos(fi1_.radiany)*cos(fi234_.radiany));
    pPspr_.y = pRspr_.y + (l_4_*sin(fi1_.radiany)*cos(fi234_.radiany));
    pPspr_.z = pRspr_.z + (l_4_*sin(fi234_.radiany));
}

void CMechanizm::spr_pT()
{
    float l;
    l = l_5_ + l_6_;

    pTspr_.x = pPspr_.x + (l*cos(teta_.radiany)*cos(psi_.radiany));
    pTspr_.y = pPspr_.y + (l*cos(teta_.radiany)*sin(psi_.radiany));
    pTspr_.z = pPspr_.z + (l*sin(teta_.radiany));
}

void CMechanizm::spr_pR()
{
    pRspr_.x = p02_.x + (l_3_*cos(fi1_.radiany)*cos(fi23_.radiany));
    pRspr_.y = p02_.y + (l_3_*sin(fi1_.radiany)*cos(fi23_.radiany));
    pRspr_.z = p02_.z + (l_3_*sin(fi23_.radiany));
}
