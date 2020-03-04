#pragma once
#include<iostream>
using namespace std;
#include "Pojazd.h"

class Rower : public Pojazd
{
public:
	void wypozycz();
	void wyswietl();
	void dodaj();
	Rower(int, string, string);
	Rower();
	int cena;
	string kolor;
	string marka;

};

ostream& operator<<(ostream&, Rower);