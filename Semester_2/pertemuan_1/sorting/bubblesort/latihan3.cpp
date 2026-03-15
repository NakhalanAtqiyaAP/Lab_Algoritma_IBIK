#include <iostream>
using namespace std;


void sorting(int arr[], int n){
    for (int i = 0; i < n - 1; i++)
    {
       for (int j = 0; j < n - i - 1; j++)
       {
        if (arr[j] > arr[j+1])
        {
           int temp = arr[j];
           arr[j] = arr[j+1];
           arr[j+1] = temp;
        }
        
       }
       
    }
    
}

int main()
{
    int n = 5;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
       cout<<"Masukan angka ke-"<<i+1<<" : ";
       cin>>arr[i];
    }

    cout<<"\nSebelum sorting"<<endl;
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    sorting(arr, n);

    cout<<"\nSetelah sorting"<<endl;
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    
    return 0;
}