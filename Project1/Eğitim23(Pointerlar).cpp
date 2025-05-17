#include <iostream>
using namespace std;

/************************************************************************/
/*																		*/
/* Pointerlar içinde adres tutan C/C++'a özgü özel bir deðiþken tipidir */
/*																		*/
/************************************************************************/

	// POÝNTERLAR GÝRÝÞ
	/*
	int x = 7;
	int y = 8;

	int* ptr;//int *ptr;// Pointer içinde adres tutan yapýdýr.
	ptr = &y; // &: adress of : 'nýn adresi   &x = x deðiþkeninin adresi
	cout << *ptr << endl;
	*ptr = 9;
	cout << *ptr << endl;
	cout << "y: " << endl;

	ptr = &x;
	*ptr = 20;
	cout << "x: " << x << endl;
	return 0;
	*/

	// KONU PEKÝÞTÝRME 1
	/*
	int main() {
	int x = 10;

	int* ptr;
	ptr = &x; //address of x

	cout << "x degiskeninin adresi : " << &x << endl;
	cout << "ptr pointerinin icinde tutulan adres: " << ptr << endl;
	return 0;
	}
	*/

	// KONU PEKÝÞTÝRME 2
	/*
int ucaginYonBilgileriniHesapla(int x_) {
	// Çok fazla sayýda matematiksel hesaplama satýrlarý içerdiðini düþünün...
	x_ = 34;
	return x_;
}

void ucaginYonBilgileriniHesapla(int* p) {
	// Çok fazla sayýda matematiksel hesaplama satýrlarý içerdiðini düþünün...
	*p = 34;
}

// vxworks integrity : real time OS C/C++

int main() {

	int x = 10;

	//x = ucaginYonBilgileriniHesapla(x);
	int* p;
	p = &x;
	for (int i = 0; i < 100000; i++)
	{
		ucaginYonBilgileriniHesapla(p);
	}
	
	cout << "Yeni yon bilgisi : " << x << endl;
	return 0;
}
*/

	// POÝNTERLAR ÝLE ARRAYLAR ARASINDAKÝ ÝLÝÞKÝ
	/*
int main() {

	double arr[] = { 8, 12, 20 };

	double* p;
	p = arr;

	cout << p << endl;
	cout << arr << endl;
	// Ýkisi de ayný adres tutar

	*(p + 2) = *(p+2) * 2;
	//cout << arr[1] << endl;
	cout << *(p+1) << endl;
	cout << "arr[2]: " << arr[2] << endl;

	cout << "Adresler - ileri seviye ek bilgi:\n";
	cout << p << endl;
	cout << (p + 1) << endl;

	return 0;
}
*/

	// Mülakat Sýnav Sorusu
	/*
int main() {
	
	// Bu kodun çýktýsý ne olur?
	int x = 7;
	int* p = &x;
	int y = *p + 8;
	int* z = &y;
	int w = *z + 5;
	cout << w;
}
*/