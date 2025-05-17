#include <iostream>
using namespace std;

// LAMBDA CAPTURE
/*
int main() {
    int count = 0;

    //[&] => tüm dýþ deðiþkenleri referans olarak yakalar
    //[=] => tüm dýþ deðiþkenleri kopya olarak alýr (count deðiþkeni de kopyalanýr)
    auto arttir = [=]() mutable {
        int x = 10;
        count = count + x; // Bu count lambda'nýn içindeki kopyadýr
        cout << "Lambda icindeki count = " << count << endl;
        }; // <-- Buradaki noktalý virgül eksikti

    // Lambdayý birkaç kez çaðýralým
    arttir();
    arttir();
    arttir();

    cout << "Asil count = " << count << endl;

    return 0;
}
*/

// LAMBDA EXPRESSÝONLARDA DÖNÜÞ TÜRÜ
/*
int main() {

    auto karisikLambda = [](bool kosul) {
        if (kosul){
            return 42.1;
        }
        else{
            return 14.0;
        }
    };

    cout << karisikLambda(true);

    return 0;
}
*/

// LAMBDA EXPRESSÝON ÖRNEK
/*
void ekranaYaz() {

    auto karisikLambda = [](bool kosul) {
        if (kosul) {
            return 42.1;
        }
        else {
            return 14.0;
        }
        };

    cout << karisikLambda(true);
}

int main() {
    ekranaYaz();
    return 0;
}
*/