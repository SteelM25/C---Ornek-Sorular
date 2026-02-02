#include <iostream>
using namespace std;


/*Kullanıcıdan iki tam sayı al.

Eğer ikisi de pozitifse çarpımlarını,

Biri negatifse toplamlarını,

İkisi de sıfırsa ekrana "Both zero" yazdır.

📌 Amaç:

if / else if / else

Mantıksal operatörler

Girdi kontrolü*/

int main(){

    int a, b;

    cout << "Sayi 1: ";
    cin >> a;

    cout << "Sayi 2: ";
    cin >> b;

    cout << endl << endl;
    if(a > 0 && b > 0){
        cout << a * b;
    }
    else if(a < 0 && b >= 0 || b < 0 && a >= 0){
        cout << a + b;
    }
    else if(a < 0 && b < 0){
        cout << "Her iki sayı da NEGATİF" << endl;
    }
    else if(a == 0 && b == 0){
        cout << "Both zero\n";
    }

}