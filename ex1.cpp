//Po przeanalizowaniu przykładów 1-3 przygotuj program obiektowy według poniższych instrukcji:
//●stwórz klasę podstawowąOsobaoraz dwie klasy pochodneStudentorazPracownik
//●klasy te powinny zawierać metodępokaz_dane()(przesłonięcie)
//●utwórz w programie egzemplarze klasStudentorazPracownik,a następnie przypisz ichskładnikom danych wartości pobrane z klawiatury
//Zadaniem programu jest wyświetlanie danych przechowywanych w stworzonychegzemplarzach klasStudentorazPracownik(przesłonięciemetodypokaz_dane()).

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <dos.h>

using namespace std;

class osoba{
    private:
      string imie,nazwisko;
      int wiek;

    public:
      void pokaz_dane();

       osoba(){
           imie = "Mariusz";
           nazwisko = "Perzynski";
           wiek = 20;
       }
};

int main()
{
    osoba x1;
    
    x1.pokaz_dane();
}

