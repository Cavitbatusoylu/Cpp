#include <iostream>
#include <string>
using namespace std;

// Struct Tan�mlama
/*
// Struct Tan�mlama 1
struct Point
{
	// �ye de�i�kenler
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

// Struct Tan�mlama 2
struct Ogrenci
{
	int ogrenciNo;
	string isim;
	double notOrtalama;
};

int main()
{
	Ogrenci ogrenci1;
	// 1.Y�ntem
	ogrenci1.ogrenciNo = 100;
	ogrenci1.isim = "Cavit Batu Soylu";
	ogrenci1.notOrtalama = 87.5;

	// 2.Y�ntem
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
		cin.ignore(); // Yeni sat�r karakterini temizlemek i�in
	
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

// Fonksiyonlara struct Dizilerinin Parametre Olarak G�nderilmesi
/*
#include <string>
using namespace std;

struct Ogrenci
{
	int ogrenciNo;
	string isim;
	double notOrtalama;
};

// Tek bir ��renci i�in durum yazd�rma
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

// T�m ��renciler i�in durum yazd�rma
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
	{ 103,"Fato� Yilmaz",75.5 }
	};

	tumOgrencilerDurumYazdir(ogrenciler, 3);

	return 0;
}
*/

// Struct ve Pointer Kullan�m�
/*
#include <string>
using namespace std;

struct Ogrenci
{
	int ogrenciNo;
	string isim;
	double notOrtalama;
};

// Tek bir ��renci i�in durum yazd�rma
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

// T�m ��renciler i�in durum yazd�rma
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

	Ogrenci ogrenci2 = { 102,"Kaz�m Mert Karaca",65.0 };
	Ogrenci* ptr = &ogrenci2;

	cout << "Ogrenci No: " << ptr->ogrenciNo <<
			"Isim: " << ptr->isim <<
			"Not ortalamasi: " << ptr->notOrtalama << endl;

	return 0;
}
*/

// Struct ve Dinamik Bellek Y�netimi
/*
#include <string>
using namespace std;

struct Ogrenci
{
	int ogrenciNo;
	string isim;
	double notOrtalama;
};

// Tek bir ��renci i�in durum yazd�rma
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

// T�m ��renciler i�in durum yazd�rma
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
	cin.ignore(); // Yeni sat�r hatas�n� �nlemek i�in

	cout << "Isim: ";
	getline(cin, ptr->isim);

	cout << "Not Ortalamasi: ";
	cin >> ptr->notOrtalama;

	cout << ptr->ogrenciNo << " " << ptr->isim << " " << ptr->notOrtalama << endl;

	delete ptr;

	return 0;
}
*/

// Struct Dizisini Pointer ile Kullanma(�leri Seviye)
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

	//Heap Bellekte ��renci Dizisi Olu�tur
	Ogrenci *ogrenciler = new Ogrenci[n];

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ". Ogrenci No: ";
		cin >> ogrenciler[i].ogrenciNo;
		cin.ignore();

		cout << "Isim: ";
		getline(cin, ogrenciler[i].isim);

		cout << "Not ortalamas�: ";
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

// Struct Programlama Sorular�
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
	// Dinamik bellekten iki ��renci olu�turuluyor
	Ogrenci* pogrenci1 = new Ogrenci;
	Ogrenci* pogrenci2 = new Ogrenci;

	// De�er atamalar�
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
	// Dinamik bellekten iki ��renci olu�turuluyor
	Ogrenci* pogrenci1 = new Ogrenci;
	Ogrenci* pogrenci2 = new Ogrenci;

	// De�er atamalar�
	pogrenci1->ogrenciNo = 101;
	pogrenci1->isim = "Ahmet";
	// Ogrenci *pTemp = pogrenci2; // 1.Y�ntem
	// delete pogrenci2; // 2.Y�ntem
	pogrenci2 = pogrenci1;

	pogrenci2->ogrenciNo = 102;
	pogrenci2->isim = "Mehmet";

	bilgileriYazdir(pogrenci1);
	bilgileriYazdir(pogrenci2);

	// Bellek temizleme
	delete pogrenci1;
	//delete pTemp; // 1.Y�ntem
	//delete pogrenci2; // 2.Y�ntem(Bu sat�r� sil)

	return 0;
}
*/

//----------------------------------------------------------------------------------------------

// C++ STRUCT-2.KISIM:STRUCTLARI SINIF G�B� KULLANMAK(B�L�M 29)

// Constructor ve �ye Fonksiyonlu C++ Structs
/*
struct Person {
	// �ye de�i�kenler (varsay�lan olarak public)
	string name;
	int age;

	// Parametrerli Constructor
	Person(const string& n, int ag) {
		name = n;
		age = ag;
	}

	// �ye fonk.
	void printInfo() {
		cout << "Ad: " << name << "Yas: " << age << endl;
	}
};

int main() {
	Person p("Ali", 25);
	p.printInfo();

	// struct : �yeler do�rudan eri�ilebilir(public)

	p.age = 35;
	p.printInfo();

	return 0;
}
*/

// C++ Struct'larda Private Kullan�m� ve Basit bir GetterSetter
/*
struct BankAccount{
private:
	double balance; // d��ardan do�rudan eri�ilmesin

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

	//Para �ekme
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

	delete pAccount; // Destructor otomatik olarak �a��r�l�r

	return 0;
}
*/

// C++ Struct �rnek S�nav Sorusu ve ��z�m�
/*

		C++ KOD �NCELEME VE YORUMLAMA SORUSU

	A�a��daki kodu inceleyiniz ve sorular� cevaplay�n�z.
	1.Derlenebilirlik:
	A�a��daki kodu derledi�inizde herhangi bir derleme hatas� al�r m�s�n�z? Nedeniyle a��klay�n�z

	2.A�a��daki sat�r�n yorumu kald�r�l�rsa kod ne t�r bir hata verir? (compile-time veya run-time) Neden?

	3.Program e�er hatas�z �al��t�r�labiliyorsa ekrana ne yazar?
	4.A�a��daki kodda "struct" kelimesi yerine "class" yaz�lsayd� ��kt� de�i�ir miydi?

#include <iostream>
#include <string>
using namespace std;

struct Person {
private:
	string name;
	int age;

public:
	// Yap�c� fonksiyon(constructor)
	Person(string n, int a) {
		name = n;
		age = a;
	}

	void introduce() const {
		cout << "Ad = " << name << ", Yas = " << age << endl;
	}

	// Bilgileri ekrana yazd�ran metot
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

	// Dikkat: age alan�na do�rudan eri�mek istersek...
	// person1.age = 25; // Bu sat�rda ne olur? Neden?

	person1.setAge(25);
	person1.introduce();
}
*/