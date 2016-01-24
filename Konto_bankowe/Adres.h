#pragma once
#include <iostream>

using namespace std;

	class Adres {
		string ulica;
		int nr_domu;
		int nr_mieszkania;
		string kod_pocztowy;
		string miasto;
		string panstwo;
	public:
		Adres();
		Adres(string ul, int nr_d, int nr_m, string kod, string mias, string pans);

		string get_ulica();
		int get_nr_domu();
		int get_nr_mieszkania();
		string get_kod_pocztowy();
		string get_miasto();
		string get_panstwo();
		void set_ulica(string ul);
		void set_nr_domu(int nr_d);
		void set_nr_mieszkania(int nr_m);
		void set_kod_pocztowy(string kod);
		void set_miasto(string mias);
		void set_panstwo(string pans);
		string format_adresu();

		virtual ~Adres();
	};
