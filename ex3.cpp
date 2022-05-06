//Zmodyfikuj program z zadania 1 tak,
// aby przypisanie składnikom danych wartości pobranych zklawiatury, w stworzonych  egzemplarzach klas Student oraz Pracownik,
// wykonane zostało zapomocą metody zaprzyjaźnionej z klasą.

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <dos.h>

using namespace std;


class osoba
{
protected:
    string imie;
    string nazwisko;
    string stanowisko;
    string grupa;
    int wiek;
};

class osoba_dane:public osoba
{
private:
  void dane();
  void pokaz_dane();
public:
void pokazanie();
};

void osoba_dane::dane()
{
cout << "podaj imie" << "\n";
cin >> imie;
cout << "podaj nazwisko" << "\n";
cin >> nazwisko;
cout << "podaj wiek" << "\n";
cin >> wiek;
cout << "\n";
}

void osoba_dane::pokaz_dane()
{
cout << "imie = " << imie << "\n";
cout << "nazwisko = " << nazwisko << "\n";
cout << "wiek = " << wiek << "\n";
}

void osoba_dane::pokazanie()
{
dane();
pokaz_dane();
}



class osoba_stanowisko:public osoba
{
private:
  void dane();
  void pokaz_dane();
public:
void pokazanie();
};

void osoba_stanowisko::dane()
{
cout << "\n";
cout << "podaj stanowisko " << "\n";
cin >> stanowisko;
cout << "\n";
}

void osoba_stanowisko::pokaz_dane()
{
cout << "stanowisko = " << stanowisko << "\n";
}

void osoba_stanowisko::pokazanie()
{
dane();
pokaz_dane();
}


class osoba_grupa:public osoba
{
private:
  void dane();
  void pokaz_dane();
public:
void pokazanie();
};

void osoba_grupa::dane()
{
cout << "\n";
cout << "podaj grupe " << "\n";
cin >> grupa;
cout << "\n";
}

void osoba_grupa::pokaz_dane()
{
cout << "stanowisko = " << grupa << "\n";
}

void osoba_grupa::pokazanie()
{
dane();
pokaz_dane();
}


int main()
{
    osoba_dane d1;
    d1.pokazanie();

    osoba_stanowisko d2;
    d2.pokazanie();

    osoba_grupa d3;
    d3.pokazanie();

return 0;
}