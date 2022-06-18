# Kinematyka-robota-przemyslowego
Aplikacja umożliwiająca przeprowadzenie symulacji przejścia mechanizmu 6-osiowego robota pomiędzy zadanymi pozycjami początkową i końcową

## O projekcie
<p align="justify">
Powstał na potrzeby przedmiotu Zasady Budowy Robotów, realizowanego w ramach studiów na kierunku Robotyka. 
Projekt został wykonany w ramach 2-osobowego zespołu. Do mojej części pracy zalicza się zawarta w niniejszym repozytorium implementacja wcześniej opracowanych funkcji obliczających poszczególne parametry mechanizmów z wykorzystaniem metod i atrybutów klasy <i>CMechanizm</i>.

Oprócz tego przygotowałem klasy graficzne odpowiedzialne za interfejs graficzny użytkownika, a także wyrysowanie na ekranie aplikacji członów mechanizmu oraz symulacje ich przejścia - <i>CRysRobota</i>, <i>UserGuide</i>.
</p>

## Wykorzystane biblioteki
<p align="justify">
  Do utworzenia części graficznej zostały wykorzystane odpowiednie klasy z bibliotek środowiska Qt. Główne z nich to: 
  <ul>
    <li><i>QGraphicsItem</i> - po tej klasie dziedziczą wszystkie autorskie klasy, których obiekty są rysowane w aplikacji</li>
    <li><i>QPainter</i> - klasa umożliwiająca rysowanie pewnych standardowych elementów</li>
    <li><i>QGraphicsView</i> i <i>QGraphicsScene</i> - klasy służące za swego rodzaju "płótna", na których wyrysowywane są konkretne elementy</li>
  </ul>  
  
  Oprócz powyższych wykorzystane zostały także formularze środowiska Qt, które umożliwiają odpowiednie zaprojektowanie "okienkowego" interfejsu użytkownika. Dostarczają podstawowych elementów do interakcji z użytkownikiem, np. pola tekstowe, przyciski, "combo boxy", "slidery". W plikach źródłowych odpowiadających formularzom można zaimplementować odpowiednie metody obsługujące akcje elementów wejścia i wyjścia danych użytkownika.  
</p>
