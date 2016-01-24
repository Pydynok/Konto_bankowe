#pragma once
#include "RachunekLokaty.h"
#include "RachunekBiezacy.h"
#include "Data.h"


RachunekLokaty::RachunekLokaty(){
	data_zamkniecia_rachunku = Czas::Data();
}

RachunekLokaty::RachunekLokaty(string naz_oddz, string nr_rach, Klient wl_rach, float oproc,
								Czas::Data data_zal_rach, Czas::Data data_zamk_rach, float prow, float oplat, bool karta)
	: RachunekBiezacy(naz_oddz, nr_rach, wl_rach, oproc, data_zal_rach, prow, oplat, karta) {

	data_zamkniecia_rachunku = data_zamk_rach;
}

Czas::Data RachunekLokaty::get_data_zamkniecia_rachunku() { return data_zamkniecia_rachunku; }

RachunekLokaty::~RachunekLokaty(){
}
