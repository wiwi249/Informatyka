#include <iostream>
using namespace std;
#include "Pracownik.h"

void main() {
	/*Data d1, d2;
	short int opcja;
	short int wybrana_data;
	while (true) {
		cout << "Co chcesz zrobic?\n1. Wpisz date\n2. Wyswietl date\n3. Porownaj daty ze soba\n4. Wypisz dzien/miesiac/rok\n\n0. Wyjscie\n\n";
		cin >> opcja;
		switch (opcja) {
		case 1:
			do {
				cout << "Ktora data?" << endl;
				cin >> wybrana_data;
			} while (wybrana_data > 2 || wybrana_data < 1);
			if (wybrana_data == 1)
				d1.Wpisz();

			else
				d2.Wpisz();

			continue;
			break;
		case 2:
			do {
				cout << "Ktora data?" << endl;
				cin >> wybrana_data;
			} while (wybrana_data > 2 || wybrana_data < 1);
			if (wybrana_data == 1)
				d1.Wypisz();

			else
				d2.Wypisz();

			continue;
			break;
		case 3:
			if (d1.Porownaj(d2)) {
				cout << "Daty 1 i 2 sa identyczne." << endl;
			}

			else {
				cout << "Daty 1 i 2 sie roznia" << endl;
			}

			continue;
			break;

		case 4:
			do {
				cout << "Ktora data?" << endl;
				cin >> wybrana_data;
			} while (wybrana_data > 2 || wybrana_data < 1);
			if (wybrana_data == 1)
				cout << d1.Dzien() << "/" << d1.Miesiac() << "/" << d1.Rok()<<endl;

			else
				cout << d2.Dzien() << "/" << d2.Miesiac() << "/" << d2.Rok()<<endl;
			continue;
			break;

		default:
			break;
		}
		break;

	}*/

	Pracownik p1;
	p1.Imie("Garol");
	p1.Nazwisko("Hunowski");

	cout << p1.Imie() << " "<< p1.Nazwisko() << endl;

	system("pause");
}