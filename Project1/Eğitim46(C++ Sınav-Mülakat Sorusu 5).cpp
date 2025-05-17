#include <iostream>
#include "Hesap.h"
using namespace std;

int main() {
	/*
	Ad: Cavit Batu Soylu
	Hesap No: 16062006
	Bakiye: 1000.75
	*/

	Hesap hesap1 = Hesap("Cavit Batu Soylu", 16062006, 1000.75);
	Hesap hesap2 = Hesap("Enes Kaya", 6082005, 2000.50);

	hesap1.hesabaParaYatir(200);
	hesap1.hesaptanParaCek(100);
	hesap1.hesapDetayGoruntule();

	hesap2.hesapDetayGoruntule();

	try {
		hesap2.hesaptanParaCek(100);
	}
	catch (exception e) {
		cout << e.what();
	}

	cout << endl;
	return 0;
}