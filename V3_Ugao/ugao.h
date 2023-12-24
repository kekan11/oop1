#ifndef _ugao_h_
#define _ugao_h_
#include <iostream>

using namespace std;

const double FAKTOR = 3.14 / 180;

class Ugao {
	double ugao; // u radianima

public:
	Ugao(double u = 0) {				//konstruktor podrazumevana vred 0, podraz konstr
		ugao = u;
	}
	Ugao(int stp, int min, int sek) {
		ugao = ((sek / 60.0 + min) / 60 + stp) * FAKTOR;  // 60.0 da bi bilo realno deljenje
	}

	double rad() const { return ugao; }

	int stp() const { return ugao / FAKTOR; }

	int min() const { return int(ugao / FAKTOR * 60) % 60; } //konverzija double u int

	int sek() const { return int(ugao / FAKTOR * 3600) % 60; }

	void razlozi(int& st, int& mi, int& se) const { //preko ref jer hocemo tako da "returnujemo" resenje
		st = stp(); // moze this->stp()
		mi = min();
		se = sek();
	}
	Ugao& dodaj(Ugao u) { //dodajemo ugao
		this->ugao += u.ugao;
		return *this;
	}
	Ugao& pomnozi(double a) { //mnozimo konstantom ugao
		this->ugao *= a;
		return *this;
	}
	void citaj() { cin >> ugao; }

	void citajStep() {
		int stp, min, sek;
		cin >> stp >> min >> sek;
		//ugao = ((sek / 60.0 + min) / 60 + stp) * FAKTOR;
		*this = Ugao(stp, min, sek); //privremeni obj se smesta u nas obj?
	}

	void pisi() const { cout << ugao; }

	void pisiStep() const;
};


#endif // !_ugao_h_
