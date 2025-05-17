// STR�NG A�IKLAMA
/*
					C++ STRING KULLANIMI (�LER� D�ZEY)

 1. C Tipi String

	C++'tan �nce C dilinde kullan�lan klasik string yap�s�d�r
	C tipi string, karakter dizilerinin char dizisi (char[]) ile temsil edilmesidir ve
	son karakteri null karakteri (\0) ile biter.

 2. Modern C++: std::string kullan�m�

	C++ ile birlikte gelen string s�n�f�, daha kolay ve g�venli bir metin i�leme sunar.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	// C Tipi String
	/*
	char mesaj[] = "Merhaba";
	cout << mesaj << endl;

	//Uzunlu�unu hesaplama
	int uzunluk = 0;
	while (mesaj[uzunluk] != '\0') {
		uzunluk++;
	}

	cout << "Uzunluk: " << uzunluk << endl;

	//mesajappend(" C++");
	string yeniMesaj = string(mesaj);
	yeniMesaj.append("C++");
	cout << yeniMesaj << endl;

	string mystr = "Hello";
	mystr.append(" C++");
	cout << mystr << endl;
	*/

	// Modern C++ String
	/*
	string meyve = "elma";

	cout << "Uzunluk = " << meyve.length() << endl;
	cout << "Ilk harf = " << meyve.at(0) << endl;

	meyve.append(" suyu");
	cout << "Birlestirme = " << meyve << endl;

	string yeni = meyve + " guzeldir.";
	cout << "Birlestirme = " << yeni << endl;
	// elma suyu g�zeldir

	cout << "Pascal (substr) = " << yeni.substr(0, 4) << endl;
	string metin = yeni.substr(5, 4);
	cout << metin << endl;

	size_t pos = yeni.find("suzel");
	if (pos != string::npos)
	{
		cout << "Aranan metin bulundu. Pozisyon = " << pos << endl;
	}
	else
	{
		cout << "Aranan metin bulunamadi!\n";
	}

	yeni.erase(5, 5);
	cout << "Erase sonrasi = " << yeni << endl;
	// elma g�zeldir

	yeni.insert(4, " TAZE");
	cout << "Insert sonrasi = " << yeni << endl;
	// elma TAZE g�zeldir

	yeni.replace(0, 4, "portakal");
	cout << "Replace sonrasi = " << yeni << endl;
	*/

	// �rnek Kodlama Sorusu
/*
	string s = "programlari";

	// C++ programi kodlamak cok zevkli

	s.insert(0, "C++ ");
	s.erase(11, 3);
	s.append(" yazmak cok zevkli");
	s.replace(12, 7, " kodlamak");

	cout << s << endl; // C++ programi kodlamak cok zevkli
	cout << s.substr(0, 10) << endl; // C++ progra
	cout << "Uzunluk = " << s.length() << endl; // 33
	cout << "bir karakter = " << s.at(s.length() - 1) << endl; // bir karakter = !
*/
	return 0;
}