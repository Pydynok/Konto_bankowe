#pragma once
#include <iostream>

#include"RachunekBiezacy.h"

using namespace std;

class RachunekWalutowy : public RachunekBiezacy{
	string domyslna_waluta;

public:
	RachunekWalutowy();
	RachunekWalutowy(string naz_oddz, string nr_rach, Klient wl_rach, float oproc, string waluta, Czas::Data data_zal_rach, 
						float prow, float oplat, bool karta);

	string virtual get_domyslna_waluta();

	virtual ~RachunekWalutowy();
};

