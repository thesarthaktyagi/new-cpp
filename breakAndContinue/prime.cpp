#include <iostream>
using namespace std;

int main()
{

    int n;
    int i;
    cout << "Please enter a number " << endl;
    cin >> n;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Non Prime" << endl;
            break;
        }
    }

    if (i == n)
    {
        cout << "Prime" << endl;
    }

    return 0;
}