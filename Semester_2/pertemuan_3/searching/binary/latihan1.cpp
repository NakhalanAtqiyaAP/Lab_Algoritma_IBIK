#include <iostream>
using namespace std;

int binarySeacrh(int arr[], int left, int right, int target){
    if(right >= left){
        int mid = left + (right-left) / 2;

        if(arr[mid] == target){
            return mid;
        }
        if (arr[mid] > target)
        {
            return binarySeacrh(arr, left, mid - 1, target);
        }
        return binarySeacrh(arr, mid + 1, right, target);
        
    }
}

int main()
{
    int n;
    int arr[n] = {1,23,4,54,6,5,43,5};

    cout<<binarySeacrh(arr, n);
    return 0;
}