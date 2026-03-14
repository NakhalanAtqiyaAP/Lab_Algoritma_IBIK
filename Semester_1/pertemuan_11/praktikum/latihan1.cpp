#include <iostream>

using namespace std;

// int main()
// {
//  int dudan, rini, *syarif;
//  dudan = 100;
//  rini = dudan;
//  syarif = &dudan;

//  cout<<"Nilai Dudan : "<< dudan<<endl;
//  cout<<"Nilai Rini :"<<rini<<endl;
//  cout<<"Nilai Syarif :"<<*syarif<<endl;

//   return 0;
// }

// int main()
// {
//     int dayat = 92;
//     int *hadi;
//     cout<<"Nilai awal dayat = "<<dayat<<endl;
//     hadi = &dayat;
//     cout<<"Nilai hadi sekarang = "<<*hadi<<endl;
//     *hadi = 80;
//     cout<<"Nilai dayat sekarang = "<<dayat<<endl;
//     cout<<"Nilai hadi sekarang = "<<*hadi<<endl;

//     return 0;
// }

int main()
{
    int maya;
    int *intan;
    int **dika;
    int ***dudan;

    maya = 80;
    cout<<"Nilai Maya Saat Ini :"<<maya<<endl;
    intan = &maya;
    dika = &intan;
    dudan = &dika;

    cout<<"Nilai Intan Saat Ini :"<<*intan<<endl;

    cout<<"Nilai Dika Saat Ini :"<<**dika<<endl;

    cout<<"Nilai Dudan Saat Ini :"<<***dudan<<endl;
    return 0;
}
