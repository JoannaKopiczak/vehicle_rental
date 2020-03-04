#include<iostream>
#include<string>
#include "Samochod.h"
#include "Motor.h"
#include "Rower.h"
#include "Wypozyczalnia.h"
#include "Pojazd.h"
using namespace std;

extern Wypozyczalnia w;

Motor::Motor(int a, string b, string c, int d) :Rower(a, b, c)
{
	spalanie = d;
}

Motor::Motor() : Rower()
{
	spalanie = 0;
}

void Motor::wypozycz()
{
	if (w.m > 0)
	{
		cout << "  Ktory motor chcesz wypozyczyc?(Podaj numer)" << endl;
		Motor a;
		Pojazd* p = &a;
		p->wyswietl();
		cout << "  Wybor: ";
		int numer;
		cin >> numer;
		w.tabm[numer - 1].cena = 0;
		w.tabm[numer - 1].kolor = "brak";
		w.tabm[numer - 1].marka = "brak";
		w.tabm[numer - 1].spalanie = 0;

		cout << "  Wypozyczyles motor nr " << numer << endl;
		w.m--;
	}
	else
	{
		cout << "  Brak motorow" << endl;
		system("pause");
	}
}

void Motor::wyswietl()
{
	for (int i = 0; i < 30; i++)
		cout << w.tabm[i];
}

void Motor::dodaj()
{

	if (w.m < 30)
	{
		int i = 0;
		while (w.tabm[i].cena != 0)
		{
			i++;
		}
		cout << "Cena:" << endl;
		cin >> w.tabm[i].cena;
		cout << "Kolor:" << endl;
		cin >> w.tabm[i].kolor;
		cout << "Marka:" << endl;
		cin >> w.tabm[i].marka;
		cout << "Spalanie:" << endl;
		cin >> w.tabm[i].spalanie;
		w.m++;
	}
	else
	{
		cout << "  Brak miejsc" << endl;
		system("pause");
	}
}

ostream& operator<<(ostream& str, Motor tabm)
{
	static int lm = 1;
	str << "  Motor nr: " << lm << " Cena: " << tabm.cena << " Kolor: " << tabm.kolor << " Marka: " << tabm.marka << " Spalanie: " << tabm.spalanie << endl;
	lm++;
	if (lm == 31) lm -= 30;
	return str;
}