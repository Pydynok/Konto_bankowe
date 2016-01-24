#pragma once
#include <iostream>
#include <ctime>

using namespace std;

namespace Czas {

	class Data {
		int dzien;
		int miesiac;
		int rok;
	public:
		Data();
		Data(int dz, int mi, int ro);

		int get_dzien();
		int get_miesiac();
		int get_rok();
		void set_dzien(int dz);
		void set_miesiac(int mi);
		void set_rok(int ro);
		static Data pobierz_aktualna_date();
		string format_daty();

		virtual ~Data();
	};
}