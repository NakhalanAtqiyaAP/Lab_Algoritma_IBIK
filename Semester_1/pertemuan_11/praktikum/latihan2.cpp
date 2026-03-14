#include <iostream>

using namespace std;

void tambah(int *c, int *d);

int main()
{
  int a,b;
  a = 4;
  b = 2;

  cout<<"Nilai sebelum pemanggilan fungsi : "<<endl;
  cout<<"\na = "<<a<<"\nb = "<<b;

  tambah(&a,&b);
  cout<<"Nilai sesudah pemanggilan fungsi:"<<endl;
   cout<<"\na = "<<a<<"\nb = "<<b<<endl;

  return 0;
}

void tambah(int *c, int *d)
{
    *c += 100;
    *d += 203;

    cout<<endl;
    cout<<"\nNilai akhir di akhir fungsi tambah() : "<<endl;
    cout<<"\nc = "<<*c<<"\nd = "<<*d<<endl;
}
