#include <iostream>
#include <string>
using namespace std;

struct detailAlamat
{
    string desa;
    string kota;
};

struct Orang
{
    string nama;
    detailAlamat alamat;
    int umur;
};

int main() {
    Orang mhs;
    cout << "Nama : ";
    cin >> mhs.nama;
    cout << "Alamat Desa : ";
    cin >> mhs.alamat.desa;
    cout << "Alamat Kota : ";
    cin >> mhs.alamat.kota;
    cout << "Umur : ";
    cin >> mhs.umur;
    cout << endl;

    // tampilkan   
    cout << "Nama : " << mhs.nama << endl; 
    cout << "Alamat Desa : " << mhs.alamat.desa << endl; 
    cout << "Alamat Kota : " << mhs.alamat.kota << endl; 
    cout << "Umur : " << mhs.umur << endl; 
}


