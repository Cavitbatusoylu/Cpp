#include <iostream>
#include <vector>
using namespace std;

// VEKTÖR ÝÞLEMLERÝ
/*
int main() {
	vector<int> vNumbers;
	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);

	cout << "Vektör Boyutu = " << vNumbers.size() << endl;

	for (size_t i = 0; i < vNumbers.size(); i++)
	{
		cout << "Eleman " << i << ": " << vNumbers[i] << endl; // diger kullanim = vNumbers.at(i)
	}

	vNumbers[1] = 20;
	cout << endl << vNumbers[1] << endl;	

	//vNumbers.insert(vNumbers.begin() + 2, 15); // Ýkinci pozisyona 15 ekle
	for (const int& num : vNumbers)
	{
		cout << num << " ";
	}
	cout << endl;

	// En sondaki elemaný silme:
	// vNumbers.pop_back();

	// Belirli bir elemaný silme: 
	// vNumbers.erase(vNumbers.begin() + 1); // Ýkinci elemaný sil

	// Vektörü temizle:
	// vNumbers.clear(); // Tüm elemanlarý sil

	cout << endl << endl;

	// Bir vektörü baþlangýç deðeriyle doldurma
	vector<int> myVector(10, -1);

	for (const int& num : myVector)
	{
		cout << num << " ";
	}

	cout << endl;

	return 0;
}
*/

// SINIF VE VEKTÖR KULLANIMI
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Otomobil {
private:
	string marka;
	string model;
	int yil;

public:
	Otomobil(string m, string mod, int y) : marka(m), model(mod), yil(y){}

	void bilgiYazdir() const {
		cout << "Marka = " << marka << ", Model = " << model << ", Yil = " << yil << endl;
	}
};

int main() {
	// Otomobil nesnelerini tutacak bir vektör oluþturuyoruz
	vector<Otomobil> vGaraj;

	cout << "Garaja otomobiller ekleniyor...\n";
	vGaraj.push_back(Otomobil("Toyota", "Corolla", 2020));
	vGaraj.push_back(Otomobil("BMW", "M5", 2018));
	vGaraj.push_back(Otomobil("Mercedes", "C200", 2023));

	// Gaajdaki otomobilleri listeleme
	cout << "\nGarajdaki Otomobiller:\n";
	cout << "- - - - - - - - - - - - \n";
	for (const Otomobil& oto : vGaraj) {
		oto.bilgiYazdir();
	}

	// Garajdaki bir otomobili silme
	cout << "\n bir otomobil garajdan siliniyor...\n";
	vGaraj.erase(vGaraj.begin() + 1);

	// Gaajdaki otomobilleri listeleme
	cout << "\nGarajdaki Otomobiller:\n";
	cout << "- - - - - - - - - - - - \n";
	for (const Otomobil& oto : vGaraj) {
		oto.bilgiYazdir();
	}

	// Yeni bir otomobil garaja ekleniyor
	cout << "\ Yeni bir otomobil garaja ekleniyor...\n";
	vGaraj.push_back(Otomobil("Ford", "Focus", 2019));

	// Gaajdaki otomobilleri listeleme
	cout << "\nGarajdaki Otomobiller:\n";
	cout << "- - - - - - - - - - - - \n";
	for (const Otomobil& oto : vGaraj) {
		oto.bilgiYazdir();
	}

	cout << "\nGarajdaki ilk otomobilin bilgileri = \n";
	vGaraj[0].bilgiYazdir();

	cout << "\nGarajdaki son otomobilin bilgileri = \n";
	vGaraj[vGaraj.size() - 1].bilgiYazdir();

	return 0;
}