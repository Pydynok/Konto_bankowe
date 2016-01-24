#pragma once
#include <iostream>
#include <string>

#include "Adres.h"
#include "Data.h"

using namespace std;

class Klient{
	string imie;
	string nazwisko;
	int nr_telefonu;
	Czas::Data data_urodzenia;
	Adres adres_zamieszkania;
public:
	Klient();
	Klient(string im, string naz, int nr_tel, Czas::Data d_ur, Adres adres_zam);

	string get_imie();
	string get_nazwisko();
	int get_nr_telefonu();
	Czas::Data get_data_urodzenia();
	Adres get_adres_zamieszkania();
	void set_imie(string im);
	void set_nazwisko(string naz);
	void set_nr_telefonu(int nr_tel);
	void set_data_urodzenia(Czas::Data d_ur);
	void set_adres_zamieszkania(Adres adres_zam);
	string dane_klienta();

	virtual ~Klient();
};

