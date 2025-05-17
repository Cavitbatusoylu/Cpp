#include <iostream>
#include <list>
using namespace std;

// Listenin elemanlarýný ekrana yazdýran fonksiyon
void printList(list<int> l) {
    list<int>::iterator itr;
    for (itr = l.begin(); itr != l.end(); itr++) {
        cout << *itr << " ";  // Elemaný yazdýr
    }
    cout << endl;
}

// Listedeki 3. sýradaki (indeks 3) elemaný silen fonksiyon
void sil(list<int>& l) {  // Liste referans ile alýndý, böylece orijinal liste deðiþir
    list<int>::iterator it = l.begin();
    advance(it, 3);  // 3 adým ileri git (3. indexteki eleman)
    l.erase(it);     // Bu elemaný sil
}

int main() {
    list<int> lst;

    // Listeye elemanlar ekleniyor
    lst.push_back(5);    // [5]
    lst.push_back(8);    // [5, 8]
    lst.push_front(3);   // [3, 5, 8]
    printList(lst);      // Ekran çýktýsý: 3 5 8

    // Listenin baþýndaki eleman siliniyor
    lst.pop_front();     // [5, 8]
    printList(lst);      // Ekran çýktýsý: 5 8

    // Ýterator ile 2. elemana gidiliyor ve oraya 9 ekleniyor
    list<int>::iterator it = lst.begin();
    it++;
    it++;                // Þu an end()'deyiz
    lst.insert(it, 9);   // 9, end() öncesine eklenir => [5, 8, 9]
    printList(lst);      // Ekran çýktýsý: 5 8 9

    // 2. sýraya 2 tane 7 ekleniyor => [5, 7, 7, 8, 9]
    it = lst.begin();
    it++;
    lst.insert(it, 2, 7);
    printList(lst);      // Ekran çýktýsý: 5 7 7 8 9

    // 3. indeksdeki eleman (7) siliniyor => [5, 7, 7, 8, 9] -> [5, 7, 7, 9]
    sil(lst);
    printList(lst);      // Ekran çýktýsý: 5 7 7 9

    return 0;
}
