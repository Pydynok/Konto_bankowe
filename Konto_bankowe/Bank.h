#pragma once
#include <iostream>
#include "Adres.h"

using namespace std;

class Bank{
	string nazwa_oddzialu;
	Adres adres_oddzialu;
public:
	Bank();
	Bank(string naz_oddz);

	Bank(string naz_oddz, Adres adres_oddz);

	string get_nazwa_oddzialu();
	Adres get_adres_oddzialu();
	void set_nazwa_oddzialu(string naz_oddz);
	void set_adres_oddzialu(Adres adres_oddz);

	virtual ~Bank();
};

