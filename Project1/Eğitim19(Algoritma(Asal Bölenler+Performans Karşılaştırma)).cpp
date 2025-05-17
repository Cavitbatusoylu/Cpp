#include <iostream>
//#include <chrono>

/* Visual Studio 2022 C++ Dersleri  */
using namespace std;
int main() {
	cout << "* * * * * * * * * * * * *" << endl;
	cout << "*                       *" << endl;
	cout << "*      C++ Dersleri     *" << endl;
	cout << "*                       *" << endl;
	cout << "* * * * * * * * * * * * *" << endl << endl << endl;


	// ALGORTÝMA GELÝÞTÝRME ÖRNEK
	/*
		// Kullanýcýdan bir tamsayý deðeri alýnýz.
		// 1'den Kullanýcýnýn girdiði sayýya kadar tüm Asal Sayýlarý bulunuz.
		//
		// Örn. Kullanýcý 100 girdiyse:
		// Asal sayýlar: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
		//               43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89 ve 97
		int sayi;
		cout << "Lütfen sayý giriniz: ";
		cin >> sayi;

		chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
		for (int i = 1; i <= sayi; i++)
		{
			int sayac = 0;
			for (int j = 1; j <= i; j++)
			{
				if (i % j == 0)
					sayac++;
				if (sayac > 2)
					break;
			}

			if (sayac == 2)
				cout << i << ", ";
		}
		chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

		std::cout << "Time difference = "
			<< chrono::duration_cast<std::chrono::microseconds>(end - begin).count()
			<< "[µs]" << std::endl;


		// Bir sayý sadece kendisine ve 1'e bölünebiliyorsa baþka sayýya bölünemiyorsa asaldýr!
		// Bir sayýnýn kalansýz bölünebildiði sadece 2 sayý varsa asaldýr, aksi takdirde deðildir!
		// 1, 2, 3, 4, 5, 6, 7, 8, ...


		cout << endl;
		return 0;
	}
		*/

	// MIDTERM MÜLAKAT SINAV SORUSU 1
	/*
		 4 basamaklý ve rakamlarý birbirinden farklý kaç tane tam sayý olduðunu bulan
		ve ekrana yazdýran bir C++ programý yazýnýz.
		Ör = 1000 => Rakamlarý birbirinden farklý deðil
			 1023 => Rakamlarý birbirinden farklý


	
	//1000 - 9999
	int sayac = 0;
	int birlerB, onlarB, yuzlerB, binlerB;
	for (int i = 1000; i < 9999; i++)
	{
		//1234
		birlerB = i % 10; //4
		onlarB = (i / 10) % 10; //3
		yuzlerB = (i / 100) % 10; //2
		binlerB = i / 1000; //1

		if (birlerB != onlarB && birlerB != yuzlerB && birlerB != binlerB &&
			onlarB != yuzlerB && onlarB != binlerB && yuzlerB != binlerB)
		{
			sayac = sayac + 1;
		}
	}
	cout < "1000-9999 arasinda : " << sayac << "adet rakamlari farkli sayi vardir" << endl;
	cout << endl;
	return 0;
	*/

	// MIDTERM MÜLAKAT SINAV SORUSU 2
	/*
		20 ile 40 arasýndaki sayýlarýn tüm bölenlerini bulan ve 
	ekrana yazdýran bir program yazýnýz.
	
	Ör = 20 nin bölenleri : 1, 2, 4, 5, 10, 20
	

	for (int i = 20; i < 40; i++)
	{
		cout << i << " sayisinin bolenleri = " << endl;
		for (int j = 0; j < i; j++)
		{	
			if (i % j == 0)
				cout << j << ", ";
			
		}
		cout << endl;
	}

	cout << endl;
	return 0;
	*/
}