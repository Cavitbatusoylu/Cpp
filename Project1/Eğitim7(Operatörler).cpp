#include <iostream>
using namespace std;

// OPERATÖR UYGULAMALARI
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
	//Kullanýcýdan üç tamasyý giriþi alan ve bu girdiler arasýndaki en küçüðünü bulan bir program yazýnýz
	
	int sayi1, sayi2, sayi3;
	cout << "1.sayiyi giriniz = ";
	cin >> sayi1;
	cout << "2.sayiyi giriniz = ";
	cin >> sayi2;
	cout << "3.sayiyi giriniz = ";
	cin >> sayi3;

	//En küçük sayýyý bulalým
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

// OPERATÖR OVERLOADING (BÖLÜM 27)
/*
class Complex {
private:
	double real, imag;

public:
	Complex(double r = 0, double i = 0) {
		real = r;
		imag = i;
	}

	// ÜYE FONKSÝYON KULLANARAK OPERATÖR OVERLOADÝNG
	// + operatörünü aþýrý yükleme
	Complex operator+(const Complex& other) {
		return Complex(real + other.real, imag + other.imag);
	}

	// - operatörünü aþýrý yükleme
	Complex operator-(const Complex& other) {
		return Complex(real - other.real, imag - other.imag);
	}

	// * operatörünü aþýrý yükleme
	Complex operator*(const Complex& other) {
		return Complex(
			real * other.real - imag * other.imag,  // Gerçek Kýsmý
			real * other.imag + imag * other.real   // Sanal Kýsmý
		);
	}

	// GLOBAL FONKSÝYON KULLANARAK OPERATÖR OVERLOADÝNG
	// << operatörünü aþýrý yükleme
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

// OPERATÖR OVERLOADING
/*
Aþaðýdaki gereksinimlere uygun bir C++ programý yazýnýz:

1. Kare adýnda bir sýnýf oluþturun. Bu sýnýf, bir karenin kenar uzunluðunu (kenar) tutmalýdýr

2. + operatörünü aþýrý yükleyerek, iki kare nesnesinin kenar uzunluklarýný toplayan ve yeni bir kae nesnesi
döndüren bir fonksiyon tanýmlayýn

3. << operaötürünü aþýrý yükleyerek, bir kare nesnesinin kenar uzunluðunu ve alanýný ekrana yazdýran bir
fonksiyon tanýmlayýn

4. main fonksiyonu içinde en az iki kare nesnesi oluþturun, bu nesneleri toplayýn ve tüm nesneleri cout ile
ekrana yazdýrýn. Programýnýzýn çýktýsý her bir karenin kenar uzunluðunu ve alanýný içermelidir

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

	//+ operatörünü aþýrý yükleme: 2 Karenin kenar uzunluklarýný toplar
	Kare operator+(const Kare& other) {
		return Kare(kenar + other.kenar);
	}

	// friend olarak << operatörünü aþýrý yükleme => Örn. Kullaným : cout << kare;
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