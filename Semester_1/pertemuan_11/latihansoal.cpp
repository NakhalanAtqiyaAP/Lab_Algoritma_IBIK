#include <iostream>
#include <cmath>

using namespace std;

void pangkat(int *x){
   *x = pow(*x, 3);

    cout<<"Nilai x setelah di pangkat : "<<*x<<endl;
    
}

int main()
{
 int x;
 cout<<"Masukan sebuah angka:";
 cin>>x;
 cout<<"Angka awal: "<<x<<endl;

 pangkat(&x);
 cout<<"Nilai x setelah dipanggil pangkat(): "<<x<<endl;
  return 0;
}

