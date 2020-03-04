#include<iostream>
#include<string>
#include "Samochod.h"
#include "Motor.h"
#include "Rower.h"
#include "Wypozyczalnia.h"
#include "Pojazd.h"
using namespace std;

extern Wypozyczalnia w;

Rower::Rower(int a, string b, string c)
{
	cena = a;
	kolor = b;
	marka = c;
}

Rower::Rower()
{
	cena = 0;
	kolor = "brak";
	marka = "brak";
}

void Rower::wypozycz()
{
	if (w.r > 0)
	{
		cout << "  Ktory rower chcesz wypozyczyc?(Podaj numer)" << endl;
		Rower a;
		Pojazd* p = &a;
		p->wyswietl();
		cout << "   Wybor: ";
		int numer;
		cin >> numer;
		w.tabr[numer - 1].cena = 0;
		w.tabr[numer - 1].kolor = "brak";
		w.tabr[numer - 1].marka = "brak";

		cout << "  Wypozyczyles rower nr " << numer << endl;
		w.r--;
	}
	else
	{
		cout << "  Brak rowerow" << endl;
		system("pause");
	}
}

void Rower::wyswietl()
{
	for (int i = 0; i < 30; i++)
		cout << w.tabr[i];
}

void Rower::dodaj()
{
	if (w.r < 30)
	{
		int i = 0;
		while (w.tabr[i].cena != 0)
		{
			i++;
		}

		cout << "Cena:" << endl;
		cin >> w.tabr[i].cena;
		cout << "Kolor:" << endl;
		cin >> w.tabr[i].kolor;
		cout << "Marka:" << endl;
		cin >> w.tabr[i].marka;
		w.r++;
	}
	else
	{
		cout << "  Brak miejsc" << endl;
		system("pause");
	}
}

ostream& operator<<(ostream& str, Rower tabr)
{

	static int lr = 1;
	str << "  Rower nr: " << lr << " Cena: " << tabr.cena << " Kolor: " << tabr.kolor << " Marka: " << tabr.marka << endl;
	lr++;
	if (lr == 31) lr -= 30;
	return str;
}
