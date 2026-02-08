#include <iostream>
using namespace std;

/*Deque ile Kaydırmalı Pencere
Bir dizide k uzunluklu sliding window maksimumlarını yazdır.

deque kullan

Zaman karmaşıklığı: O(n)*/
#include <deque>
#include <vector>


int main() {
    // Örnek dizi
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    // Deque: pencere içindeki maksimum ADAYLARININ indekslerini tutar
    deque<int> dq;

    // Diziyi soldan sağa tek kez dolaşıyoruz
    for (int i = 0; i < arr.size(); i++) {

        // 1️⃣ Pencere dışına çıkan elemanları deque'in başından sil
        // Eğer dq.front() <= i - k ise, bu indeks artık pencerenin dışında kalmıştır
        if (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        // 2️⃣ Yeni gelen elemandan küçük olanları deque'in sonundan sil
        // Çünkü bu elemanlar artık maksimum olamaz
        while (!dq.empty() && arr[dq.back()] <= arr[i]) {
            dq.pop_back();
        }

        // 3️⃣ Yeni elemanın indeksini deque'in sonuna ekle
        dq.push_back(i);

        // 4️⃣ İlk pencere tamamlandıysa (i >= k - 1)
        // Deque'in başındaki indeks, pencerenin maksimumunu gösterir
        if (i >= k - 1) {
            cout << arr[dq.front()] << " ";
        }
    }

    return 0;
}
