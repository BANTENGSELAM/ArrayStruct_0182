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

    //mengisi 1 per 1
    cout << "Data index 0 = ";
    cin >> kamu[0]; // 0
    cout << "Data index 1 = ";
    cin >> kamu[1]; // 1
    cout << "Data index 2 = ";
    cin >> kamu[2]; // 2
    cout << "Data index 3 = ";
    cin >> kamu[3]; // 3
    cout << "Data index 4 = ";
    cin >> kamu[4]; // 4
    cout << endl;

    // Mengisi menggunakan perulangan for
    for (int i = 0; i < 4; i++)
    {
        cout << "Data Index Ke-" << i << " = ";
        cin >> kamu[1];
    }
    cout << endl;

    //Menampilkan dengan menggunakan perulangan for
    for (int i = 0; i < 4; i++)
    {
        cout << "Data Ke-" << i+1 << " = " << kamu[1] << endl;
    }

}