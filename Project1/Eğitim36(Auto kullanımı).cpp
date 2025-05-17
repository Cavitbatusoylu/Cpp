#include<iostream>
using namespace std;

// AUTO KULLANIMI
/*
// C++ 11 kullanan IDE'lerde auto fonk. kullanımı:
auto topla(int x, int y) -> int {
	return (x + y);
}

// C++ 14 kullanan IDE'lerde auto fonk. kullanımı:
auto cikar(int x, int y) {
	return (x - y);
}

int main() {
	auto sayi = 10; // Sayi degiskeni int olarak belirlenir
	auto metin = "Hello C++"; // string
	auto ondalik = 3.14; // double

	cout << "Sayi = " << sayi << endl;
	cout << "Metin = " << metin << endl;
	cout << "Ondalik = " << ondalik << endl;

	cout << "Toplam = " << topla(3, 2) << endl;
	cout << "Cikarma = " << cikar(3, 2) << endl;

	auto toplam = topla(10, 20);
	cout << toplam << endl;

	return 0;
}
*/

// PROGRAMLAMA SORUSU
/*
#include <iostream>
using namespace std;

int main() {
	int* p = new int(3);
	auto pa = p;

	cout << *pa << std::endl;

	// Bellek sızıntısını önlemek için ayırdığımız belleği serbest bırakıyoruz.
	delete p;

	return 0;
}
*/