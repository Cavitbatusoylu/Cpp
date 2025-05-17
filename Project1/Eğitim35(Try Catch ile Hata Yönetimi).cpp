#include <iostream>
using namespace std;

int main() {
	//Try-Catch Kullanýmý
	/*
	try {
		int yas;
		cout << "Yasiniz = ";
		cin >> yas;
		if (yas >= 18) {
			cout << "Erisim yetkiniz var - yasiniz yeterince buyuk";
		}
		else
		{
			throw(yas);
			return -1;
		}
	}
	catch (int hataNo) {
		cout << "Erisim engellendi, en az 18 yasinde olmalisiniz!\n";
		cout << "Yasiniz = " << hataNo;
	}
	*/

	try {
		int x = 30;
		int y;
		cout << "Lutfen pozitif bir sayi girin = ";
		cin >> y;

		if (y == 0)
			throw 100;
		else if (y < 0)
			throw 101;
		else {
			int z = x / y;
			cout << z << endl;
		}
	}
	catch (int hataKodu) {
		//cout << "Bir exception olustu, hata kodu:" << hataKodu << endl;
		if (hataKodu == 101) {
			cout << "Negatif deger olculdu!";
			return -1;
		}
		else if (hataKodu == 100)
			cout << "0 degeri olculdu!";
	}


	cout << "\bye..\n";
	return 0;
}