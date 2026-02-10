#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

/*Frekans Sayma (Klasik)
Bir string al → karakter frekanslarını yazdır.

map ile

unordered_map ile*/

int main() {
    string s = "merhaba";

    map<char, int> freq;

    for (char c : s) {
        freq[c]++;
    }

    for (auto p : freq) {
        cout << p.first << " -> " << p.second << endl;
    }
    cout << "\n\n";

    //unordered map ile
    string a = "merhaba";

    unordered_map<char, int> fre;

    for (char c : s) {
        fre[c]++;
    }

    for (auto p : fre) {
        cout << p.first << " -> " << p.second << endl;
    }
}
