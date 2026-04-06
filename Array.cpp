#include <iostream>
#include <string>
using namespace std;


int main() {
    
    //deklarasi dengan inisialisasi
    int aku[5] = {10,20,30,40,50};
    //deklarasi tanpa inisialisasi
    int kamu[5];

    //tampilkan data
    cout << "Data Pada Index 1 = " << aku[1] << endl;
    //ganti index ke 1
    aku[1] = 200;
    cout << endl;
}