#include <iostream>
using namespace std;

void validation(int *bilangan){
    if (*bilangan < 0)
    {
        cout<<"bilangan tidak valid, karena negatif"<<endl;
        *bilangan = (*bilangan - *bilangan) + 1;
        cout<<"angka valid terdekat: "<<*bilangan;
    }else if(*bilangan > 100){
        cout<<"bilangan tidak valid, lebih dari 100"<<endl;
        *bilangan = (*bilangan - *bilangan) + 99;
        cout<<"angka valid terdekat: "<<*bilangan;
    }else{
        cout<<"Angka Valid ";
    }
    
}


int main()
{
    int bil;
    cout<<"Masukan inputan berupa 0-100 :";
    cin>>bil;

    validation(&bil);

    cout<<"\nAngka dari main : "<<bil;
    return 0;
}