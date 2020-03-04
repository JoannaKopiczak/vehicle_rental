#pragma once
#include<iostream>
#include "Rower.h"

using namespace std;

class Motor : public Rower
{
public:
	void wypozycz();
	void wyswietl();
	void dodaj();
	Motor(int, string, string, int);
	Motor();
	int spalanie;
};

ostream& operator<<(ostream&, Motor);