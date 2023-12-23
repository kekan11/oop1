#ifndef _tacka_h_
#define _tacka_h_

#include <iostream>
using namespace std;

class Tacka {
	double x, y; //atributi podrazumeva se privatna ako nije navedeno

public:
	void postavi(double a, double b) { //postavljen je i skriveni parametar this
		this->x = a; //x = a;
		this->y = b; //y = b;
	}

	//inline metode jer je definisana ovde
	//ako je metoda inline onda je brza jer se parametri neinline metode moraju staviti na stek i potreban nam je pointer za to?
	double aps() { return x; } //apscisa x = this->x
	double ops() const { return y; } // y = this->y

	double rastojanje(Tacka t) const; //necemo odmah definiciju nego u .cpp

	void citaj() {
		cin >> x >> y;
	}
	void pisi() const {
		cout << "(" << x << ", " << y << ")";
	}
};


#endif // !_tacka_h_
