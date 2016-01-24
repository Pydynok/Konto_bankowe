#pragma once
#include <sstream>

#include "RachunekBiezacy.h"



RachunekBiezacy::RachunekBiezacy(){
	numer_rachunku = "";
	wlasciciel_rachunku = Klient();
	oprocentowanie = 1.1;
	domyslna_waluta = "PLN";
	data_zalozenia_rachunku = Czas::Data();
	data_zamkniecia_rachunku = Czas::Data();
	prowizja = 1;
	oplaty = 6.1;
	karta_do_rachunku = true;
}

RachunekBiezacy::RachunekBiezacy (string naz_oddz, string nr_rach, Klient wl_rach, float oproc, Czas::Data data_zal_rach,
									float prow, float oplat, bool karta) : Bank(naz_oddz) {
	numer_rachunku = nr_rach;
	wlasciciel_rachunku = wl_rach;
	oprocentowanie = oproc;
	domyslna_waluta = "PLN";
	data_zalozenia_rachunku = data_zal_rach;
	data_zamkniecia_rachunku = Czas::Data();
	prowizja = prow;
	oplaty = oplat;
	karta_do_rachunku = karta;
}

RachunekBiezacy::~RachunekBiezacy(){
}

string RachunekBiezacy::get_numer_rachunku() { return numer_rachunku; }
Klient RachunekBiezacy::get_wlasciciel_rachunku() { return wlasciciel_rachunku; }
float RachunekBiezacy::get_oprocentowanie() { return oprocentowanie; }
string RachunekBiezacy::get_domyslna_waluta() { return domyslna_waluta; }
Czas::Data RachunekBiezacy::get_data_zalozenia_rachunku() { return data_zalozenia_rachunku; }
Czas::Data RachunekBiezacy::get_data_zamkniecia_rachunku() { return data_zamkniecia_rachunku; }
float RachunekBiezacy::get_prowizja() { return prowizja; }
float RachunekBiezacy::get_oplaty() { return oplaty; }
bool RachunekBiezacy::get_karta_do_rachunku() { return karta_do_rachunku; }
float RachunekBiezacy::get_biezace_saldo_rachunku() { return biezace_saldo_rachunku; }
void RachunekBiezacy::set_numer_rachunku(string nr_rach) { numer_rachunku = nr_rach; }
void RachunekBiezacy::set_wlasciciel_rachunku(Klient wl_rach) { wlasciciel_rachunku = wl_rach; }
void RachunekBiezacy::set_oprocentowanie(float oproc) { oprocentowanie = oproc; }
void RachunekBiezacy::set_data_zalozenia_rachunku(Czas::Data data_zal_rach) { data_zalozenia_rachunku = data_zal_rach; }
void RachunekBiezacy::set_prowizja(float prow) { prowizja = prow; }
void RachunekBiezacy::set_oplaty(float oplat) { oplaty = oplat; }
void RachunekBiezacy::set_karta_do_rachunku(bool karta) { karta_do_rachunku = karta; }
void RachunekBiezacy::set_biezace_saldo_rachunku(float saldo_rach) { biezace_saldo_rachunku = saldo_rach; }
void RachunekBiezacy::wplata_gotowki(float wplata) {
	set_biezace_saldo_rachunku(get_biezace_saldo_rachunku() + wplata); 
	stringstream komunikat;
	komunikat << "Wplata gotowki: " << wplata << " na rachunek " << numer_rachunku;
	zapis_danych_do_pliku (komunikat.str());
}
void RachunekBiezacy::wyplata_gotowki(float wyplata) throw (BrakWystarczajacychSrodkowNaKoncie) { 
	if (biezace_saldo_rachunku < wyplata){
		throw BrakWystarczajacychSrodkowNaKoncie();
	}
	set_biezace_saldo_rachunku(get_biezace_saldo_rachunku() - wyplata); 
	stringstream komunikat;
	komunikat << "Wyplata gotowki: " << wyplata << " z rachunku " << numer_rachunku;
	zapis_danych_do_pliku(komunikat.str());
}
void RachunekBiezacy::przelew_przychodzacy(float kwota_przel_przych, RachunekBiezacy *rachunek_nadawcy) {
	rachunek_nadawcy->wyplata_gotowki(kwota_przel_przych);
	set_biezace_saldo_rachunku(get_biezace_saldo_rachunku() + kwota_przel_przych);
	stringstream komunikat;
	komunikat << "Przelew przychodzacy, kwota: " << kwota_przel_przych << " z rachunku " << rachunek_nadawcy->get_numer_rachunku();
	zapis_danych_do_pliku(komunikat.str());
}
void RachunekBiezacy::przelew_wychodzacy(float kwota_przel_wych, RachunekBiezacy *rachunek_odbiorcy) 
throw (BrakWystarczajacychSrodkowNaKoncie){
	if (biezace_saldo_rachunku < kwota_przel_wych) {
		throw BrakWystarczajacychSrodkowNaKoncie();
	}
	set_biezace_saldo_rachunku(get_biezace_saldo_rachunku() - kwota_przel_wych);
	rachunek_odbiorcy->wplata_gotowki(kwota_przel_wych);
	stringstream komunikat;
	komunikat << "Przelew wychodzacy, kwota: " << kwota_przel_wych << " na rachunek " << rachunek_odbiorcy->get_numer_rachunku();
	zapis_danych_do_pliku(komunikat.str());
}
void RachunekBiezacy::zamkniecie_rachunku() throw (NieMoznaUsunacKonta){
	if (biezace_saldo_rachunku > 0) {
			throw NieMoznaUsunacKonta();
	}
	data_zamkniecia_rachunku = Czas::Data::pobierz_aktualna_date();
}

void RachunekBiezacy::zapis_danych_do_pliku(string dane) {
	fstream zapis_do_pliku;
	zapis_do_pliku.open("dane.log", ios::app);
	zapis_do_pliku << dane << endl;
	zapis_do_pliku.close();
}

string RachunekBiezacy::dane_rach_klienta() {
	return wlasciciel_rachunku.dane_klienta() + " " + numer_rachunku;
}