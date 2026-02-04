#include <iostream>
using namespace std;

/*Fonksiyon + Dizi (Birleştirme)

Soru:
Bir tamsayı dizisi ve boyut alan bir fonksiyon yaz:

int countPositive(const int arr[], int size);


Bu fonksiyon dizideki pozitif sayı adedini döndürsün.

📌 Amaç:

Dizi + fonksiyon birlikte kullanımı

Parametre geçirme

const farkındalığı*/

int countPositive(const int arr[], int size){
    int adet = 0;
    for(int i = 0; i < size; i++){   
        if(arr[i] > 0) adet++;
    }
    return adet;
}

int main(){

    int size;

    cout << "Dizi boyutu: ";
    cin >> size;

    int dizi[size];

    for (int a = 0; a < size; a++) {
        cout << a + 1 << ". eleman: ";
        cin >> dizi[a];    
    }

    cout << "\n\nPozitif sayı adeti: " << countPositive(dizi, size) << endl;


}