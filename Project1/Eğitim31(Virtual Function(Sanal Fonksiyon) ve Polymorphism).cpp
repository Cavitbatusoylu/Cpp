#include <iostream>
using namespace std;

//Base Class
class Hayvan {

public:
	virtual void sesCikar() {
		cout << "Hayvan sesCikar fonksiyonu cagrildi\n\n";
	}

	void yazdir() {
		cout << "Hayvan sinifinin yazidr metodu cagrildi\n";
	}
};

//Child Class : Kedi
class Kedi : public Hayvan {

public:
	void sesCikar() {
		cout << "Miyav Miyav..\n";
	}

	void yazdir() {
		cout << "Kedi sinifi yazdir cagrildi\n";
	}

};

//Child Class : Kopek
class Kopek : public Hayvan {

public:
	void sesCikar() {
		cout << "Hav Hav..\n";
	}

	void yazdir() {
		cout << "Kopek sinifi yazdir cagrildi\n";
	}

};

void ucKezSesCikar(Hayvan* h) {
	for (int i = 0; i < 3; i++)
	{
		h->sesCikar();
	}
}

int main() {
	Hayvan* pHayvan;
	Kedi tekir;
	pHayvan = &tekir;
	//pHayvan->sesCikar();

	//pHayvan->yazdir();

	Kopek karabas;
	pHayvan = &karabas;
	//pHayvan->sesCikar();
	karabas.yazdir();

	ucKezSesCikar(pHayvan);

	Kopek karabas;
	ucKezSesCikar(&karabas);

	Kedi tekir;
	ucKezSesCikar(&tekir);
}