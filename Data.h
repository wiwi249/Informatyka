class Data {
	int dzien;
	int miesiac;
	int rok;

public:
	int Dzien() const;
	int Miesiac() const;
	int Rok() const;
	void Ustaw(int d, int m, int r);
	void Wypisz() const;
	void Wpisz();
	void Koryguj();
	int Porownaj(const Data& wzor) const;

	int operator ==(const Data & p);
};