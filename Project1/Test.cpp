#include <iostream>
#include "hataSinifi.h"
using namespace std;

class HataSinifi {
private:
	string hataMesaji;
public:
	HataSinifi(string _hataMesaji) {
		hataMesaji = _hataMesaji;
	}
	string getHataMesaji() {
		return hataMesaji;
	}
};

int main() {
	try {
		int x;
		cout << "x degerini girin = ";
		cin >> x;
		if(x<0)
			throw HataSinifi("Hata Mesaji No:1");
		else if(x==0)
			throw 101;
		cout << "Try sonu...x = " << x << endl;
	}
	catch (HataSinifi h) {
		cout << "Exception yakalandi! Ozel hata mesajii = " << h.getHataMesaji() << endl;
	}
	catch (int hataKodu) {
		cout << "Exception yakalandi! Ozel hata mesajii = " << hataKodu << endl;
	}
	catch (...) {
		cout << "Exception yakalandi!\n";
	}

	cout << "bye...\n";
	return 0;
}