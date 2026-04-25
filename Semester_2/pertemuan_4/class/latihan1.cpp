#include <iostream>
using namespace std;

class Hewan {
    public :
    int berat;
    string jenisKelamin;

    void berlari (){
        cout<<"Sedang berlari"<<endl;
    }
};

int main()
{
    //* cara deklarasi object - cara ke-1
    Hewan binatang1;                    // ! disini object langsung mengambil dari class Hewan
    binatang1.berat = 30;
    cout<<"Berat hewan 1 adalah "<<binatang1.berat<<endl;

    // * cara deklarasi object - cara ke-2 (pakai pointer)
    Hewan *binatang2 = new Hewan();     // ! disini dia akan membuat sebuah object baru dengan class Hewan akan ber orentiasi ke Bintanag2. memakai panah karena pointer
    binatang2->berat = 20;
    cout<<"Berat hewan 2 adalah "<<binatang2->berat<<endl;

    // * Fungsi berlari
    binatang1.berlari();
    binatang2->berlari();

    return 0;
}