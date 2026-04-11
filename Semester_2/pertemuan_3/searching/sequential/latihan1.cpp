#include <iostream>
using namespace std;

int sequentialSearch (int arr[], int n, int target){
    for (int i = 0; i < n; i++)
    {
       if (arr[i] == target)
       {
        return i;
       }
       
    }
    return -1;
}

int main()
{
    int n;
    int arr[n] = {2,3,4,1,7,54,34,21,3};

    cout<<"Nilai ditemukan di index "<<sequentialSearch(arr,n,34);
    return 0;
}