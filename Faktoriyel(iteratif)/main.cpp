#include <iostream>
using namespace std;

/*Faktöriyel – İteratif

Soru:
Kullanıcıdan bir sayı al ve iteratif (döngü ile) faktöriyelini hesapla.

📌 Kurallar:

Negatif sayı girilirse hata mesajı yazdır.

0! = 1 unutulmayacak.

📌 Amaç:

Döngü mantığı

Overflow farkındalığı (yorum satırında belirt)*/

int main(){

    //? int, büyük sayilarda overflow yapar çünkü sınırı vardır. Daha uzun sayılar için long, long long veya başka kütüphaneler gerekir.
    int sayi, faktoriyel = 1;
    cout << "faktöriyelini bulmak istediğiniz sayiyi giriniz: ";
    cin >> sayi;

    if(sayi < 0){cout << "Pozitif sayi giriniz.";}
    else if(sayi == 0 || sayi == 1){cout << "Sonuç: 1";}

    else{
        for(int i = 2; i <= sayi; i++){
            faktoriyel *= i;
        }
        cout << sayi << " sayisinin faktoriyeli: " << faktoriyel << endl;
    }
    
}