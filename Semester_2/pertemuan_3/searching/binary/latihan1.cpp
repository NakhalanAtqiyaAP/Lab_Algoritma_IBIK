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
    return -1;
}

int main()
{

    int arr[8] = {1,2,4,5,6,7,8,9};
    

    cout<<"Target ada di indeks ke-"<<binarySeacrh(arr, 0, 7, 9);
    return 0;
}