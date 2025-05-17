#include <iostream>
using namespace std;

// OPERAT�R UYGULAMALARI
/*
int main()
{
	/*int x = 1234;
	int y = 222;

	if (x == y)
	{
		cout << "Dogru Sifre";
	}
	else
	{
		cout << "Yanlis Sifre";
	}
	
	/*int x = 1234;
	int y = 222;

	if (x != y)
	{
		cout << "Yanlis Sifre";
	}
	else
	{
		cout << "Dogru Sifre";
	}
	

	/*int sayi1, sayi2;
	cout << "1.Sayiyi Giriniz = ";
	cin >> sayi1;
	cout << "2.Sayiyi Giriniz = ";
	cin >> sayi2;

	if (sayi1 > 0 && sayi2 > 0)
	{
		cout << "Her iki sayi da pozitiftir\n";
	}
	else if (sayi1 < 0 && sayi2 < 0)
	{
		cout << "Her iki sayi da negatiftir\n";
	}
	else if (sayi1 < 0 || sayi2 < 0)
	{
		cout << "Sayilarimizdan biri negatif\n";
	}

	/*
	int x = 5;
	if (!(x != 5))
	{
		cout << "herhangi bir mesaj\n";
	}
	return 0;
	
}
*/

// PROGRAMLAMA SINAV SORUSU
/*
int main()
{
	//Kullan�c�dan �� tamasy� giri�i alan ve bu girdiler aras�ndaki en k�����n� bulan bir program yaz�n�z
	
	int sayi1, sayi2, sayi3;
	cout << "1.sayiyi giriniz = ";
	cin >> sayi1;
	cout << "2.sayiyi giriniz = ";
	cin >> sayi2;
	cout << "3.sayiyi giriniz = ";
	cin >> sayi3;

	//En k���k say�y� bulal�m
	int enKucuk;
	if (sayi1 <= sayi2 && sayi1 <= sayi3)
	{
		enKucuk = sayi1;
	}
	else if (sayi2 <= sayi1 && sayi2 <= sayi3)
	{
		enKucuk = sayi2;
	}
	else
	{
		enKucuk = sayi3;
	}

	cout << "Enk kucuk sayi = " << enKucuk << endl;
	return 0;
}
*/

// OPERAT�R OVERLOADING (B�L�M 27)
/*
class Complex {
private:
	double real, imag;

public:
	Complex(double r = 0, double i = 0) {
		real = r;
		imag = i;
	}

	// �YE FONKS�YON KULLANARAK OPERAT�R OVERLOAD�NG
	// + operat�r�n� a��r� y�kleme
	Complex operator+(const Complex& other) {
		return Complex(real + other.real, imag + other.imag);
	}

	// - operat�r�n� a��r� y�kleme
	Complex operator-(const Complex& other) {
		return Complex(real - other.real, imag - other.imag);
	}

	// * operat�r�n� a��r� y�kleme
	Complex operator*(const Complex& other) {
		return Complex(
			real * other.real - imag * other.imag,  // Ger�ek K�sm�
			real * other.imag + imag * other.real   // Sanal K�sm�
		);
	}

	// GLOBAL FONKS�YON KULLANARAK OPERAT�R OVERLOAD�NG
	// << operat�r�n� a��r� y�kleme
	friend ostream& operator<<(ostream& os, const Complex& c) {
		os << c.real << " + " << c.imag << "i";
		return os;
	}

	void display() {
		cout << real << " + " << imag << "i" << endl;
	}
};

int main() {
	Complex c1(1.5, 2.5);
	Complex c2(3.5, 4.5);
	Complex c3 = c1 * c2;

	//c3.display();
	cout << c3;

	return 0;
}
*/

// OPERAT�R OVERLOADING
/*
A�a��daki gereksinimlere uygun bir C++ program� yaz�n�z:

1. Kare ad�nda bir s�n�f olu�turun. Bu s�n�f, bir karenin kenar uzunlu�unu (kenar) tutmal�d�r

2. + operat�r�n� a��r� y�kleyerek, iki kare nesnesinin kenar uzunluklar�n� toplayan ve yeni bir kae nesnesi
d�nd�ren bir fonksiyon tan�mlay�n

3. << opera�t�r�n� a��r� y�kleyerek, bir kare nesnesinin kenar uzunlu�unu ve alan�n� ekrana yazd�ran bir
fonksiyon tan�mlay�n

4. main fonksiyonu i�inde en az iki kare nesnesi olu�turun, bu nesneleri toplay�n ve t�m nesneleri cout ile
ekrana yazd�r�n. Program�n�z�n ��kt�s� her bir karenin kenar uzunlu�unu ve alan�n� i�ermelidir

#include <iostream>
using namespace std;

class Kare {
private:
	double kenar;

public:
	// Constructor
	Kare(double k = 0) {
		kenar = k;
	}

	//+ operat�r�n� a��r� y�kleme: 2 Karenin kenar uzunluklar�n� toplar
	Kare operator+(const Kare& other) {
		return Kare(kenar + other.kenar);
	}

	// friend olarak << operat�r�n� a��r� y�kleme => �rn. Kullan�m : cout << kare;
	friend ostream& operator<<(ostream& os, const Kare& k) {
		os << "Kenar Uzunlugu = " << k.kenar << ", Alan = " << (k.kenar * k.kenar);
		return os;
	}
};

int main() {
	Kare k1(5);
	Kare k2(3);

	Kare k3 = k1 + k2;

	cout << k3 << endl;

	return 0;
}
*/