#pragma once
#include <ctime>
#include <sstream>

#include "Data.h"

using namespace Czas; 

Data::Data() {
	dzien = 1;
	miesiac = 1;
	rok = 1900;
}

Data::Data(int dz, int mi, int ro) :dzien(dz), miesiac(mi), rok(ro) {
}

Data::~Data() {
}

int Data::get_dzien() { return dzien; }
int Data::get_miesiac() { return miesiac; }
int Data::get_rok() { return rok; }
void Data::set_dzien(int dz) { dzien = dz; }
void Data::set_miesiac(int mi) { miesiac = mi; }
void Data::set_rok(int ro) { rok = ro; }

string Data::format_daty() {
	stringstream format;
	format << dzien << "." << miesiac << "." << rok;

	return format.str();
}

Data Data::pobierz_aktualna_date() {
	static time_t aktualna_data;
	struct tm data;
	time(&aktualna_data);
	localtime_s(&data, &aktualna_data);

	return Data(data.tm_mday, data.tm_mon + 1, 1900 + data.tm_year);

}
