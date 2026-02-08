#include <iostream>
using namespace std;
#include <list>

/*List ile Güvenli Silme
Bir list<int> içinde gezerken 3’ün katlarını sil.

Iterator invalidation’a dikkat et*/

int main(){

    list<int> lst = {5, 9, 4, 6, 20, 36, 8};

    // for (auto it = lst.begin(); it != lst.end(); ) {
    // if (*it % 3 == 0) {
    //     it = lst.erase(it);  // ✅ güvenli
    // } else {
    //     ++it;
    // }

    lst.remove_if([](int x) { //? daha modern stil
        return x % 3 == 0;
    });

    for(int a : lst){
        cout << a << " ";
    }


    
}


