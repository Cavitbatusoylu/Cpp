#include <iostream>
#include <string>
using namespace std;

// Struct Tanýmlama
/*
// Struct Tanýmlama 1
struct Point
{
	// üye deðiþkenler
	int x;
	int y;
};

struct Rectangle
{
	double width;
	double height;
};


int main()
{
	Point pt;
	pt.x = 10;
	pt.y = 20;

	Point pt2;
	pt2.x = 50;
	pt2.y = 70;

	Rectangle rect1;
	rect1.width = 10.2;
	rect1.height = 5.5;

	cout << "pt => x : " << pt.x << "pt => y :" << pt.y << endl;
	cout << "pt2 => x : " << pt2.x << "pt2 => y :" << pt2.y << endl;
	cout << "rect1 => w : " << rect1.width << "rect1 => h :" << rect1.height << endl;
	return 0;
}

// Struct Tanýmlama 2
struct Ogrenci
{
	int ogrenciNo;
	string isim;
	double notOrtalama;
};

int main()
{
	Ogrenci ogrenci1;
	// 1.Yöntem
	ogrenci1.ogrenciNo = 100;
	ogrenci1.isim = "Cavit Batu Soylu";
	ogrenci1.notOrtalama = 87.5;

	// 2.Yöntem
	Ogrenci ogrenci2 = { 102,"Cavit Batu Soylu", 90.5 };

	cout << "Ogr1 : " << ogrenci1.ogrenciNo << " " << ogrenci1.isim << " " << ogrenci1.notOrtalama << endl;
	cout << "Ogr1 : " << ogrenci2.ogrenciNo << " " << ogrenci2.isim << " " << ogrenci2.notOrtalama << endl;

	return 0;
}
*/

// Struct Arrays
/*
#include <string>

struct Ogrenci
{
	int ogrenciNo;
	string isim;
	double notOrtalama;
};

int main()
{
	Ogrenci ogrenciler[3];

	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << ".ogrencinin no: ";
		cin >> ogrenciler[i].ogrenciNo;
		cin.ignore(); // Yeni satýr karakterini temizlemek için
	
		cout << i + 1 << ".ogrencinin ismi: ";
		getline(cin, ogrenciler[i].isim);

		cout << i + 1 << "ogrencinin not ortalamasi: ";
		cin >> ogrenciler[i].notOrtalama;
	}

	cout << "\n** * Ogrenci Listesi * *\n";
	for (int i = 0; i < 3; i++)
	{
		cout << ogrenciler[i].ogrenciNo << " " << ogrenciler[i].isim << " " <<
				ogrenciler[i].notOrtalama << endl;
	}

	return 0;
}
*/

// Fonksiyonlarla Struct
/*
#include <string>
using namespace std;

struct Ogrenci
{
	int ogrenciNo;
	string isim;
	double notOrtalama;
};

void ogrenciDurumYazdir(Ogrenci &ogr)
{
	ogr.ogrenciNo = 190;
	if (ogr.notOrtalama < 50)
	{
		cout << ogr.isim << " sinifta kaldi!\n";
	}
	else
	{
		cout << ogr.isim << " sinifi gecti, tebrikler!\n";
	}
}

int main()
{
	Ogrenci ogrenciler[3];

	//	cout "\n* * Ogrenci Listesi * *\n;
	//	for (int i = 0; i < 3; i++)
	//	{
	//	cout << ogrenciler[i].ogrenciNo << " " << ogrenciler[i].isim << " " <<
	//			ogrenciler[i].notOrtalama << endl;
	//}
	
	Ogrenci ogrenci1 = { 101,"Cavit Batu Soylu",60.5 };
	ogrenciDurumYazdir(ogrenci1);
	cout << "Ogrenci isim: " << ogrenci1.isim << " ogrenci no: " << ogrenci1.ogrenciNo;

	return 0;
}
*/

// Fonksiyonlara struct Dizilerinin Parametre Olarak Gönderilmesi
/*
#include <string>
using namespace std;

struct Ogrenci
{
	int ogrenciNo;
	string isim;
	double notOrtalama;
};

// Tek bir öðrenci için durum yazdýrma
void ogrenciDurumYazdir(Ogrenci& ogr)
{
	ogr.ogrenciNo = 190;
	if (ogr.notOrtalama < 50)
	{
		cout << ogr.isim << " sinifta kaldi!\n";
	}
	else
	{
		cout << ogr.isim << " sinifi gecti, tebrikler!\n";
	}
}

// Tüm öðrenciler için durum yazdýrma
void tumOgrencilerDurumYazdir(Ogrenci students[], int size)
{
	cout << "\n* * Ogrenci Durumlari * *\n";
	for (int i = 0; i < 3; i++)
	{
		cout << students[i].ogrenciNo << " " <<
			students[i].isim << " " <<
			students[i].notOrtalama << " ";

		ogrenciDurumYazdir(students[i]);
	}

}

int main()
{
	Ogrenci ogrenciler[3] = {
	{ 101,"Cavit Batu Soylu",80.5 },
	{ 102,"Kazim Mert Karaca",70.5 },
	{ 103,"Fatoþ Yilmaz",75.5 }
	};

	tumOgrencilerDurumYazdir(ogrenciler, 3);

	return 0;
}
*/

// Struct ve Pointer Kullanýmý
/*
#include <string>
using namespace std;

struct Ogrenci
{
	int ogrenciNo;
	string isim;
	double notOrtalama;
};

// Tek bir öðrenci için durum yazdýrma
void ogrenciDurumYazdir(Ogrenci& ogr)
{
	ogr.ogrenciNo = 190;
	if (ogr.notOrtalama < 50)
	{
		cout << ogr.isim << " sinifta kaldi!\n";
	}
	else
	{
		cout << ogr.isim << " sinifi gecti, tebrikler!\n";
	}
}

// Tüm öðrenciler için durum yazdýrma
void tumOgrencilerDurumYazdir(Ogrenci students[], int size)
{
	cout << "\n* * Ogrenci Durumlari * *\n";
	for (int i = 0; i < 3; i++)
	{
		cout << students[i].ogrenciNo << " " <<
			students[i].isim << " " <<
			students[i].notOrtalama << " ";

		ogrenciDurumYazdir(students[i]);
	}

}

int main()
{
	Ogrenci ogrenci1 = { 101,"Cavit Batu Soylu",85.0 };
	Ogrenci	*ptr = &ogrenci1;

	cout << "Ogrenci No: " << ptr->ogrenciNo <<
			"Isim: " << ptr->isim <<
			"Not ortalamasi: " << ptr->notOrtalama << endl;

	Ogrenci ogrenci2 = { 102,"Kazým Mert Karaca",65.0 };
	Ogrenci* ptr = &ogrenci2;

	cout << "Ogrenci No: " << ptr->ogrenciNo <<
			"Isim: " << ptr->isim <<
			"Not ortalamasi: " << ptr->notOrtalama << endl;

	return 0;
}
*/

// Struct ve Dinamik Bellek Yönetimi
/*
#include <string>
using namespace std;

struct Ogrenci
{
	int ogrenciNo;
	string isim;
	double notOrtalama;
};

// Tek bir öðrenci için durum yazdýrma
void ogrenciDurumYazdir(Ogrenci& ogr)
{
	ogr.ogrenciNo = 190;
	if (ogr.notOrtalama < 50)
	{
		cout << ogr.isim << " sinifta kaldi!\n";
	}
	else
	{
		cout << ogr.isim << " sinifi gecti, tebrikler!\n";
	}
}

// Tüm öðrenciler için durum yazdýrma
void tumOgrencilerDurumYazdir(Ogrenci students[], int size)
{
	cout << "\n* * Ogrenci Durumlari * *\n";
	for (int i = 0; i < 3; i++)
	{
		cout << students[i].ogrenciNo << " " <<
			students[i].isim << " " <<
			students[i].notOrtalama << " ";

		ogrenciDurumYazdir(students[i]);
	}

}

int main()
{
	Ogrenci* ptr = new Ogrenci;

	cout << "Ogrenci No: ";
	cin >> ptr->ogrenciNo;
	cin.ignore(); // Yeni satýr hatasýný önlemek için

	cout << "Isim: ";
	getline(cin, ptr->isim);

	cout << "Not Ortalamasi: ";
	cin >> ptr->notOrtalama;

	cout << ptr->ogrenciNo << " " << ptr->isim << " " << ptr->notOrtalama << endl;

	delete ptr;

	return 0;
}
*/

// Struct Dizisini Pointer ile Kullanma(Ýleri Seviye)
/*
#include <string>
using namespace std;

struct Ogrenci
{
	int ogrenciNo;
	string isim;
	double notOrtalama;
};

int main()
{
	int n;

	cout << "Kac ogrenci kaydedilecek? : ";
	cin >> n;
	cin.ignore();

	//Heap Bellekte Öðrenci Dizisi Oluþtur
	Ogrenci *ogrenciler = new Ogrenci[n];

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ". Ogrenci No: ";
		cin >> ogrenciler[i].ogrenciNo;
		cin.ignore();

		cout << "Isim: ";
		getline(cin, ogrenciler[i].isim);

		cout << "Not ortalamasý: ";
		cin >> ogrenciler[i].notOrtalama;
	}

	cout << "\nnOgrenci Bilgileri:\n";
	for (int i = 0; i < n; i++)
	{
		cout << ogrenciler[i].ogrenciNo << " "
			<< ogrenciler[i].isim << " "
			<< ogrenciler[i].notOrtalama << endl;
	}

	delete[] ogrenciler;
	return 0;
}
*/

// Struct Programlama Sorularý
/*
// Struct Programlama Sorusu #1 (Deep Copy)

#include <iostream>
using namespace std;
 
struct Ogrenci {
    int ogrenciNo;
    string isim;  
};
 
void bilgileriYazdir(Ogrenci ogr) {
    cout << "Ogrenci No: " << ogr.ogrenciNo << ", Isim: " << ogr.isim << endl;
}
 
int main() {
    Ogrenci ogrenci1 = {101, "Ahmet"};
    Ogrenci ogrenci2 = ogrenci1;  
 
    ogrenci2.ogrenciNo = 102;
    ogrenci2.isim = "Mehmet";
 
    bilgileriYazdir(ogrenci1);
    bilgileriYazdir(ogrenci2);
 
    return 0;
}


// Struct Programlama Sorusu #2 (Shallow Copy)

#include <iostream>
#include <string>

using namespace std;

struct Ogrenci {
	int ogrenciNo;
	string isim;
};

void bilgileriYazdir(Ogrenci* ogr) {
	cout << "Ogrenci No: " << ogr->ogrenciNo << ", Isim: " << ogr->isim << endl;
}

int main() {
	// Dinamik bellekten iki öðrenci oluþturuluyor
	Ogrenci* pogrenci1 = new Ogrenci;
	Ogrenci* pogrenci2 = new Ogrenci;

	// Deðer atamalarý
	pogrenci1->ogrenciNo = 101;
	pogrenci1->isim = "Ahmet";

	pogrenci2 = pogrenci1;

	pogrenci2->ogrenciNo = 102;
	pogrenci2->isim = "Mehmet";

	bilgileriYazdir(pogrenci1);
	bilgileriYazdir(pogrenci2);

	// Bellek temizleme
	delete pogrenci1;
	delete pogrenci2;

	return 0;
}

// Struct Programlama Sorusu #2 (Shallow Copy) (Ek Bilgiler)

struct Ogrenci {
	int ogrenciNo;
	string isim;
};

void bilgileriYazdir(Ogrenci* ogr) {
	cout << "Ogrenci No: " << ogr->ogrenciNo << ", Isim: " << ogr->isim << endl;
}

int main() {
	// Dinamik bellekten iki öðrenci oluþturuluyor
	Ogrenci* pogrenci1 = new Ogrenci;
	Ogrenci* pogrenci2 = new Ogrenci;

	// Deðer atamalarý
	pogrenci1->ogrenciNo = 101;
	pogrenci1->isim = "Ahmet";
	// Ogrenci *pTemp = pogrenci2; // 1.Yöntem
	// delete pogrenci2; // 2.Yöntem
	pogrenci2 = pogrenci1;

	pogrenci2->ogrenciNo = 102;
	pogrenci2->isim = "Mehmet";

	bilgileriYazdir(pogrenci1);
	bilgileriYazdir(pogrenci2);

	// Bellek temizleme
	delete pogrenci1;
	//delete pTemp; // 1.Yöntem
	//delete pogrenci2; // 2.Yöntem(Bu satýrý sil)

	return 0;
}
*/

//----------------------------------------------------------------------------------------------

// C++ STRUCT-2.KISIM:STRUCTLARI SINIF GÝBÝ KULLANMAK(BÖLÜM 29)

// Constructor ve Üye Fonksiyonlu C++ Structs
/*
struct Person {
	// Üye deðiþkenler (varsayýlan olarak public)
	string name;
	int age;

	// Parametrerli Constructor
	Person(const string& n, int ag) {
		name = n;
		age = ag;
	}

	// Üye fonk.
	void printInfo() {
		cout << "Ad: " << name << "Yas: " << age << endl;
	}
};

int main() {
	Person p("Ali", 25);
	p.printInfo();

	// struct : Üyeler doðrudan eriþilebilir(public)

	p.age = 35;
	p.printInfo();

	return 0;
}
*/

// C++ Struct'larda Private Kullanýmý ve Basit bir GetterSetter
/*
struct BankAccount{
private:
	double balance; // dýþardan doðrudan eriþilmesin

public:
	//Constructor
	BankAccount(double initialBalance) {
		balance = initialBalance;
		cout << "Hesap olusturuldu\n";
	}

	// Destructor
	~BankAccount() {
		cout << "hesap kapatildi." << endl;
	}

	// Getter
	double getBalance() {
		return balance;
	}

	//Setter benzeri para ekleme metodu
	void deposit(double amount) {
		balance += amount;
	}

	//Para çekme
	void withdraw(double amount) {
		balance -= amount;
	}

};

int main() {
	//Normal Version
	BankAccount myAccount(1000);

	cout << "Guncel Bakiye = " << myAccount.getBalance() << endl;

	myAccount.deposit(500.0);
	cout << "Para yattiktan sonra guncel bakiye = " << myAccount.getBalance() << endl;

	myAccount.withdraw(300.0);
	cout << "Para cekildikten sonra guncel bakiye = " << myAccount.getBalance() << endl;
	
//----------------------------------------------------------------------------------------------
	// Pointer version
	BankAccount* pAccount = new BankAccount(1000);

	cout << "Guncel Bakiye = " << pAccount->getBalance() << endl;

	pAccount->deposit(500.0);
	cout << "Para yatirildiktan sonraki bakiye = " << pAccount->getBalance() << endl;

	pAccount->withdraw(300.0);
	cout << "Para cekildikten sonraki bakiye = " << pAccount->getBalance() << endl;

	delete pAccount; // Destructor otomatik olarak çaðýrýlýr

	return 0;
}
*/

// C++ Struct Örnek Sýnav Sorusu ve Çözümü
/*

		C++ KOD ÝNCELEME VE YORUMLAMA SORUSU

	Aþaðýdaki kodu inceleyiniz ve sorularý cevaplayýnýz.
	1.Derlenebilirlik:
	Aþaðýdaki kodu derlediðinizde herhangi bir derleme hatasý alýr mýsýnýz? Nedeniyle açýklayýnýz

	2.Aþaðýdaki satýrýn yorumu kaldýrýlýrsa kod ne tür bir hata verir? (compile-time veya run-time) Neden?

	3.Program eðer hatasýz çalýþtýrýlabiliyorsa ekrana ne yazar?
	4.Aþaðýdaki kodda "struct" kelimesi yerine "class" yazýlsaydý çýktý deðiþir miydi?

#include <iostream>
#include <string>
using namespace std;

struct Person {
private:
	string name;
	int age;

public:
	// Yapýcý fonksiyon(constructor)
	Person(string n, int a) {
		name = n;
		age = a;
	}

	void introduce() const {
		cout << "Ad = " << name << ", Yas = " << age << endl;
	}

	// Bilgileri ekrana yazdýran metot
	void setAge(int newAge) {
		if (newAge >= 0)
		{
			age = newAge;
		}
	}
};

int main(){
	Person person1("Ali", 20);
	person1.introduce();

	// Dikkat: age alanýna doðrudan eriþmek istersek...
	// person1.age = 25; // Bu satýrda ne olur? Neden?

	person1.setAge(25);
	person1.introduce();
}
*/