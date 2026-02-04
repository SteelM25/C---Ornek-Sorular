#include <iostream>
using namespace std;

/*Faktöriyel – Rekürsif

Soru:
Aynı faktöriyel problemini bu kez rekürsif fonksiyon ile çöz.

int factorial(int n);


📌 Amaç:

Base case kavramı

Recursive çağrıyı doğru kurma

Stack mantığına alışma*/

long long factorial(int n) {
    // Base case: 0! = 1
    if (n == 0)
        return 1;

    // Negatif sayı kontrolü
    if (n < 0)
        return -1; // hata kodu

    // Recursive case
    return n * factorial(n - 1);
}

int main() {
    int sayi;
    cout << "Sayi giriniz: ";
    cin >> sayi;

    long long sonuc = factorial(sayi);

    if (sonuc == -1) {
        cout << "Negatif sayilar icin faktoriyel tanimsizdir.\n";
    } else {
        cout << sayi << "! = " << sonuc << endl;
    }

    return 0;
}
