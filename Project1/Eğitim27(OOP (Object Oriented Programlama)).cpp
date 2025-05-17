#include <iostream>
using namespace std;

// Class ve Object Oluþturma
class Otomobil {
public:
	string renk;
};


int main()
{
	Otomobil otomobil1;
	Otomobil otomobil2, otomobil3;

	otomobil1.renk = "siyah";
	otomobil2.renk = "mavi";
	otomobil3.renk = "sari";

	cout << "oto1 renk : " << otomobil1.renk << endl;
	cout << "oto2 renk : " << otomobil2.renk << endl;
	cout << "oto3 renk : " << otomobil3.renk << endl;

	cout << endl;
	return 0;
}