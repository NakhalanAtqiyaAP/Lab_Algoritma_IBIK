#include <iostream>
using namespace std;

class Hewan {
    // public :
    // int berat;
    // string jenisKelamin;

    private :
    int berat;
    string jenisKelamin;

    public :
    void berlari (){
        cout<<"Sedang berlari"<<endl;
    }

    //* Setter untuk mengisi nilai private
    void setBerat(int berat){
       this->berat = berat;
    }

    //* Getter untuk mengembalikan nilai private
    int getBerat(){
        return this->berat;
    }
    

    
};

int main()
{
    //* cara deklarasi object - cara ke-1
    Hewan binatang1;                    // ! disini object langsung mengambil dari class Hewan
    binatang1.setBerat(30);
    cout<<"Berat hewan 1 adalah "<<binatang1.getBerat()<<endl;

    // * cara deklarasi object - cara ke-2 (pakai pointer)
    Hewan *binatang2 = new Hewan();     // ! disini dia akan membuat sebuah object baru dengan class Hewan akan ber orentiasi ke Bintanag2. memakai panah karena pointer
    binatang2->setBerat(50);
    cout<<"Berat hewan 2 adalah "<<binatang2->getBerat()<<endl;

    // * Fungsi berlari
    binatang1.berlari();
    binatang2->berlari();

    return 0;
}