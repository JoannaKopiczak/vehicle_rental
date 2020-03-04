#pragma once
#include<iostream>
#include "Motor.h"

using namespace std;


class Samochod : public Motor
{
public:
	void wypozycz();
	void wyswietl();
	void dodaj();
	Samochod(int, string, string, int, int, string);
	Samochod();
	int liczbamiejsc;
	string wielkoscbagaznika;
};

ostream& operator<<(ostream&, Samochod);
