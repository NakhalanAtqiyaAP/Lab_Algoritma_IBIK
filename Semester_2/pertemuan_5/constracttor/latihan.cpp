#include <iostream>
using namespace std;

class Mahasiswa{
    public:
        Mahasiswa() {
            cout<<"Mahasiswa terdaftar"<<endl;
        }
        ~Mahasiswa(){
            cout<<"Mahasiswa kena DO";
        }
};

int main()
{
    // * deklarasi biasa
    Mahasiswa mahasiswa1;                   // ! Disini ketika dideklarasikan setelah program selesai maka object tersebut akan terhapus.

    cout<<endl;

    // * deklarasi menggunakan pointer
    Mahasiswa *mahasiswa2 = new Mahasiswa;   
    delete mahasiswa2;                      // ! object akan terhapus, ketika programnya selesai. Atau jika memakai scope {} jika scope nya habis.         
    return 0;
}