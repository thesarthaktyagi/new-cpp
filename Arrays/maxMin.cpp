#include <iostream>
using namespace std;

int main()
{

    int size;
    cout << "Please enter size of the array" << endl;

    cin >> size;
    int myArray[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Please enter element no " << i + 1 << endl;
        cin >> myArray[i];
    }

    int minimum = myArray[0];
    int maximum = 0;
    for (int j = 0; j < size; j++)
    {
        if (myArray[j] > maximum)
        {
            maximum = myArray[j];
        }
        else if (myArray[j] < minimum)
        {
            minimum = myArray[j];
        }
    }
    cout << "Minimum Element " << minimum << endl;
    cout << "Maximum Element " << maximum << endl;

    return 0;
}