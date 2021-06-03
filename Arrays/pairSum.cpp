#include <iostream>
using namespace std;

bool pairSum(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == key)
        {
            cout << "Element at index " << low << " plus element at index " << high << " equals to key" << endl;
            cout << arr[low] << " + " << arr[high] << " = " << key << endl;
            return true;
        }
        else if (arr[low] + arr[high] > key)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}

int main()
{
    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int key = 31;
    cout << pairSum(arr, 8, key);
}