#include <iostream>
using namespace std;

/*Fonksiyon Yazma (Tek Sorumluluk)

Soru:
Bir sayı alan ve bu sayının asal olup olmadığını döndüren bir fonksiyon yaz.

bool isPrime(int n);


📌 Kurallar:

1 ve negatif sayılar asal değildir.

Ana programda bu fonksiyonu çağır.

📌 Amaç:

Fonksiyon tasarımı

Return değeri

Edge-case düşünme*/

bool isPrime(int n){
    if (n <= 1)
        return false;

    if (n == 2)
        return true;

    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main(){
    int sayi;
    cout << "Sayi giriniz: ";
    cin >> sayi;

    if (isPrime(sayi))
        cout << sayi << " sayisi asaldir\n";
    else
        cout << sayi << " sayisi asal degildir\n";

}