#pragma once
#include "Bank.h"
#include"Adres.h"


Bank::Bank(){
	nazwa_oddzialu = "Domyslna nazwa oddzialu";
	adres_oddzialu = Adres();
}

Bank::Bank(string naz_oddz) {
	nazwa_oddzialu = naz_oddz;
}

Bank::Bank(string naz_oddz, Adres adres_oddz) {
	nazwa_oddzialu = naz_oddz;
	adres_oddzialu = adres_oddz;
}

Bank::~Bank() {
}

string Bank::get_nazwa_oddzialu() { return nazwa_oddzialu; }
Adres Bank::get_adres_oddzialu() { return adres_oddzialu; }
void Bank::set_nazwa_oddzialu(string naz_oddz) { nazwa_oddzialu = naz_oddz; }
void Bank::set_adres_oddzialu(Adres adres_oddz) { adres_oddzialu = adres_oddz; }
