#include <iostream>
using namespace std;

// new & delete
/*
void func(int* p)
{
	if (p != NULL)
		cout << *p << endl;;
}

int main()
{
	int* p = new int;
	*p = 5;

	cout << *p << endl;
	delete p;

	p = NULL;

	p = new int;
	*p = 10;

	cout << *p << endl;
	delete p;

	return 0;
}
*/

// NULL Pointerlar
/*
int main()
{
	int* p;
	p = NULL; // Null Pointer

	if (p != NULL)
		*p = 5;
	else
		p = new int(5);

	cout << *p << endl;

	return 0;
}
*/

// Fonksiyonlarýn Pointer Return Etmesi
/*
int *fonksiyon() {
	int* p = new int;
	*p = 37;
	return p;
}

int main()
{
	int* ptr;
	ptr = fonksiyon();
	if (ptr != NULL)
	{
		cout << *ptr << endl;
		delete ptr;
	}
	return 0;
}
*/

// Dinamik Bellek Yönetimi
/*
int main() {
	int n;
	cout << "Lutfen kac adet tamsayi icerecegini yaziniz: ";
	cin >> n;

	int* p = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += p[i];
	}

	cout << "Sum: " << sum << endl;
	delete p;

	return 0;
}
*/

// Mülakat Sorusu
/*
int main() {
	int a[5], *p, z;
	for (int i = 0; i < 5; i++)
		a[i] = i * i;

	p = a;
	z = *(p + 1) + *(a + 2);  // 1 + 4 = 5
	cout << z;
}
*/