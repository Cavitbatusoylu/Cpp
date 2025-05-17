#include <iostream>
using namespace std;

/************************************************************************/
/*																		*/
/* Pointerlar i�inde adres tutan C/C++'a �zg� �zel bir de�i�ken tipidir */
/*																		*/
/************************************************************************/

	// PO�NTERLAR G�R��
	/*
	int x = 7;
	int y = 8;

	int* ptr;//int *ptr;// Pointer i�inde adres tutan yap�d�r.
	ptr = &y; // &: adress of : 'n�n adresi   &x = x de�i�keninin adresi
	cout << *ptr << endl;
	*ptr = 9;
	cout << *ptr << endl;
	cout << "y: " << endl;

	ptr = &x;
	*ptr = 20;
	cout << "x: " << x << endl;
	return 0;
	*/

	// KONU PEK��T�RME 1
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

	// KONU PEK��T�RME 2
	/*
int ucaginYonBilgileriniHesapla(int x_) {
	// �ok fazla say�da matematiksel hesaplama sat�rlar� i�erdi�ini d���n�n...
	x_ = 34;
	return x_;
}

void ucaginYonBilgileriniHesapla(int* p) {
	// �ok fazla say�da matematiksel hesaplama sat�rlar� i�erdi�ini d���n�n...
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

	// PO�NTERLAR �LE ARRAYLAR ARASINDAK� �L��K�
	/*
int main() {

	double arr[] = { 8, 12, 20 };

	double* p;
	p = arr;

	cout << p << endl;
	cout << arr << endl;
	// �kisi de ayn� adres tutar

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

	// M�lakat S�nav Sorusu
	/*
int main() {
	
	// Bu kodun ��kt�s� ne olur?
	int x = 7;
	int* p = &x;
	int y = *p + 8;
	int* z = &y;
	int w = *z + 5;
	cout << w;
}
*/