#include <iostream>
using namespace std;

/*Basit Dizi Kullanımı

Soru:
Boyutu 5 olan bir dizi tanımla.
Kullanıcıdan 5 sayı al ve:

En büyük

En küçük

Ortalama
değerleri yazdır.

📌 Amaç:

Dizi mantığı

Döngü + karşılaştırma

İlk değer atama (min/max bug’ı yaşamamak)*/

int main(){

    int dizi[5];
    int min, max;
    int toplam = 0;

    // Diziyi al
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". eleman: ";
        cin >> dizi[i];
    }

    // İlk elemanla min - max başlat
    min = dizi[0];
    max = dizi[0];

    // Min, max ve toplam
    for (int i = 0; i < 5; i++) {
        if (dizi[i] < min)
            min = dizi[i];
        if (dizi[i] > max)
            max = dizi[i];
        toplam += dizi[i];
    }

    double ortalama = toplam / 5.0;

    // Bubble sort (küçükten büyüğe)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (dizi[j] > dizi[j + 1]) {
                int temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }

    int ortanca = dizi[2]; // 5 elemanın ortası

    // Sonuçlar
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    cout << "Ortalama: " << ortalama << endl;
    cout << "Ortanca: " << ortanca << endl;

    return 0;

}