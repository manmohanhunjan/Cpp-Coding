#include<iostream>
using namespace std;

void extremePrint(int arr[], int size){
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        if (left == right)
        {
            cout << arr[left] << endl;
        }else
        {
            cout << arr[left] << endl;
            cout << arr[right] << endl;
        }
        left++;
        right--;
        
    }
    
}

int main()
{
    // int arr[6] = {10, 20, 30, 40, 50, 60};
    // int size = 6;
    // extremePrint(arr, size);

    int arr1[5] = {10, 20, 30, 40, 50};
    int size1 = 5;
    extremePrint(arr1, size1);
    return 0;
}