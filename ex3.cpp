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


int main()
{
    osoba_dane d1;
    d1.pokazanie();

return 0;
}