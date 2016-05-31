#include "Nauczyciel.h"
#include "Data.h"
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
	char * buf;
	sprintf(buf, "Zawod: Nauczyciel\nImie i nazwisko: %s %s\nData urodzenia: %s\nDane dodatkowe: %s %f lat");
	return buf;
}
