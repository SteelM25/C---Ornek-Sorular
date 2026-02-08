#include <cstddef>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*Vector Temelleri
Kullanıcıdan n sayı al, bir vector’e koy.

Tek sayıları sil

Kalanları ters sırada yazdır

👉 erase-remove idiom’unu öğren.*/

int main(){
    
    int n;

    vector<int> sayilar;

    cout << "Eklemek istediğiniz sayı adedi nedir? : ";
    cin >> n;

    //* Sayıları vectöre ekliyoruz.

    int sayi = 0;

    for(int i = 0; i < n; i++){
        cout << i + 1 << ". eleman: ";
        cin >> sayi;
        sayilar.push_back(sayi);
    }

    //! tek sayıları siliyoruz.
    sayilar.erase(
    remove_if(sayilar.begin(), sayilar.end(),
                   [](int x) { return x % 2 != 0; }),
    sayilar.end()

);
// sayilar.erase_if(sayilar, [](int x){ return x % 2 == 0; });      C++ 20 ile gelen daha net yöntem.
    

    //kalanları ters yazdıralım
    for (int i = sayilar.size() - 1; i >= 0; i--) {
    if (sayilar[i] % 2 != 0) {
        sayilar.erase(sayilar.begin() + i);
    }
}

cout << "\nKalan sayilar\n\n";
for(int i = 0; i < sayilar.size(); i++){
    cout << sayilar.at(i) << endl;    
}

/* erase-remove idiomu:  
Hadi **çok basit**, günlük hayattan bir örnek ile `erase-remove idiom`u anlatalım.

---

### 🧺 **Senaryo: Çamaşır sepetinde kirli çorapları atmak**

Diyelim ki bir vektörün var: içinde **sayılar** yerine **çoraplar** olsun.  
Ama bazı çoraplar **kirli** → onları sepetten çıkarmak istiyorsun.

```cpp
vector<string> coraplar = {"temiz", "kirli", "temiz", "kirli", "temiz"};
```

Amacın: **Sadece "temiz" çorapları bırakmak**.

---

### ❌ Yanlış (ve tehlikeli) yol:
```cpp
for (int i = 0; i < coraplar.size(); i++) {
    if (coraplar[i] == "kirli") {
        coraplar.erase(coraplar.begin() + i); // ⚠️ İndeks kayması olur!
    }
}
```
→ Bu, daha önce konuştuğumuz gibi **eleman atlamaya** neden olur.

---

### ✅ Doğru ve basit yol: **erase-remove idiom**

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    vector<string> coraplar = {"temiz", "kirli", "temiz", "kirli", "temiz"};

    // Kirli çorapları KALDIR!
    coraplar.erase(
        remove_if(coraplar.begin(), coraplar.end(),
                  [](const string& c) { return c == "kirli"; }),
        coraplar.end()
    );

    // Kalanları yazdır
    for (const string& c : coraplar) {
        cout << c << " ";
    }
    // Çıktı: temiz temiz temiz
}
```

---

### 🔍 Adım adım ne oldu?

1. **`remove_if`** dedik ki:  
   > “Eğer çorap **'kirli'** ise, onu arkaya it.”

   Vektör artık şöyle görünüyor (mantıksal olarak):  
   `["temiz", "temiz", "temiz", "kirli", "kirli"]`  
   Ama aslında hâlâ 5 eleman var!

2. **`remove_if`**, bize **üçüncü `"temiz"`ten sonraki yeri** gösteren bir işaretçi (iterator) döndürdü.

3. **`erase(iterator, end())`** dedik:  
   > “İşaretçiden sona kadar olan kısmı **gerçekten sil**!”

   Artık vektör sadece 3 elemanlı: `["temiz", "temiz", "temiz"]`

---

### 💡 En basit sayısal örnek:

```cpp
vector<int> sayilar = {1, 2, 3, 4, 5};

// Tüm 3'leri sil
sayilar.erase(
    remove(sayilar.begin(), sayilar.end(), 3),
    sayilar.end()
);
// Sonuç: {1, 2, 4, 5}
```

> Burada `remove_if` değil, `remove` kullandık çünkü **sabit bir değeri** (3) siliyoruz.  
> Koşul varsa (`tek mi?`, `büyük mü?`) → `remove_if`  
> Sabit değer silinecekse → `remove`

---

### 📌 Unutma:
- `remove` / `remove_if` → **silmaz**, sadece **kaldırılacakları kenara iter**.
- Gerçek silme işini **`erase`** yapar.
- Bu ikiliye **“erase-remove idiom”** denir.

---

Artık bu kalıp sana "sihirli formül" gibi gelmeyecek! 😊  
İstersen kendi örneğini yaz, beraber düzelteyim.*/
    
}