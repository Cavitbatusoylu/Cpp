#include <iostream>
using namespace std;

class Otomobil {
private :
	string marka;

public:
	int yil;
	Otomobil(string _marka, int _yil) {
		marka = _marka;
		yil = _yil;
	}
	friend void bilgileriGoster(Otomobil oto); //friend fonk.
};

void bilgileriGoster(Otomobil oto) {
	cout << oto.yil << " " << oto.marka;
}

int main() {
	Otomobil otomobil1("Opel",2012);
	bilgileriGoster(otomobil1);
}