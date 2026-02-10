#include <iostream>
#include <unordered_set>
using namespace std;

/*Bir dizide ilk tekrar eden sayiyi bul*/

int main(){

    int arr[] = {2, 5, 1, 2, 3, 5};
    int n = 6;

    unordered_set<int> seen;

    for (int i = 0; i < n; i++) {
        // Eğer daha önce gördüysek
        if (seen.count(arr[i])) {
            cout << "Ilk tekrar eden: " << arr[i] << endl;
            return 0;
        }
        // İlk kez görüyorsak ekle
        seen.insert(arr[i]);
    }

    cout << "Tekrar eden eleman yok" << endl;


}