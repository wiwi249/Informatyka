#include "Data.h"

class Pracownik {
protected:
	char* pszImie;
	char* pszNazwisko;
	Data DataUrodzenia;
	static int siLiczPrac;

public:
	Pracownik();
	~Pracownik();

	const char* Imie() const;
	const char* Nazwisko() const;

	void Imie(const char* nowe_imie);
	void Nazwisko(const char* nowe_nazwisko);
	void DataUrodz(int nowy_dzien, int nowy_miesiac, int nowy_rok);

	void Wypisz() const;
	void Wpisz();

	bool SprawdzImie(const char* por_imie) const;
	bool SprawdzNazwisko(const char* por_nazwisko) const;
};