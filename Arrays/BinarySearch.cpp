#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{

    int size;
    cin >> size;

    int myArray[size];
    for (int i = 0; i < size; i++)
    {
        cin >> myArray[i];
    }

    int key;
    cout << "Enter the key ";
    cin >> key;

    cout << binarySearch(myArray, size, key) << endl;

    return 0;
}