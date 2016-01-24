#pragma once
#include "RachunekWalutowy.h"
#include "RachunekBiezacy.h"


RachunekWalutowy::RachunekWalutowy(){
	domyslna_waluta = "";
}

RachunekWalutowy::RachunekWalutowy(string naz_oddz, string nr_rach, Klient wl_rach, float oproc, string waluta, 
									Czas::Data data_zal_rach, float prow, float oplat, bool karta) 
	: RachunekBiezacy(naz_oddz, nr_rach, wl_rach, oproc, data_zal_rach, prow, oplat, karta) {

	domyslna_waluta = waluta;
}

string RachunekWalutowy::get_domyslna_waluta() { return domyslna_waluta; }

RachunekWalutowy::~RachunekWalutowy(){
}
