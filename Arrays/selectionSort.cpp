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

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (myArray[j] < myArray[i])
            {
                int temp = myArray[j];
                myArray[j] = myArray[i];
                myArray[i] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
    }
    return 0;
}