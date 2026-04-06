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
    Orang mhs[3];

    for (int i = 0; i < 2; i++)
    {
        cout << "Nama : ";
        getline (cin, mhs[1].nama) ;
        cout << "Alamat Desa : ";
        getline (cin, mhs[1].alamat.desa) ;
        cout << "Alamat Kota : ";
        getline (cin, mhs[1].alamat.kota) ;
        cout << "Umur : ";
        cin >> mhs[1].umur;
        cout << endl;

        // tampilkan   
        cout << "Nama : " << mhs[1].nama << endl; 
        cout << "Alamat Desa : " << mhs[1].alamat.desa << endl; 
        cout << "Alamat Kota : " << mhs[1].alamat.kota << endl; 
        cout << "Umur : " << mhs[1].umur << endl; 
    }
    
}


