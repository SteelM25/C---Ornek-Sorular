#include <iostream>
using namespace std;

/*Fibonacci Karşılaştırması

Soru:
Fibonacci dizisinin n inci elemanını:

İteratif

Rekürsif

iki ayrı fonksiyonla hesapla ve aynı girdi için sonuçları yazdır.

📌 Amaç:

Performans farkını fark etmek

Aynı problemi farklı yöntemlerle çözmek

📌 Ek (zorunlu değil):
Yorum satırında hangisinin neden daha yavaş olduğunu yaz.*/

// İteratif Fibonacci
long long fibIteratif(int n) {
    if (n <= 1)
        return n;

    long long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// Rekürsif Fibonacci
long long fibRekursif(int n) {
    // Rekürsif çözüm daha yavaştır çünkü
    // aynı fibonacci değerleri tekrar tekrar hesaplanır
    // (overlapping subproblems) ve her çağrı stack'te yer kaplar.
    if (n <= 1)
        return n;

    return fibRekursif(n - 1) + fibRekursif(n - 2);
}

int main() {
    int n;

    cout << "n degerini giriniz: ";
    cin >> n;

    cout << "Iteratif Fibonacci(" << n << "): "
         << fibIteratif(n) << endl;

    cout << "Rekursif Fibonacci(" << n << "): "
         << fibRekursif(n) << endl;

    return 0;
}
