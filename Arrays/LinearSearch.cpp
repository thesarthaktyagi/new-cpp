#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int n;
    cin >> n;

    int myArray[n];
    for (int i = 0; i < n; i++)
    {
        cin >> myArray[i];
    }

    int key;
    cout << "Please enter the key to be Searched ";
    cin >> key;

    cout << LinearSearch(myArray, n, key);

    return 0;
}