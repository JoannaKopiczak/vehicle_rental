#include<iostream>
#include<string>
#include "Samochod.h"
#include "Motor.h"
#include "Rower.h"
#include "Wypozyczalnia.h"
#include "Pojazd.h"
using namespace std;

extern Wypozyczalnia w;

Samochod::Samochod(int a, string b, string c, int d, int e, string f) : Motor(a, b, c, d)
{
	liczbamiejsc = e;
	wielkoscbagaznika = f;
}

Samochod::Samochod() : Motor()
{
	liczbamiejsc = 0;
	wielkoscbagaznika = "brak";
}

void Samochod::wypozycz()
{
	if (w.s > 0)
	{
		cout << "  Ktory samochod chcesz wypozyczyc?(Podaj numer)" << endl;
		Samochod a;
		Pojazd* p = &a;
		p->wyswietl();
		cout << "  Wybor: ";
		int numer;
		cin >> numer;
		w.tabs[numer - 1].cena = 0;
		w.tabs[numer - 1].kolor = "brak";
		w.tabs[numer - 1].marka = "brak";
		w.tabs[numer - 1].spalanie = 0;
		w.tabs[numer - 1].liczbamiejsc = 0;
		w.tabs[numer - 1].wielkoscbagaznika = "brak";
		cout << "  Wypozyczyles samochod nr " << numer << endl;
		w.s--;
	}
	else
	{
		cout << "  Brak samochodow" << endl;
		system("pause");
	}
}

void Samochod::wyswietl()
{
	for (int i = 0; i < 10; i++)
		cout << w.tabs[i];
}

void Samochod::dodaj()
{
	if (w.s < 10)
	{
		int i = 0;
		while (w.tabs[i].cena != 0)
		{
			i++;
		}
		cout << "Cena:" << endl;
		cin >> w.tabs[i].cena;
		cout << "Kolor:" << endl;
		cin >> w.tabs[i].kolor;
		cout << "Marka:" << endl;
		cin >> w.tabs[i].marka;
		cout << "Spalanie:" << endl;
		cin >> w.tabs[i].spalanie;
		cout << "Liczba miejsc:" << endl;
		cin >> w.tabs[i].liczbamiejsc;
		cout << "Wielkosc bagaznika:" << endl;
		cin >> w.tabs[i].wielkoscbagaznika;
		w.s++;
	}
	else
	{
		cout << "  Brak miejsc" << endl;
		system("pause");
	}
}

ostream& operator<<(ostream& str, Samochod tabs)
{
	static int ls = 1;
	str << "  Samochod nr: " << ls << " Cena: " << tabs.cena << " Kolor: " << tabs.kolor << " Marka: " << tabs.marka << " Spalanie: " << tabs.spalanie << " Liczba miejsc: " << tabs.liczbamiejsc << " Wielkosc bagaznika: " << tabs.wielkoscbagaznika << endl;
	ls++;
	if (ls == 11) ls -= 10;
	return str;
}