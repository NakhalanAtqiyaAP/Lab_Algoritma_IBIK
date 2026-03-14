#include <iostream>

using namespace std;

void tambah(int, int);

int main()
{
  int a = 5,b = 2;

  cout<<"Nilai sebelum fungsi digunakan \n";
  printf("a = %d, b = %d", a, b);

  tambah(a,b);

  cout<<"Nilai setelah fungsi digunakan \n";
  printf("a = %d, b = %d", a, b);
  return 0;
  
}
void tambah (int n, int m){
    n = n + 2;
    m = n + 7;

    cout<<"\n Nilai di dalam fungsi tambah()";
     printf("n = %d, m = %d", n, m);
  }