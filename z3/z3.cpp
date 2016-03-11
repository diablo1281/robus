//Kompilacja z flag¹ -std=c++11

#include "osoba.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	vector<ksiazka> biblioteka;
	cout << "Dodaj ksi¹¿ki" << endl << endl;
	
	while (true)
	{
		string imie_autora, nazwisko_autora, tytul;
		int rok, numer;

		cout << "Imiê autora: " << flush;
		cin >> imie_autora;
		cout << "Nazwisko autora: " << flush;
		cin >> nazwisko_autora;
		cout << "Tytu³ ksiazki: " << flush;
		cin.ignore();
		getline(cin, tytul);
		cout << "Rok wydania: " << flush;
		cin >> rok;
		cout << "Numer wydania: " << flush;
		cin >> numer;

		ksiazka do_dodania(imie_autora, nazwisko_autora, tytul, rok, numer);
		biblioteka.push_back(do_dodania);

		cout << "\n\nCzy nastepna?" << endl;
		int tmp;
		cin >> tmp;

		system("cls");

		if (tmp == 0)
			break;
	}


	cout << "Biblioteka:" << endl;
	for (auto iter : biblioteka)
		cout << iter << "--------------------------------------" << endl;

	system("pause");
	return 0;
}