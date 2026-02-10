#include <iostream>
#include <iterator>
#include <list>
#include <vector>
using namespace std;

/*Vector vs List Karşılaştırması
Aynı işlemi iki şekilde yap:

Ortadan 1000 eleman sil

Hangisi daha mantıklı? Neden?

📌 Kod + yorum yaz*/

int main(){
    
    vector<int> v;

    // 10.000 eleman ekleyelim
    for (int i = 0; i < 10000; i++)
        v.push_back(i);

    // Ortadan başla
    int start = v.size() / 2;

    // Ortadan 1000 eleman sil
    v.erase(v.begin() + start, v.begin() + start + 1000);

    cout << "Vector size: " << v.size() << endl;

    //? list

    list<int> lst;

    // 10.000 eleman ekleyelim
    for (int i = 0; i < 10000; i++)
        lst.push_back(i);

    // Ortaya iterator ile gel
    auto it = lst.begin();
    advance(it, lst.size() / 2);

    // Ortadan 1000 eleman sil
    for (int i = 0; i < 1000; i++) {
        it = lst.erase(it);
    }
    cout << "List size: " << lst.size() << endl;

    /*Hangisi daha mantıklı? ❓
✔ Bu senaryoda: LIST

Neden?

Ortadan çok sayıda silme var

vector her silmede eleman kaydırır

list sadece link koparır

👉 Algoritma açısından list daha doğru seçim

5️⃣ Ama kritik not ⚠️ (çok önemli)

Eğer:

Silme çok nadir

Okuma / dolaşma çok sık

➡️ vector çoğu zaman daha hızlı olur
(Cache locality farkı yüzünden)*/
   
}