#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    //Printing
    int i = 0;
    while (i < size)
    {
        cout << arr[i] << " ";
        i++;
    }
}

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    reverseArray(arr, size);
    return 0;
}