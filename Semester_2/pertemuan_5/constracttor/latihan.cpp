#include <iostream>
using namespace std;

class Mahasiswa{
    private:
    

    public:
        string nama;
        int npm;
        float gpa;
        // ! Constractor
        // * Fungsinya untuk deklarasi awal variabel
        Mahasiswa(string nama, int npm, float gpa) {
            this->nama = nama;
            this->npm = npm;
            this->gpa = gpa;
        }
        // ! Destructor
        ~Mahasiswa(){               
            cout<<"Mahasiswa kena DO";
        }
};

int main()
{
    // * deklarasi biasa
    // Mahasiswa mahasiswa1;                   // ! Disini ketika dideklarasikan setelah program selesai maka object tersebut akan terhapus.

    // cout<<endl;

    // * deklarasi menggunakan pointer
    // Mahasiswa *mahasiswa2 = new Mahasiswa();   
    // delete mahasiswa2;                      // ! object akan terhapus, ketika programnya selesai. Atau jika memakai scope {} jika scope nya habis. 
    
    Mahasiswa *mahasiswa1 = new Mahasiswa("Nakhalan", 2523123, 21.2);
    cout<<"Nama"<<mahasiswa1->nama<<endl;
    cout<<"Nama"<<mahasiswa1->npm<<endl;
    cout<<"Nama"<<mahasiswa1->gpa<<endl;
    return 0;
}