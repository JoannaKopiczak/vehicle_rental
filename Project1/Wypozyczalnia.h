#pragma once
#include<iostream>
using namespace std;
#include "Samochod.h"
#include "Motor.h"
#include "Rower.h"
#include "Pojazd.h"

class Wypozyczalnia
{
public:
	Wypozyczalnia();
	Rower tabr[30];
	Motor tabm[30];
	Samochod tabs[10];
	static int r;
	static int m;
	static int s;
};
