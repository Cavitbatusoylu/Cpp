#include <iostream>
using namespace std;

// STACK VE HEAP MEMORY NED�R? ARALARINDAK� FARK NELERD�R?
	/*
	BELLEK Y�NET�M�
	�Stack i�in => otomatik
	�Heap i�in => manuel

	KULLANIM
	�Stack => yerel de�i�kenler
	�Heap => new ile ayr�lan de�i�kenler

	BELLEKTEN S�L�NME
	�Stack => otomatik
	�Heap => delete ile manuel
	*/

// KOD �RNE��
/*
int main() {

	int x, y;
	int z = 10;

	int* p = new int(5);
	delete p; // 1005 nolu heap bellek b�lgesini bo�alt

	int w = 20;
	p = &w;
	cout << *p << endl;

	return 0;
}
*/

// M�LAKAT SINAVI
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