#include <iostream>
#include <string>
using namespace std;

struct Orang
{
    string nama;
    string alamat;
    int umur;
};

int main() {
    Orang mhs;
    cout << "Nama : ";
    cin >> mhs.nama;
    cout << "Alamata : ";
    cin >> mhs.alamat;
    cout << "Umur : ";
    cin >> mhs.umur;
    cout << endl;

    
}
