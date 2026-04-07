#include <iostream>
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

int main()
{
    //Deklarasi variable struct
    Orang mhs;
    // Mengisi data
    cout << "Isikan data nama : ";
    cin >> mhs.nama;

    cout << "Isikan data desa : ";
    cin >> mhs.alamat.desa;

    cout << "Isikan data kota : ";
    cin >> mhs.alamat.kota;

    cout << "Isikan data umur : ";
    cin >> mhs.umur;

}