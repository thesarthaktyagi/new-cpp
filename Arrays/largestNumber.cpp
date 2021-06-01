#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int number = 0;
    int multiplyer = 1;

    for (int i = 0; i < size; i++)
    {
        number += arr[i] * multiplyer;
        multiplyer *= 10;
    }

    cout << number << endl;

    return 0;
}