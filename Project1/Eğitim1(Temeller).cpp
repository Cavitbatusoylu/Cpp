#include <iostream> //(#include <>) Kodun �al��mas� i�in gerekli k�t�phanelerde kullan�l�r.

using namespace std; //Her kodlamada olmal�

int main() //Her kodlamada (int main) olmal�
{
	string isim; //(string) metinsel verileri tan�mlamada kullan�l�r
	isim = "Cavit"; //Atama yapar

	int yas = 18; //Tamsay� verilerini de�i�kenlere atamada kullan�l�r.

	cout << "Bir zamanlar" << isim << "isminde bir genc varmis" << endl << isim << yas << "yasindaymis" << endl; //(cout <<) Ekrana yazd�rmak i�in kullan�l�r
	
	isim = "Batu";
	yas = 19;

	cout << isim << "ismini sever ancak" << yas << "yasini sevmezmis daha yasli olmak istermis";
	
	//De�i�ken isimlerinde baz� kurallar:
	// 1-) De�i�ken isimlerinde ilk karakter kesinlikle rakam olamaz
	// 2-) De�i�ken isimlerinde T�rk�e karakter kullanmay�z
	// 3-) De�i�ken isimleri aras�nda bo�luk olamaz
	// 4-) De�i�ken isimlerinde arada nokta vb. karakterler bulunmaz

	// De�i�ken isimlerini camelCase standart�na uygun yazman�z tavsiye olunur 
	// int dogumYili = 2006;

	return 0; //(return) Program sonunda kullan�l�r hangi say� girilirse o say�ya d�ner
}