#include <iostream>
using namespace std;

// STACK VE HEAP MEMORY NEDÝR? ARALARINDAKÝ FARK NELERDÝR?
	/*
	BELLEK YÖNETÝMÝ
	•Stack için => otomatik
	•Heap için => manuel

	KULLANIM
	•Stack => yerel deðiþkenler
	•Heap => new ile ayrýlan deðiþkenler

	BELLEKTEN SÝLÝNME
	•Stack => otomatik
	•Heap => delete ile manuel
	*/

// KOD ÖRNEÐÝ
/*
int main() {

	int x, y;
	int z = 10;

	int* p = new int(5);
	delete p; // 1005 nolu heap bellek bölgesini boþalt

	int w = 20;
	p = &w;
	cout << *p << endl;

	return 0;
}
*/

// MÜLAKAT SINAVI
/*
void exampleFunction() {
	int a = 10;
	float b = 5.5;
	int* ptr1 = new int(20);
	char c = 'X';
	double* ptr2 = new double(7.8);

	delete ptr1;
	delete ptr2;
}

int main() {
	exampleFunction();
	return 0;
}
*/