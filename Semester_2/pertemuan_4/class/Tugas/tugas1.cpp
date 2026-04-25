#include <iostream>
using namespace std;

class Electronic{
    protected:
        int harga;
        string warna;
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
};

int main()
{
    
    return 0;
}