#include "ksiazka.h"



ksiazka::ksiazka()
{
	this->imie_autora = "";
	this->nazwisko_autora = "";
	this->tytul_ksiazki = "";
	this->rok_wydania = -1;
	this->numer_wydania = -1;
	this->wypozyczona = false;
}


ksiazka::ksiazka(string imie, string nazwisko, string tytul, int rok, int numer)
{
	this->imie_autora = imie;
	this->nazwisko_autora = nazwisko;
	this->tytul_ksiazki = tytul;
	this->rok_wydania = rok;
	this->numer_wydania = numer;
	this->wypozyczona = false;
}

ksiazka::~ksiazka()
{
}

bool ksiazka::czy_wypozyczona()
{
	return this->wypozyczona;
}

ksiazka ksiazka::wypozycz()
{
	this->wypozyczona = true;
	return *this;
}

void ksiazka::oddaj()
{
	this->wypozyczona = false;
}

bool ksiazka::operator==(ksiazka & porownaj)
{
	if ((porownaj.imie_autora == this->imie_autora) && (porownaj.nazwisko_autora == this->nazwisko_autora) && (porownaj.tytul_ksiazki == this->tytul_ksiazki) && (porownaj.rok_wydania == this->rok_wydania) && (porownaj.numer_wydania == this->numer_wydania))
		return true;

	return false;
}

ostream & operator<<(ostream & stream, ksiazka const & out)
{
	stream << "Tytu³: " << out.tytul_ksiazki << endl;
	stream << "Imiê autora: " << out.imie_autora << endl;
	stream << "Nazwisko autora: " << out.nazwisko_autora << endl;
	stream << "Rok wydania: " << out.rok_wydania << endl;
	stream << "Numer wydania: " << out.numer_wydania << endl;

	return stream;
}
