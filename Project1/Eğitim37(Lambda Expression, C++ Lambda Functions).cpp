#include <iostream>
using namespace std;

// LAMBDA CAPTURE
/*
int main() {
    int count = 0;

    //[&] => t�m d�� de�i�kenleri referans olarak yakalar
    //[=] => t�m d�� de�i�kenleri kopya olarak al�r (count de�i�keni de kopyalan�r)
    auto arttir = [=]() mutable {
        int x = 10;
        count = count + x; // Bu count lambda'n�n i�indeki kopyad�r
        cout << "Lambda icindeki count = " << count << endl;
        }; // <-- Buradaki noktal� virg�l eksikti

    // Lambday� birka� kez �a��ral�m
    arttir();
    arttir();
    arttir();

    cout << "Asil count = " << count << endl;

    return 0;
}
*/

// LAMBDA EXPRESS�ONLARDA D�N�� T�R�
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

// LAMBDA EXPRESS�ON �RNEK
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