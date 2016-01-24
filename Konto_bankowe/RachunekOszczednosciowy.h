#pragma once
#include <iostream>

#include "RachunekBiezacy.h"

using namespace std;

class RachunekOszczednosciowy : public RachunekBiezacy{
	float oprocentowanie = 3.1;
	bool karta_do_rachunku = false;
public:
	RachunekOszczednosciowy();
	RachunekOszczednosciowy(string naz_oddz, string nr_rach, Klient wl_rach, Czas::Data data_zal_rach, 
							float prow, float oplat);

	virtual ~RachunekOszczednosciowy();
};

