#ifndef CMECHANIZM_H
#define CMECHANIZM_H

#include <QString>
#include <QPoint>
#include <cmath>

using namespace std;

struct SPunkt
{
    float x;
    float y;
    float z;
};

struct SKat
{
    float stopnie;
    float radiany;
};

class CMechanizm
{         
    int delta1_, delta2_, delta5_;                  // delty do przyjęcia przez użytkownika (1 lub (-1))
    float l_1_, l_2_, l_3_, l_4_, l_5_, l_6_;       // l_i_ ---> długości członów
    float a_, b_;
    SKat fi1_, fi2_, fi3_, fi4_, fi5_, fi234_, fi23_;             // współrzędne maszynowe poszczególnych członów
    SKat psi_, teta_;                              // współrzędne wektora podejścia
    float C1_, S1_, C2_, S2_, C23_, S23_, C234_, S234_, C3_, S3_, C4_, S4_, C5_, S5_;         // wartości danych cosinusów (C) i sinusów (S)
    float d_, e_;

    SPunkt pT_;                 // współrzędne punktu TCP
    SPunkt pP_;                 // współrzędne punktu P
    SPunkt pR_;                 // współrzędne punktu R
    SPunkt p01_;                // współrzędne punktu 01
    SPunkt p0prim1_;            // współrzędne punktu 0'1
    SPunkt p02_;                // współrzędne punktu 02
    SPunkt p0prim2_;            // współrzędne punktu 0'2
    SPunkt p00_;                // współrzędne punktu 00

    SPunkt pTspr_, pPspr_, pRspr_;

public:
    CMechanizm();

    void wyznaczWspolrzMech();
    void przekazWspolrzPp(SPunkt tabPp[]);                    // tabPp ma rozmiar 8
    bool sprawdzPunktyTPR();

    float radNaSt(float wartWRad);
    float stNaRad(float wartWSt);

    void setDelta1(QString param);
    void setDelta2(QString param);
    void setDelta5(QString param);
    void setL_1(QString param);
    void setL_2(QString param);
    void setL_3(QString param);
    void setL_4(QString param);
    void setL_5(QString param);
    void setL_6(QString param);
    void setD(QString param);
    void setE(QString param);
    void setPsi(QString param);
    void setTeta(QString param);
    void setT(QString param1, QString param2, QString param3);
    void setT(float x, float y, float z);

    void wypiszAtrybuty(QString tabAtrParam[]);               // tabAtrParam ma rozmiar równy liczbie wypisywanych atrybutów (czyli tu = 13)
    void wypiszTPR(SPunkt param[]);                           // tablica param ma rozmiar 3
    void wypiszTPRSpr(SPunkt param[]);                        // tablica param ma także rozmiar 3
    SPunkt wypiszT();
    void wypiszPunktyXY(QPoint tabXy[]);
    void wypiszPunktyXZ(QPoint tabXy[]);
    void wypiszPunktyYZ(QPoint tabXy[]);

    void wypiszWyniki(QString tabWyn[]);                      // tabWyn[] powinna mieć rozmiar 8

    /**
     * @brief Metoda sprawdzająca czy możliwe jest wyznaczenie punktów T, P, R, 02, 0'2, 01 lub 0'1
     * @return Zwraca wartość 1, gdy przynajmniej 1 współrzędna punktów T, P, R, 02, 0'2, 01, 0'1 ma wartość NaN
     */
    bool nanPunkty();

    // jeśli przynajmniej jedna współrzędna z któregolwiek z punktów jest mniejsza od zera zwraca wartość true
    bool czyZetyUjemne();

private:
    void oblicz_pP();
    void oblicz_pR();
    void oblicz_p01();
    void oblicz_p0prim1();
    void oblicz_p02();
    void oblicz_p0prim2();

    void oblicz_ab();

    void oblicz_fi1_();
    void oblicz_fi2_();
    void oblicz_fi3_();
    void oblicz_fi4_();
    void oblicz_fi5_();
    void oblicz_fi234();
    void oblicz_fi23();

    void spr_pP();
    void spr_pT();
    void spr_pR();

};

#endif // CMECHANIZM_H
