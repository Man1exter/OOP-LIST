// Po przeanalizowaniu przykładów 1-3 przygotuj program obiektowy według poniższych instrukcji:
// ● stwórz klasę podstawowąOsobaoraz dwie klasy pochodneStudentorazPracownik
// ● klasy te powinny zawierać metodępokaz_dane()(przesłonięcie)
// ● utwórz w programie egzemplarze klasStudentorazPracownik,a następnie przypisz ichskładnikom danych wartości pobrane z klawiatury

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <dos.h>


using namespace std;

class osoba
{
 private:
    string imie;
    string nazwisko;
    int wiek;

 protected:
    int pokaz_dane_all();

 public:
    int pokaz_dane();

     osoba()
     {
         imie = "MARIUSZ";
         nazwisko = "PERZYNSKI";
         wiek = 20;
     }


};

int osoba::pokaz_dane_all()
{
    return imie;
    return nazwisko;
    return wiek;
}

class pracownik:public osoba
{
 private:
    string stanowisko;
 public:
    void pokaz_dane();

    pracownik()
    {
        stanowisko = "LIDER";
    }
};

class student:public osoba
{
 private:
    string grupa;
 public:
    void pokaz_dane();

    student()
    {
        grupa = "handlowcy";
    }
};

void osoba::pokaz_dane()
{
    cout << "IMIE: " << imie << "\n";
    cout << "NAZWISKO: " << nazwisko << "\n";
    cout << "WIEK: " << wiek << "\n";
}

void pracownik::pokaz_dane()
{
    cout << "IMIE: " << imie << "\n";
    cout << "NAZWISKO: " << nazwisko << "\n";
    cout << "WIEK: " << wiek << "\n";
    cout << "stanowisko: " << stanowisko << "\n";
}

void student::pokaz_dane()
{
    cout << "IMIE: " << imie << "\n";
    cout << "NAZWISKO: " << nazwisko << "\n";
    cout << "WIEK: " << wiek << "\n";
    cout << "grupa: " << grupa << "\n";
}

int main()
{
    setlocale(LC_CTYPE, "Polish"); // polskie znaki w konsoli

    osoba ex1;
    pracownik ex2;
    student ex3;

    ex1.pokaz_dane();
    ex2.pokaz_dane();
    ex3.pokaz_dane();
}