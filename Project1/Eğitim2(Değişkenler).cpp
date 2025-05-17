#include <iostream>

using namespace std;

int main()
{
	// int => 4 byte'lýk bir hafýza kaplar. -2147483648 ile 2147483647 arasýndaki deðerleri taþýyabilir
	// char => 1  bytle'lýk bir hafýza kaplar (ASCII tablosu kullanýlýr)
	// bool => Doðru ya da yanlýþ deðerini taþýr. 1 Byte
	// float => Ondalýklý sayýlarý tutmak için kullanýlýr. 4 Byte'lýk bir hafýza kaplar
	// double => Ondalýklý sayýlarý tutmak için kullanýlýr. 8 Byte'lýk bir hafýza kaplar
	// string => Bir karakter dizisini (metni) depolamak için kulanýlýr. Yukarýdakiler gibi primitive bir tür deðildir ancak en temel kullanýmýnda bunlar gibi davranýr.
	// void => Void herhangi bir deðeri olmayan anlamýna gelir. Deðer döndürmeyen iþlevler için void veri türü kullanýlýr.

	/*string isim = "Cavit Batu Soylu";
	int dogumYili = 2006;
	float sayisalNotOrtalamasi = 3.47;
	double pi = 3.141592267879912;
	bool sinifGectiMi = true;
	char notOrtalamasiHarf = 'A';
	int quiz1 = 72, quiz2 = 81;
	//float quizOrtalama = (float) (quizNot1 + quizNot2) / 2;
	float quizOrtalama = (quizNot1 + quizNot2) / 2;

	cout << "Merhaba Sayin = " << isim << endl;
	cout << "Dogum Yili = " << dogumYili << endl;
	cout << "Sayisal Not Ortalamasi = " << sayisalNotOrtalamasi << endl;
	cout << "Sinifi Gectiniz Mi? = " << sinifGectiMi << endl;
	cout << "Not Ortalamasi = " << notOrtalamasiHarf << endl;
	cout << "Quizler ortalamasý = " << quizOrtalama << endl;

	int x = 10;
	int y = 12;
	int z = 12 % 10; // mod (modulus) operatoru
	cout << z << endl;

	return 0;*/

	// ONDALIK SAYI GÖSTERÝMÝ ÝÇÝN SETPRECÝSÝON & FÝXED KULLANIMI
	/*#include <iostream>
	#include <iomanip>
	using namespace std;

	int main() {

		double deger = 123.456789;
		cout << deger << endl;

		// setprecision(N) manipülatörü toplam anlamlý rakam (significant digits) sayýsýný ayarlar
		cout << setprecision(4) << deger << endl;

		// noktadan sonraki digits sayýsýnýn gösterimini ayarlamak fixed ile setprecision birlikte kullanýlýr
		cout << fixed << setprecision(3) << deger << endl;
	}*/

}