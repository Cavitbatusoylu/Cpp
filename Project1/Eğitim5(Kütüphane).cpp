#include <iostream> //iostream kütüphanesinin içinde cmath kütüphanesi vardýr(WÝNDOWSLAR ÝÇÝN)
#include <cmath>

using namespace std;

int main()
{
	/*pow(a,b) => Sayýnýn üssünü almada kullanýlýr
	  floor(a.b) => Ondalýklý sayýyý tama yuvarlar ör= 2,7 sayýsýný 3 ye yuvarlar
	  ceil(a.b) => Ondalýklý sayýyý bir üst sayýya yuvarlar ör= 2.1 sayýsýný 2 ye yuvarlar
	  round(a.b) => Kendisine en yakýn tam sayýya yuvarlar
	*/
	int sonuc, x, y;
	cout << "Lütfen x sayisini giriniz =";
	cin >> x;
	cout << "Lütfen y sayisini giriniz =";
	cin >> y;
	sonuc = pow(x, y);
	cout << "Sonuc";
	
	int sonuc;
	sonuc = floor (2.7);
	cout << "Sonuc = " << sonuc << endl;

	int sonuc;
	sonuc = ceil(2.7); 
	cout << "Sonuc = " << sonuc << endl;
	
	int sonuc;
	sonuc = round(2.7);
	cout << "Sonuc = " << sonuc << endl;
	return 0;
}

//ÖRNEK SORU
/*C++ TAMAMLAYICI KODLAMA EGZERSÝZLERÝ
  
  Kullanýcýndan 3 adet sýnav notu alýnýz(Sýnav notlarý tamsayý þeklinde olmalý)
  Daha sonra bu notlarýn ortalamasýný bulup ekrana aþ. gibi 2 þekilde yazdýrsýn:

	I) double olarak küsüratlý (noktadan sonra 2 digit hassasiyet olsun)

	II) Sonucu tamsayý olarak yazdýrsýn, yuvarlama yapsýn, mesela not 84.5 => 85
									84.49=>84 þeklinde yuvarlasýn
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	int sinav1, sinav2, sinav3;

	cout << "Lutfen 1.sinav notunu giriniz = " << sinav1 << endl;
	cin >> sinav1;
	cout << "Lutfen 2.sinav notunu giriniz = " << sinav2 << endl;
	cin >> sinav2;
	cout << "Lutfen 3.sinav notunu giriniz = " << sinav3 << endl;
	cin >> sinav3;

	double ortalama = (double)(sinav1 + sinav2 + sinav3) / 3.0;

	// I) Ondalýklý þekilde, 2 digit hassaiyete yazdýr
	cout << "I) Ortalama (ondalikli) =" << fixed << setprecision(2) << ortalama << endl;

	//II) Yuvarlama yaparak tam sayý sonuç yazdýrma
	int sonuc = (int)round(ortalama);
	cout << "II) Ortalama(yuvarlamali, tamsayi): " << sonuc << endl;
	return 0;
}
