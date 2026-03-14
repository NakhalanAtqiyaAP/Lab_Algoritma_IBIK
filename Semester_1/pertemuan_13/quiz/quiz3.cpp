#include <iostream>
using namespace std;

struct Pegawai
{
    string nama;
    string jabatan;
    int gaji;
};

int umr(Pegawai pgw){
    if (pgw.gaji < 5000000)
    {
        cout<<"Pegawai dibawah UMR"<<endl;
    }else{
        cout<<"Pegawai diatas UMR"<<endl;
    }
    return pgw.gaji;
}

int main()
{
    Pegawai pgw;

    cout<<"Masukan nama: ";
    cin>>pgw.nama;
    cout<<"Masukan jabatan: ";
    cin>>pgw.jabatan;
    cout<<"Masukan gaji: ";
    cin>>pgw.gaji;

    cout<<"=== Data Pegawai ==="<<endl;
    cout<<"Nama :"<<pgw.nama<<endl;
    cout<<"Jabatan :"<<pgw.jabatan<<endl;
    cout<<"Gaji :"<<pgw.gaji<<endl;

    umr(pgw);
    return 0;
}