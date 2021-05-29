#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter size of array ";

    cin >> n;

    int myArray[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Please Enter element no " << i + 1 << endl;
        cin >> myArray[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << myArray[i] << " ";
    }

    return 0;
}