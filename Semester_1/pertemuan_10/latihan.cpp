#include <iostream>

using namespace std;

int faktorial(int nilai){
    int result = 1;
    for(int i = 1; i <= nilai; i++){
     result *= i;
    }
    cout<<result;
    return result;
}


int main()
{
  int nilai_faktorial;

    cout<<"Masukan nilai faktorial : ";
    cin>>nilai_faktorial;

    faktorial(nilai_faktorial);
    cout<<endl;

  return 0;
}