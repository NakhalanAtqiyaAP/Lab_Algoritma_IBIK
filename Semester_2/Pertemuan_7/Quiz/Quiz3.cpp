#include <iostream>
using namespace std;

class BangunDatar{
    public:
    int luas,keliling;

    void hitungLuas(){

    }

    void hitungKeliling(){
        
    }
};

class Luas:BangunDatar{
    public:
    int sisi1, sisi2;

    // void hitungLuas(int sisi1, int sisi2){
    //     this->sisi1 = sisi1;
    //     this->sisi2 = sisi2;
    // }
    void hitungLuas(){
    cout<<"----------------------------------------------"<<endl;
    cout<<"Hitung Luas"<<endl;
    cout<<"Masukan Luas 1 :";
    cin>>sisi1;
    
    cout<<"Masukan Luas 2 :";
    cin>>sisi2;
    cin.ignore();

   int hasil = sisi1 * sisi2;
    cout<<"Hasil Luas:"<<hasil<<endl;
    cout<<"----------------------------------------------"<<endl;
    }

};

class Keliling:BangunDatar{
    public:
    int sisi1,sisi2,sisi3,sisi4;

   
    // void hitungKeliling(int sisi1, int sisi2, int sisi3, int sisi4){
    //      this->sisi1 = sisi1;
    //     this->sisi2 = sisi2;
    //     this->sisi3 = sisi3;
    //     this->sisi4 = sisi4;
    // }

    int hitungKeliling(){
    cout<<"----------------------------------------------"<<endl;
    cout<<"Hitung keliling"<<endl;
    cout<<"Masukan keliling 1 :";
    cin>>sisi1;

    cout<<"Masukan keliling 2 :";
    cin>>sisi2;

    cout<<"Masukan keliling 3 :";
    cin>>sisi3;

    cout<<"Masukan keliling 4 :";
    cin>>sisi4;
    cin.ignore();
    int hasil = sisi1 * sisi2 * sisi3 * sisi4;
    cout<<"Hasil Keliling:"<<hasil<<endl;
    cout<<"----------------------------------------------"<<endl;
    }

    
};

int main()
{
\
    Luas *luas = new Luas();
    Keliling *keliling = new Keliling();

    
    
    
    luas->hitungLuas();
    keliling->hitungKeliling();


    

    return 0;
}

