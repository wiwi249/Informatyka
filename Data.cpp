#include "Data.h"
#include <iostream>
using namespace std;

int Data::Dzien() const {
	return dzien;
}

int Data::Miesiac() const{
	return miesiac;
}

int Data::Rok() const {
	return rok;
}

void Data::Ustaw(int d, int m, int r) {
	dzien = d;
	miesiac = m;
	rok = r;

	Koryguj();
}

void Data::Koryguj() {
	if (miesiac > 12) {
		miesiac = 12;
	}

	if (miesiac < 1) {
		miesiac = 1;
	}

	if (dzien < 1) {
		dzien = 1;
	}

	if (miesiac == 1 || miesiac == 3 || miesiac == 5 || miesiac == 7 || miesiac == 8 || miesiac == 10 || miesiac == 12) {
		if (dzien > 31)
			dzien = 31;
	}
	else {
		if (miesiac == 2) {
			if ((rok % 100 != 0 && rok % 4 == 0) || rok % 400 == 0) {
				if (dzien > 29)
					dzien = 29;
			}
			else {
				if (dzien > 28)
					dzien = 28;
			}
		}

		else {
			if (dzien > 30)
				dzien = 30;
		}
	}
}

void Data::Wypisz() const {
	if (dzien<10)
		cout << "0";

	cout << dzien << ".";

	if (miesiac<10)
		cout << "0";

	cout << miesiac << ".";

	int roczek;
	roczek = (rok > 0 ? rok : -rok);

	cout << roczek;

	if (rok < 0) {
		cout << " p.n.e.";
	}

	cout << endl << endl;
}

void Data::Wpisz() {
	int d, m, r;
	cout << "Wpisz dzien" << endl;
	cin >> d;
	cout << "Wpisz miesiac" << endl;
	cin >> m;
	cout << "Wpisz rok" << endl;
	cin >> r;
	Ustaw(d, m, r);
}

int Data::Porownaj(const Data& wzor) const {
	return (dzien == wzor.dzien && miesiac == wzor.miesiac && rok == wzor.rok);
}

int Data::operator==(const Data & p){
	if (p.Rok() > this->Rok())
		return 2;

	else if (p.Rok() < this->Rok())
		return 1;

	if (p.Miesiac() > this->Miesiac())
		return 2;

	else if (p.Miesiac() < this->Miesiac())
		return 1;

	if (p.Dzien() > this->Dzien())
		return 2;

	else if (p.Dzien() < this->Dzien())
		return 1;

	return 0;
}