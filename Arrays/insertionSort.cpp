#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int myArray[size];
    for (int i = 0; i < size; i++)
    {
        cin >> myArray[i];
    }

    for (int i = 1; i < size; i++)
    {
        int current = myArray[i];
        int j = i - 1;
        while (myArray[j] > current && j >= 0)
        {
            myArray[j + 1] = myArray[j];
            j--;
        }
        myArray[j + 1] = current;
    }

    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
    }
    return 0;
}