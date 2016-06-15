#pragma once
#include "Pracownik.h"

class Nauczyciel :
	public Pracownik
{
private:
	char * przedmiot;
	double staz;

public:
	Nauczyciel();
	Nauczyciel(char * _imie, char * _nazwisko, Data _data, char * _przedmiot, double _staz);

	char * Przedmiot();
	double Staz();
	//void Przedmiot(const char * _przed);
	void Staz(double _staz);
	//void WprowadzDane();
	//char * Tabela();
	char * Wizytowka();
};

