#pragma once
#include "RachunekOszczednosciowy.h"
#include "RachunekBiezacy.h"


RachunekOszczednosciowy::RachunekOszczednosciowy(){
}

RachunekOszczednosciowy::RachunekOszczednosciowy(string naz_oddz, string nr_rach, Klient wl_rach,Czas::Data data_zal_rach, 
													float prow, float oplat)
	: RachunekBiezacy(naz_oddz, nr_rach, wl_rach, 3.1, data_zal_rach, prow, oplat, false) {}
	
RachunekOszczednosciowy::~RachunekOszczednosciowy(){
}
