#include <iostream> //(#include <>) Kodun çalýþmasý için gerekli kütüphanelerde kullanýlýr.

using namespace std; //Her kodlamada olmalý

int main() //Her kodlamada (int main) olmalý
{
	string isim; //(string) metinsel verileri tanýmlamada kullanýlýr
	isim = "Cavit"; //Atama yapar

	int yas = 18; //Tamsayý verilerini deðiþkenlere atamada kullanýlýr.

	cout << "Bir zamanlar" << isim << "isminde bir genc varmis" << endl << isim << yas << "yasindaymis" << endl; //(cout <<) Ekrana yazdýrmak için kullanýlýr
	
	isim = "Batu";
	yas = 19;

	cout << isim << "ismini sever ancak" << yas << "yasini sevmezmis daha yasli olmak istermis";
	
	//Deðiþken isimlerinde bazý kurallar:
	// 1-) Deðiþken isimlerinde ilk karakter kesinlikle rakam olamaz
	// 2-) Deðiþken isimlerinde Türkçe karakter kullanmayýz
	// 3-) Deðiþken isimleri arasýnda boþluk olamaz
	// 4-) Deðiþken isimlerinde arada nokta vb. karakterler bulunmaz

	// Deðiþken isimlerini camelCase standartýna uygun yazmanýz tavsiye olunur 
	// int dogumYili = 2006;

	return 0; //(return) Program sonunda kullanýlýr hangi sayý girilirse o sayýya döner
}