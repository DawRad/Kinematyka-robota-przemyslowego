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
    /// delty do przyjęcia przez użytkownika (1 lub (-1))
    int delta1_, delta2_, delta5_;

    /// l_i_ ---> długości poszczególnych członów (i - numer członu)
    float l_1_, l_2_, l_3_, l_4_, l_5_, l_6_;

    float a_, b_;

    /// współrzędne maszynowe poszczególnych członów
    SKat fi1_, fi2_, fi3_, fi4_, fi5_, fi234_, fi23_;

    /// współrzędne wektora podejścia
    SKat psi_, teta_;

    /// wartości danych cosinusów (C) i sinusów (S)
    float C1_, S1_, C2_, S2_, C23_, S23_, C234_, S234_, C3_, S3_, C4_, S4_, C5_, S5_;

    float d_, e_;

    /// współrzędne punktu TCP
    SPunkt pT_;

    /// współrzędne punktu P
    SPunkt pP_;

    /// współrzędne punktu R
    SPunkt pR_;

    /// współrzędne punktu 01
    SPunkt p01_;

    /// współrzędne punktu 0'1
    SPunkt p0prim1_;

    /// współrzędne punktu 02
    SPunkt p02_;

    /// współrzędne punktu 0'2
    SPunkt p0prim2_;

    /// współrzędne punktu 00
    SPunkt p00_;

    SPunkt pTspr_, pPspr_, pRspr_;

public:
    /**
     * @brief Konstruktor klasy CMechanizm
     *
     * Ustawia początkowe wartości pól klasy
     */
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
    /**
     * @brief Metoda wyznacza wartości współrzędnych punktu P
     */
    void oblicz_pP();

    /**
     * @brief Metoda wyznacza wartości współrzędnych punktu R
     */
    void oblicz_pR();

    /**
     * @brief Metoda wyznacza wartości współrzędnych punktu 01
     */
    void oblicz_p01();

    /**
     * @brief Metoda wyznacza wartości współrzędnych punktu 0'1
     */
    void oblicz_p0prim1();

    /**
     * @brief Metoda wyznacza wartości współrzędnych punktu 02
     */
    void oblicz_p02();

    /**
     * @brief Metoda wyznacza wartości współrzędnych punktu 0'2
     */
    void oblicz_p0prim2();

    /**
     * @brief Metoda wyznacza wartości współczynników a i b
     */
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
