#include <iostream>
using namespace std;

// FONKSÝYONLAR
/*
int hesapla(int x)
{
	int sonuc;
	sonuc = 3 * x + 2;
	return sonuc;
}

int alanHesapla(int x, int y)
{
	int alan = x * y;
	return alan;
}

void kareAlanHesaplaGoster(int kenar)
{
	cout << "Kare alaný = " << (kenar * kenar) << endl;
}

void hicbirSeyYapma(string isim)
{
	cout << "Merhaba " << isim << endl;
}

string adSoyadBirlestir()
{
	string ad, soyad, adSoyad;
	cout << "Lutfen adinizi giriniz = ";
	cin >> ad;
	cout << "Lutfen soyadinizi giriniz = ";
	cin >> soyad;

	adSoyad = ad + " " + soyad;
	return adSoyad;
}

int main()
{
	// C++ Fonksiyonlar - C++ Metodlar
	// f(x) = 3x + 2

	// cout << " Sonuc = " << hesapla(3) << endl;
	//cout << alanHesapla(5, 10) << endl;
	//kareAlanHesaplaGoster(5); // function call - fonksiyon çaðrýsý
	//hicbirSeyYapma("Kaan");
	// cout << adSoyadBirlestir() << endl;


	cout << "Hoscakalin..\n";
	return 0;
}

//FONKSÝYONLARIN AÞIRI YÜKLENMESÝ
/*
#include <iostream>
using namespace std;

void ekranaHataMesajiYaz()
{
	cout << "Dikkat: Programda hata olustu!" << endl;
}

void ekranaHataMesajiYaz(string mesaj)
{
	cout << mesaj << endl;
}

void ekranaHataMesajiYaz(int msg)
{
	cout << msg << endl;
}

int main()
{
	// C++ Fonksiyonlar - C++ Metodlar
	ekranaHataMesajiYaz();
	ekranaHataMesajiYaz("Error in program");
	ekranaHataMesajiYaz(404);

	cout << "Hoscakalin..\n";
	return 0;
}
*/

// rand() fonksiyonu
/*
#include <cstdlib> // rand fonksiyonu için gerekli
#include <ctime> // time fonksiyonu için gerekli

int main() {
	// rand()
	// srand()

	// time(0): 1970 yýlýnýn 1 Ocak günü 00:00:00'dan itibaren geçen saniye cinsinden zaman
	cout << "time(0) = " << time(0) << endl;

	srand(time(0)); // Rastgele sayi üreticisini zamanla besliyoruz

	int rastgeleSayi = rand();
	cout << "Uretilen rastgele sayi = " << endl;

	// 2.örnek
	// 1-100 arasýnda sayý üretelim
	int rastgeleSayi2 = (rand() % 100) + 1;
	cout << "Uretilen Rastgele Sayi = " << rastgeleSayi2 << endl;

	return 0;
}
*/

// ÖRNEK SINAV SORUSU (rand())
/*
#include <cstdlib> // rand fonksiyonu için gerekli
#include <ctime> // time fonksiyonu için gerekli

//Bir fonksiyon max ve min tamsayý parametre alsýn
// min ve max aralýðýnda (min ve max dahil) rastegele sayý üretsin

int rastgeleSayiUret(int min, int max) {
	int rastgeleSayi = min + (rand() % (max - min + 1));
	return rastgeleSayi;
}

int main() {
	
	int min, max;
	cout << "Minimum degeri giriniz = ";
	cin >> min;
	cout << "Maksimum degeri giriniz = ";
	cin >> max;
	int sayi = rastgeleSayiUret(min, max);
	cout << min << " ile " << max << " arasinda uretilen rastgele sayi = " << sayi << endl;
	return 0;
}
*/