#include <iostream>
#include <string>
using namespace std;

/*Sayı Ters Çevirme & Palindrom

Soru:
Kullanıcıdan bir tam sayı al.

Sayının tersini hesapla

Eğer sayı palindrom ise "Palindrome" yazdır

📌 Örnek:

Input: 12321
Output: Palindrome
*/

int main(){

    int sayi = 1;
    
    string a;

    
    cout << "Sayi giriniz: ";
    cin >> sayi;

    if(sayi <= 0) cout << "pozitif deger giriniz.";

    else{

        //sayının tersini a değerine eşitledik.
        for(int i = to_string(sayi).length() - 1; i >= 0; i--){
            a += to_string(sayi)[i];
        }
            
        if(a == to_string(sayi)) cout << "Palindrome\n";
        else cout << "Palindrome değil.\n";
    }

}