#include "osoba.h"



osoba::osoba()
{
	this->imie = "";
	this->nazwisko = "";
}

osoba::osoba(string ximie, string xnazwisko)
{
	this->imie = ximie;
	this->nazwisko = xnazwisko;
}


osoba::~osoba()
{
}

void osoba::wypozycz_ksiazke(ksiazka xksiazka)
{
	for (auto iter = this->spis_ksiazek.begin(); iter != this->spis_ksiazek.end(); iter++)
		if (xksiazka == *iter)
		{
			cerr << "Ksi¹¿ka zosta³¹ ju¿ wypo¿yczona przez tego osobnika!" << endl;
			return;
		}

	if (xksiazka.czy_wypozyczona())
	{
		cerr << "Ksi¹¿ka zosta³¹ ju¿ wypo¿yczona!" << endl;
		return;
	}

	this->spis_ksiazek.push_back(xksiazka.wypozycz());
}

void osoba::oddaj_ksiazka(ksiazka xksiazka)
{
	for (auto iter = this->spis_ksiazek.begin(); iter != this->spis_ksiazek.end(); iter++)
		if (xksiazka == *iter)
		{
			spis_ksiazek.erase(iter);
			return;
		}
}

ostream & operator<<(ostream & stream, osoba const & out)
{
	stream << "Imie: " << out.imie << endl;
	stream << "Nazwsko: " << out.nazwisko << endl;

	return stream;
}
