#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Please enter an integer" << endl;
    cin >> n;

    while (n > 0)
    {
        cout << n;
        cin >> n;
    }

    return 0;
}