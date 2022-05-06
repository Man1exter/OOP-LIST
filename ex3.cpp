//Zmodyfikuj program z zadania 1 tak,
// aby przypisanie składnikom danych wartości pobranych zklawiatury, w stworzonych  egzemplarzach klas Student oraz Pracownik,
// wykonane zostało zapomocą metody zaprzyjaźnionej z klasą.

#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ostream>

using namespace std;


class osoba
{
protected:
    string imie,nazwisko;
    int wiek;
    void poka_dane();
};

void osoba::poka_dane()
{
        printf("Początkowo imie = ", imie);
        printf("Początkowo nazwisko= ", nazwisko);
        printf("Początkowo wiek = ", wiek);
}

class osoba_dane:public osoba
{
private:
  void dane();
  void osoba();
public:
  void process();
};

void osoba_dane::dane()
{
cout << "podaj imie, nazwisko, wiek: " <<;
cin >> imie,nazwisko,wiek;
}

void osoba_dane::osoba()
{
cout << "Imie :" << imie << endl;
cout << "Nazwisko :" << nazwisko << endl;
cout << "Wiek :" << wiek << endl;
}

void osoba_dane::process()
{
dane();
osoba();
poka_dane();
}

class osoba_stanowisko:public osoba
{
private:
void dane();
void osoba();
public:
void process();
};

void osoba_stanowisko::dane()
{
cout << "Podaj stanowisko :" << "\n";
cin >> stanowisko;
}

void osoba_stanowisko::osoba()
{
cout << "Stanowisko => " << stanowisko << "\n";
}

void osoba_stanowisko::process()
{
dane();
osoba();
poka_dane();
}

int main()
{
osoba_dane d1;
d1.process();

osoba_stanowisko d2;
d2.process();

return 0;
}