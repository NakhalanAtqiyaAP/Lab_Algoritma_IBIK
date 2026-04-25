#include <iostream>
using namespace std;

class Electronic{
    protected:
        int harga;
        string warna;
    public:
    void setHarga(int harga){
        this->harga= harga;
    }

    int getHarga(){
        return this->harga;
    }

    void Charge(){
        cout<<"Handphone is changering"<<endl;
    }
};

class Handphone : public Electronic{
    private :
    string brand;
    string os;
    int ram;
    int storage;

    public:
    void setBrand(string brand){
        this->brand = brand;
    }

    string getBrand(){
        return this->brand;
    }
    // Fungsi dengan nama nya sama dengan parent class akan menimpa fungsi class yang namanya sama (polymorphism)
    // void Charge(){
    //     cout<<"battery ...87%"<<endl;
    // }
};

int main()
{
    Handphone *handphone1 = new Handphone();

    //* Memakai setter dan getter dari kelasnya sendiri
    handphone1->setBrand("Samsung");
    cout<< handphone1->getBrand()<<endl;

    //* Memakai setter dan getter dari kelas parent
    handphone1->setHarga(500000);
    cout<< handphone1->getHarga()<<endl;

    handphone1->Charge();
    return 0;
}