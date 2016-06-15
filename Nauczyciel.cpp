#include "Nauczyciel.h"
#include <iostream>


Nauczyciel::Nauczyciel()
{
	staz = 0;
	przedmiot = "";
}

Nauczyciel::Nauczyciel(char * _imie, char * _nazwisko, Data _data, char * _przedmiot, double _staz) {
	pszImie = _strdup(_imie);
	pszNazwisko = _strdup(_nazwisko);
	DataUrodzenia = _data;
	przedmiot = _strdup(_przedmiot);
	staz = _staz;
}

char * Nauczyciel::Wizytowka() {
	char * buf = "";
	sprintf(buf, "Zawod: Nauczyciel\nImie i nazwisko: %s %s\nData urodzenia: %d.%d.%d\nDane dodatkowe: %s %f lat", pszImie, pszNazwisko, DataUrodzenia.Dzien(), DataUrodzenia.Miesiac(), DataUrodzenia.Rok(), przedmiot, staz);
	return buf;
}

char * Nauczyciel::Przedmiot() {
	return this->przedmiot;
}

double Nauczyciel::Staz() {
	return this->staz;
}

void Nauczyciel::Staz(double staz) {
	this->staz = staz;
}