#include <iostream>
#include <string>
#include <vector>

#include "ksiazka.h"

using namespace std;

class osoba
{
private:
	string imie;
	string nazwisko;
	vector<ksiazka> spis_ksiazek;

public:
	osoba();
	osoba(string ximie, string xnazwisko);
	~osoba();

	void wypozycz_ksiazke(ksiazka xksiazka);
	void oddaj_ksiazka(ksiazka xksiazka);

	friend ostream &operator << (ostream & stream, osoba const& out);
};

