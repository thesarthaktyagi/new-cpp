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

    int counter = 1;
    while (counter < size)
    {
        for (int i = 0; i < size - counter; i++)
        {
            if (myArray[i] > myArray[i + 1])
            {
                int temp = myArray[i];
                myArray[i] = myArray[i + 1];
                myArray[i + 1] = temp;
            }
        }
        counter++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
    }
    return 0;
}