#include <iostream>

using namespace std;

void pembalik(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}


int main()
{
  int a = 2, b = 3;
  cout<<"Sebelum pembalikan :"<<endl
  <<"A :"<<a<<endl
  <<"B :"<<b<<endl;

  pembalik(&a, &b);

  cout<<"Sesudah pembalikan :"<<endl
  <<"A :"<<a<<endl
  <<"B :"<<b<<endl;

  return 0;
}