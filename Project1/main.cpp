#include<iostream>
#include<string>
#include<cstdlib>
#include<windows.h>
#include "Pojazd.h"
#include "Rower.h"
#include "Motor.h"
#include "Samochod.h"
using namespace std;


int main()
{
	int haslo = 5555;
	int koniec = 1;

	while (koniec)
	{
		cout << "  ------------------------" << endl;
		cout << "  WYPOZYCZALNIA POJAZDOW" << endl;
		cout << "  ------------------------" << endl;
		cout << "  OPCJA 1: Dodaj pojazd do wypozyczalni (tylko administrator)" << endl;
		cout << "  OPCJA 2: Wypozycz pojazd" << endl;
		cout << "  OPCJA 3: Wyswietl pojazdy" << endl;
		cout << "  OPCJA 4: Wyjdz z wypozyczalni pojazdow" << endl;
		cout << endl;
		cout << "  Wybierz 1,2,3 lub 4." << endl;
		cout << "  Twoj wybor: ";
		int a;
		cin >> a;
		cout << endl;

		switch (a)
		{
		case 1:
		{
			int spr;
			cout << "  Podaj haslo administratora:";
			cin >> spr;
			if (spr == haslo)
			{
				int co;
				cout << endl;
				cout << "  Chcesz dodac:" << endl;
				cout << "  Opcja 1: Rower " << endl;
				cout << "  Opcja 2: Motor " << endl;
				cout << "  Opcja 3: Samochod " << endl;
				cout << "  Opcja 4: Wroc do poprzedniego wyboru " << endl;
				cout << endl;
				cout << "  Wybierz 1,2 lub 3." << endl;
				cout << "  Twoj wybor: ";
				cin >> co;
				cout << endl;

				switch (co)
				{
				case 1:
				{
					Rower r1;
					Pojazd* p = &r1;
					p->dodaj();
					system("cls");
					break;
				}
				case 2:
				{
					Motor m1;
					Pojazd* p = &m1;
					p->dodaj();
					system("cls");
					break;
				}
				case 3:
				{
					Samochod s1;
					Pojazd* p = &s1;
					p->dodaj();
					system("cls");
					break;
				}
				case 4:
					system("cls");
					break;

				}
			}
			else
			{
				cout << "Bledne haslo" << endl;
				system("pause");
				system("cls");
			}
			break;
		}
		case 2:
		{
			int co;
			cout << endl;
			cout << "  Chcesz wypozyczyc:" << endl;
			cout << "  Opcja 1: Rower " << endl;
			cout << "  Opcja 2: Motor " << endl;
			cout << "  Opcja 3: Samochod " << endl;
			cout << "  Opcja 4: Wroc do poprzedniego wyboru " << endl;
			cout << endl;
			cout << "  Wybierz 1,2 lub 3." << endl;
			cout << "  Twoj wybor: ";
			cin >> co;
			cout << endl;

			switch (co)
			{
			case 1:
			{
				Rower r2;
				Pojazd* p = &r2;
				p->wypozycz();
				system("pause");
				system("cls");
				break;
			}
			case 2:
			{
				Motor m2;
				Pojazd* p = &m2;
				p->wypozycz();
				system("pause");
				system("cls");
				break;
			}
			case 3:
			{
				Samochod s2;
				Pojazd* p = &s2;
				p->wypozycz();
				system("pause");
				system("cls");
				break;
			}
			case 4:
				system("cls");
				break;
			}
			break;
		}
		case 3:
		{

			int choice;
			cout << endl;
			cout << "  Chcesz wyswietlic:" << endl;
			cout << "  Opcja 1: Rowery " << endl;
			cout << "  Opcja 2: Motory " << endl;
			cout << "  Opcja 3: Samochody " << endl;
			cout << "  Opcja 4: Wroc do poprzedniego wyboru " << endl;

			cout << endl;
			cout << "  Wybierz 1,2 lub 3." << endl;
			cout << "  Twoj wybor: ";
			cin >> choice;
			cout << endl;

			switch (choice)
			{
			case 1:
			{
				Rower r3;
				Pojazd* p1 = &r3;
				p1->wyswietl();
				system("pause");
				system("cls");
				break;
			}
			case 2:
			{
				Motor m3;
				Pojazd* p1 = &m3;
				p1->wyswietl();
				system("pause");
				system("cls");
				break;
			}
			case 3:
			{
				Samochod s3;
				Pojazd* p1 = &s3;
				p1->wyswietl();
				system("pause");
				system("cls");
				break;
			}
			case 4:
				system("cls");
				break;

			}
			break;
		}
		case 4:
		{
			koniec = 0;
			break;
		}
		}
	}

	return 0;
}