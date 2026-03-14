#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string data[3][2] ={
    {"Dudan", "252310043"},
    {"Maya", "252310021"},
    {"Andi", "252310023"}
    };
    cout<<left<<setw(10)<<"Nama";
    cout<<"NPM"<<endl;
    for (int i = 0; i < 3; i++)
    {
        
        for (int j = 0; j < 2; j++)
        {
            cout<<data[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}