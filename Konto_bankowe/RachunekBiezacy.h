#pragma once
#include <iostream>
#include <fstream>
#include <string>

#include "Bank.h"
#include "Klient.h"
#include "Data.h"
#include "Wyjatki.h"

using namespace std;
	
class RachunekBiezacy : public Bank {
	string numer_rachunku;
	Klient wlasciciel_rachunku;
	float oprocentowanie;
	string domyslna_waluta;
	Czas::Data data_zalozenia_rachunku;
	Czas::Data data_zamkniecia_rachunku;
	float prowizja;
	float oplaty;
	bool karta_do_rachunku;
	float biezace_saldo_rachunku = 0;
public:
	RachunekBiezacy();
	RachunekBiezacy(string naz_oddz, string nr_rach, Klient wl_rach, float oproc, Czas::Data data_zal_rach, float prow, float oplat, bool karta);

	string get_numer_rachunku();
	Klient get_wlasciciel_rachunku();
	float get_oprocentowanie();
	string virtual get_domyslna_waluta();
	Czas::Data get_data_zalozenia_rachunku();
	Czas::Data virtual get_data_zamkniecia_rachunku();
	float get_prowizja();
	float get_oplaty();
	bool get_karta_do_rachunku();
	float get_biezace_saldo_rachunku();
	void set_numer_rachunku(string nr_rach);
	void set_wlasciciel_rachunku(Klient wl_rach);
	void set_oprocentowanie(float oproc);
	void set_data_zalozenia_rachunku(Czas::Data data_zal_rach);
	void set_prowizja(float prow);
	void set_oplaty(float oplat);
	void set_karta_do_rachunku(bool karta);
	void virtual wplata_gotowki(float wplata);
	void virtual wyplata_gotowki(float wyplata) throw (BrakWystarczajacychSrodkowNaKoncie);
	void virtual przelew_przychodzacy(float kwota_przel_przych, RachunekBiezacy *rachunek_nadawcy);
	void virtual przelew_wychodzacy(float kwota_przel_wych, RachunekBiezacy *rachunek_odbiorcy) throw (BrakWystarczajacychSrodkowNaKoncie);
	void virtual zamkniecie_rachunku() throw (NieMoznaUsunacKonta);
	void virtual zapis_danych_do_pliku(string dane);
	void virtual set_biezace_saldo_rachunku(float saldo_rach);
	string dane_rach_klienta();

	virtual ~RachunekBiezacy();
};

