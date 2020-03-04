#include<iostream>
#include<string>
#include "Samochod.h"
#include "Motor.h"
#include "Rower.h"
#include "Wypozyczalnia.h"
#include "Pojazd.h"
using namespace std;

Wypozyczalnia w;

int Wypozyczalnia::r = 0;
int Wypozyczalnia::m = 0;
int Wypozyczalnia::s = 0;

Wypozyczalnia::Wypozyczalnia()
{
	for (int i = 0; i < 30; i++)
	{
		tabr[i] = Rower::Rower();
		tabm[i] = Motor::Motor();
	}
	for (int i = 0; i < 10; i++)
	{
		tabs[i] = Samochod::Samochod();
	}

}