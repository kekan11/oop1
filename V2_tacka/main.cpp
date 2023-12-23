#include <iostream>
#include "tacka.h"

using namespace std;



int main() {
	Tacka t1; // t1 je objekat klase Tacka
	double x, y;

	cin >> x >> y;
	t1.postavi(x, y); //t1.x = x nmze jer je privatan atribut, ali metoda je public
	cout << "uneta tacke je: ";
	t1.pisi();

	cout << endl;

	Tacka t2;
	t2.citaj();
	cout << "Uneta tacka je: ";
	t2.pisi();

	cout << endl;
	cout << "rastojanje" << t1.rastojanje(t2);
}
