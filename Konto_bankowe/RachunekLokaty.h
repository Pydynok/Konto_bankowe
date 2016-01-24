#pragma once
#include <iostream>

#include "RachunekBiezacy.h"
#include "Data.h"

using namespace std;

class RachunekLokaty : public RachunekBiezacy{
	Czas::Data data_zamkniecia_rachunku;

public:
	RachunekLokaty();
	RachunekLokaty(string naz_oddz, string nr_rach, Klient wl_rach, float oproc, Czas::Data data_zal_rach, Czas::Data data_zamk_rach, 
					float prow,	float oplat, bool karta);
	Czas::Data virtual get_data_zamkniecia_rachunku();
	
	virtual ~RachunekLokaty();
};

