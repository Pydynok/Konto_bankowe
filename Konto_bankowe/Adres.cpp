#pragma once
#include <sstream>

#include "Adres.h"


Adres::Adres() {
	ulica = "Domyslna_ulica";
	nr_domu = 1;
	nr_mieszkania = 1;
	kod_pocztowy = "11-111";
	miasto = "Domyslne_miasto";
	panstwo = "Domyslne_panstwo";
}

Adres::Adres(string ul, int nr_d, int nr_m, string kod, string mias, string pans) {
	ulica = ul;
	nr_domu = nr_d;
	nr_mieszkania = nr_m;
	kod_pocztowy = kod;
	miasto = mias;
	panstwo = pans;
}

Adres::~Adres() {
}


string Adres::get_ulica() { return ulica; }
int Adres::get_nr_domu() { return nr_domu; }
int Adres::get_nr_mieszkania() { return nr_mieszkania; }
string Adres::get_kod_pocztowy() { return kod_pocztowy; }
string Adres::get_miasto() { return miasto; }
string Adres::get_panstwo() { return panstwo; }
void Adres::set_ulica(string ul) { ulica = ul; }
void Adres::set_nr_domu(int nr_d) { nr_domu = nr_d; }
void Adres::set_nr_mieszkania(int nr_m) { nr_mieszkania = nr_m; }
void Adres::set_kod_pocztowy(string kod) { kod_pocztowy = kod; }
void Adres::set_miasto(string mias) { miasto = mias; }
void Adres::set_panstwo(string pans) { panstwo = pans; }

string Adres::format_adresu() {
	stringstream format;
	format << ulica << " " << nr_domu << "/" << nr_mieszkania << ", " << kod_pocztowy << " " << miasto << ", " << panstwo;

	return format.str();
}