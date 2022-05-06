//Zmodyfikuj program z zadania 1 tak,
// aby przypisanie składnikom danych wartości pobranych zklawiatury, w stworzonych  egzemplarzach klas Student oraz Pracownik,
// wykonane zostało zapomocą metody zaprzyjaźnionej z klasą.

#include "conio.h"
#include "stdio.h"
#include "math.h"

const double DX=1e-6;

class calki
{
protected:
    double r, x1, x2;
    double wynik;
    void pok_wynik();
};

void calki::pok_wynik()
{
        printf("Wartosc calki=%.3lf", wynik);
}

class calka_sin:public calki
{
private:
  void dane();
  void calka();
public:
void process();
};

void calka_sin::dane()
{
printf("podaj x1, x2: ");
scanf("%lf%lf", &x1, &x2);
}

void calka_sin::calka()
{
double y, x=x1;
wynik=0;

while (x<=x2)
{
y=sin(x);
wynik+=y*DX;
x+=DX;
}
}

void calka_sin::process()
{
dane();
calka();
pok_wynik();
}

class calka_okr:public calki
{
private:void dane();
void calka();
public:
void process();
};

void calka_okr::dane()
{
printf("\n\nPodaj promien: ");
scanf("%lf", &r);printf("\nPodaj x1, x2: ");
scanf("%lf%lf", &x1, &x2);
}

void calka_okr::calka()
{
double y, x=x1;
wynik=0;
while(x<=x2)
{
y=sqrt(r*r-x*x);
wynik+=y*DX;x+=DX;
}
}

void calka_okr::process()
{
dane();
calka();
pok_wynik();
}

int main()
{
calka_sin sinusoid;
sinusoid.process();

calka_okr circle;
circle.process();

return 0;
}