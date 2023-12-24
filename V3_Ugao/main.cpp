#include <iostream>
#include "ugao.h"

using namespace std;

int main() {
	Ugao u1, u2;	//zato sto nismo explicitno napisali koji konstruktor daje se podrazumevani konstruktor stavio sam da je u=0 podraz
	Ugao u3(10);
	Ugao u4(30, 20, 10); // mogu {} umesto ()

	cout << "Prvi ugao u Rad: "; u1.citaj(); //cout << endl;
	cout << "Drugi ugao u Rad: "; u2.citaj();// cout << endl;

	//u1.dodaj(u2).pomnozi(2); // zbog & u deklaraciji menja se objekat poosle pomnozi i posle dodaj
	//u1.pisi();

	cout << u4.min();

	Ugao sr = Ugao(u1).dodaj(u2).pomnozi(0.5);// nesto kopirajuci konstruktor?
	sr.pisi();
}