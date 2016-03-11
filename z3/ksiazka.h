#include <iostream>
#include <string>

using namespace std;

class ksiazka
{
private:
	string imie_autora;
	string nazwisko_autora;
	string tytul_ksiazki;
	int rok_wydania;
	int numer_wydania;

	bool wypozyczona;

public:
	ksiazka();
	ksiazka(string imie, string nazwisko, string tytul, int rok, int numer);
	~ksiazka();

	bool czy_wypozyczona();
	ksiazka wypozycz();
	void oddaj();

	bool operator ==(ksiazka &porownaj);
	friend ostream &operator << (ostream & stream, ksiazka const& out);
};

