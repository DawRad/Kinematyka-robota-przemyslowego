#ifndef CMECHANIZM_H
#define CMECHANIZM_H

#include <QString>
#include <QPoint>
#include <cmath>

using namespace std;

/**
 * @brief Struktura odwzorowująca punkt w przestrzeni 3D
 */
struct SPunkt
{    
    float x;
    float y;
    float z;
};

/**
 * @brief Struktura odwzorowująca wartość kątową w stopniach oraz radianach
 */
struct SKat
{
    float stopnie;
    float radiany;
};

/**
 * @brief Klasa logiczna.
 *
 * Odwzorowuje mechanizm robota przemysłowego o 6-ciu osiach
 */
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

    /// pola odpowiadające punktom wyznaczanym podczas sprawdzenia poprawności obliczeń
    SPunkt pTspr_, pPspr_, pRspr_;

public:
    /**
     * @brief Konstruktor klasy CMechanizm
     *
     * Ustawia początkowe wartości pól klasy
     */
    CMechanizm();

    /**
     * @brief Metoda wyznaczająca parametry kinematyczne robota
     *
     * Główna metoda, która wywołuje wszystkie podmetody potrzebne do wyznaczenia niezbędnych parametrów mechanizmu dla
     * wyznaczenia jego kinematyki. Podmetody są wywoływane według kolejności:
     * -# oblicz_pP()
     * -# oblicz_fi1_()
     * -# oblicz_fi5_()
     * -# oblicz_fi234()
     * -# oblicz_pR()
     * -# oblicz_ab()
     * -# oblicz_fi2_()
     * -# oblicz_fi3_()
     * -# oblicz_fi23()
     * -# oblicz_fi4_()
     * -# oblicz_p01()
     * -# oblicz_p0prim1()
     * -# oblicz_p0prim2()
     * -# oblicz_p02()
     * -# spr_pR()
     * -# spr_pP()
     * -# spr_pT()
     */
    void wyznaczWspolrzMech();

    /**
     * @brief Funkcja przypisuje warości konkretnych punktów mechanizmu
     *
     * Przypisywane są wartości dla punktów odpowiadającym polom klasy:
     * \li pT_
     * \li pP_
     * \li pR_
     * \li p01_
     * \li p0prim1_
     * \li p02_
     * \li p0prim2_
     * \li p00_
     *
     * @param tabPp - parametr w postaci tablicy struktur SPunkt, powinna mieć rozmiar 8
     */
    void przekazWspolrzPp(SPunkt tabPp[]);

    /**
     * @brief Metoda sprawdza czy punkty sprawdzające mają zgodne wartości z wyznaczonymi pierwotnie
     * @return
     */
    bool sprawdzPunktyTPR();

    /**
     * @brief Zamienia wartość kątową z radianów na stopnie
     * @param wartWRad - wartość kątowa w radianach
     * @return Zwraca podaną wartość kątową przeliczoną na stopnie
     * @see stNaRad(float wartWSt)
     */
    float radNaSt(float wartWRad);

    /**
     * @brief Zamienia wartość kątową ze stopni na radiany
     * @param wartWSt - wartość kątowa w stopniach
     * @return Zwraca podaną wartość kątową przeliczoną na radiany
     * @see radNaSt(float wartWRad)
     */
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

    /**
     * @brief wypiszAtrybuty
     * @param tabAtrParam - ma rozmiar równy liczbie wypisywanych atrybutów (czyli tu = 13)
     */
    void wypiszAtrybuty(QString tabAtrParam[]);

    /**
     * @brief wypiszTPR
     * @param param - ma rozmiar 3
     */
    void wypiszTPR(SPunkt param[]);

    /**
     * @brief wypiszTPRSpr
     * @param param - ma także rozmiar 3
     * @see wypiszTPR(SPunkt param[]
     */
    void wypiszTPRSpr(SPunkt param[]);

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

    /**
     * @brief Metoda sprawdzająca znaki współrzędnych w osi Z dla wszystkich punktów mechanizmu
     * @return jeśli przynajmniej jedna współrzędna w osi Z któregolwiek z punktów jest mniejsza od zera zwraca wartość true
     */
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

    /**
     * @brief Oblicza wartość współrzędnej maszynowej członu 1-go
     */
    void oblicz_fi1_();

    /**
     * @brief Oblicza wartość współrzędnej maszynowej członu 2-go
     */
    void oblicz_fi2_();

    /**
     * @brief Oblicza wartość współrzędnej maszynowej członu 3-go
     */
    void oblicz_fi3_();

    /**
     * @brief Oblicza wartość współrzędnej maszynowej członu 4-go
     */
    void oblicz_fi4_();

    /**
     * @brief Oblicza wartość współrzędnej maszynowej członu 5-go
     */
    void oblicz_fi5_();

    /**
     * @brief Oblicza wartość kąta między członami 2, 3 i 4
     */
    void oblicz_fi234();

    /**
     * @brief Oblicza wartość kąta między członami 2 i 3
     */
    void oblicz_fi23();

    /**
     * @brief Wykonuje obliczenia sprawdzające dla punktu P mechanizmu
     *
     * Wyznacza wartość pola pPspr_
     */
    void spr_pP();

    /**
     * @brief Wykonuje obliczenia sprawdzające dla punktu T mechanizmu
     *
     * Wyznacza wartość pola pTspr_
     */
    void spr_pT();

    /**
     * @brief Wykonuje obliczenia sprawdzające dla punktu R mechanizmu
     *
     * Wyznacza wartość pola pRspr_
     */
    void spr_pR();

};

#endif // CMECHANIZM_H
