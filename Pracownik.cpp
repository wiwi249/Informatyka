#include "Pracownik.h"
#include <iostream>
using namespace std;

const char* Pracownik::Imie() const {
	return pszImie;
}

const char* Pracownik::Nazwisko() const {
	return pszNazwisko;
}

void Pracownik::Imie(const char* imie) {
	pszImie = _strdup(imie);
}

void Pracownik::Nazwisko(const char* nazw) {
	pszNazwisko = _strdup(nazw);
}

Pracownik::Pracownik() :
	id(siLiczPrac == NULL ? 0 : siLiczPrac)
{
	if (siLiczPrac == NULL) {
		this->siLiczPrac = 0;
	}
	this->siLiczPrac++;
}

Pracownik::~Pracownik() {
	siLiczPrac--;
	if (siLiczPrac == 0) {
		cout << "Usunieto ostatniego pracownika!"<<endl;
	}
}

int Pracownik::ID() {
	return this->id;
}