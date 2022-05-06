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

class osoba{
      string imie = "Mariusz";
      string nazwisko = "Perzynski";
      int wiek;

    protected:
      
      void pokaz_dane();

    public:
      void pokaz_wszystkie_dane(); // przesloniecie
};

void osoba::pokaz_dane(){
    int wiek = 20;
}

void osoba::pokaz_wszystkie_dane(){
    void pokaz_dane();
    cout << "Imie: " << imie << "\n";
    cout << "Nazwisko: " << nazwisko << "\n";
    cout << "Wiek: " << wiek << "\n";
}

class pracownik: private osoba
{
  private:
    string rola = "LIDER";
    void pracownik_dane();
  public:
    void pokaz_wszystkie_dane(); // przesloniecie
};

void pracownik::pracownik_dane(){
    cout << "ROLA W FIRMIE: " << rola << "\n";
}

void pracownik::pokaz_wszystkie_dane(){
    pracownik_dane();
}

class kierownik: private osoba
{
  private:
    string grupa = "Handlowcy";
    void pracownik_dane();
  public:
    void pokaz_wszystkie_dane(); // przesloniecie
};

void kierownik::pracownik_dane(){
    cout << "Grupa w firmie: " << grupa << "\n";
}

void kierownik::pokaz_wszystkie_dane(){
    pracownik_dane();
}

int main()
{
    osoba ex1;
    pracownik ex2;
    kierownik ex3;

    ex1.pokaz_wszystkie_dane();
    ex2.pokaz_wszystkie_dane();
    ex3.pokaz_wszystkie_dane();

    return 0;
}