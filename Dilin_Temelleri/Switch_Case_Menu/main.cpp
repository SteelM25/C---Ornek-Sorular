#include <cstdlib>
#include <iostream>
using namespace std;

/*Switch–Case ile Menü

Soru:
Kullanıcıya şu menüyü göster:

1 - Kare al
2 - Küp al
3 - Mutlak değer


Kullanıcının seçimine göre bir sayı üzerinde işlem yap.

📌 Amaç:

switch-case

Menü tabanlı program yazma

Default case kullanımı*/

int main(){

    int secim, sayi;

    cout << "\nİşlem seciniz\n\n1 - Kare al\n2 - Küp al\n3 - Mutlak değer\n";
    cin >> secim;
    cout << "\n\nSayi giriniz: ";
    cin >> sayi;

    switch (secim) {
        case 1:
            cout << "Kare: " << sayi * sayi;
            break;
        case 2:
            cout << "Küp: " << sayi * sayi * sayi;
            break;
        case 3:
            cout << abs(sayi);
            break;
        default:
            cout << "Gecersiz secim..\n";
            break;


    }

}