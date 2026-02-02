#include <iostream>
using namespace std;

/*Kullanıcıdan bir N değeri al.
1 ile N arasındaki:

çift sayıların toplamını,

tek sayıların adedini
ekrana yazdır.

📌 Amaç:

for döngüsü

Mod (%) kullanımı

Sayaç ve akümülatör mantığı*/

int main(){

    int N, adet = 0, ciftToplam = 0;
    cout << "N: ";
    cin >> N;

    if(N > 0){

        for(int i = 1; i <= N; i++){
            if(i%2 == 0){
                ciftToplam += i;
            }
            else{
                adet++;
            }
        }
        cout << "1 ile " << N << " arasındaki çift sayıların toplamı: " << ciftToplam << endl;

        cout << "1 ile " << N << " arasındaki tek sayıların adedi: " << adet << endl;
    }
    else{
        cout << "Pozitif bir adet giriniz.\n";
    }
    

}