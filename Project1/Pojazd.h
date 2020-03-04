#pragma once
#include<iostream>
using namespace std;

class Pojazd
{
public:
	virtual void wypozycz() = 0;
	virtual void wyswietl() = 0;
	virtual void dodaj() = 0;
};

