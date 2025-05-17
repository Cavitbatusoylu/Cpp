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