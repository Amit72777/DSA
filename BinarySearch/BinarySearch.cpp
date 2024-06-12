#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) // function define
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key) // if key is equal to value return index
            return mid;
        else if (arr[mid] > key)
            end = mid - 1;
        else if (arr[mid] < key)
            start = mid + 1;
        mid = start + (end - start) / 2;
    }
    // return -1 if key is not found in array
    return -1;
}
int main()
{

    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    int key = 3;

    cout << "the index of " << key << " is : " << binarySearch(arr, size, key) << endl;
    return 0;
}