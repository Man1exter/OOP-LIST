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

using namespace std;

class osoba
{
private:
    string imie;
    string nazwisko;
    int wiek;

protected:
    int dane_osoby_wiek();

public:
    int pokaz_dane();

     osoba()
     {
         imie = "MARIUSZ"
         nazwisko = "PERZYNSKI"
         wiek = 20;
     }


};

int osoba::pokaz_dane_wiek()
{
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
        grupa = "handlowcy"
    }
};
