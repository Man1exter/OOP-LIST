//Po przeanalizowaniu przykładów 1-3 przygotuj program obiektowy według poniższych instrukcji:
//●stwórz klasę podstawowąOsobaoraz dwie klasy pochodneStudentorazPracownik
//●klasy te powinny zawierać metodępokaz_dane()(przesłonięcie)
//●utwórz w programie egzemplarze klasStudentorazPracownik,a następnie przypisz ichskładnikom danych wartości pobrane z klawiatury
//Zadaniem programu jest wyświetlanie danych przechowywanych w stworzonychegzemplarzach klasStudentorazPracownik(przesłonięciemetodypokaz_dane()).

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <dos.h>

using namespace std;

class osoba{
      string imie;
      string nazwisko;
      int wiek;

    protected:
      
      void pokaz_dane();

    public:
      void pokaz_wszystkie_dane(); // przesloniecie
};

void osoba::pokaz_dane(){
    string imie = "Mariusz";
    string nazwisko = "Perzynski";
    int wiek = 20;
}

void osoba::pokaz_wszystkie_dane(){
    void pokaz_dane();
    cout << "Imie: " << imie << "\n";
    cout << "Nazwisko: " << nazwisko << "\n";
    cout << "Wiek: " << wiek << "\n";
}


int main()
{
    setlocale(LC_CTYPE, "Polish"); // polskie znaki w konsoli
    osoba ex1;

    ex1.pokaz_wszystkie_dane();

    return 0;
}

