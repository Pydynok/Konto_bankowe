#pragma once
#include "Klient.h"
#include "Adres.h"
#include "Data.h"

Klient::Klient(){
	imie = "Przykladowe_imie";
	nazwisko = "Przykladowe_nazwisko";
	nr_telefonu = 222333444;
    data_urodzenia = Czas::Data();
	adres_zamieszkania = Adres();
}

Klient::Klient(string im, string naz, int nr_tel, Czas::Data data_ur, Adres adres_zam) {
	imie = im;
	nazwisko = naz;
	nr_telefonu = nr_tel;
	data_urodzenia = data_ur;
	adres_zamieszkania = adres_zam;
}

Klient::~Klient(){
}

string Klient::get_imie() { return imie; }
string Klient::get_nazwisko() { return nazwisko; }
int Klient::get_nr_telefonu() { return nr_telefonu; }
Czas::Data Klient::get_data_urodzenia() { return data_urodzenia; }
Adres Klient::get_adres_zamieszkania() { return adres_zamieszkania; }
void Klient::set_imie(string im) { imie = im; }
void Klient::set_nazwisko(string naz) { nazwisko = naz; }
void Klient::set_nr_telefonu(int nr_tel) { nr_telefonu = nr_tel; }
void Klient::set_data_urodzenia(Czas::Data data_ur) { data_urodzenia = data_ur; }
void Klient::set_adres_zamieszkania(Adres adres_zam) { adres_zamieszkania = adres_zam; }

string Klient::dane_klienta() {
	return imie + " " + nazwisko;
}