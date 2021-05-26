#include <iostream>
using namespace std;

int main()
{
    char button;
    cout << "Please enter the character" << endl;
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "Namaste world" << endl;
        break;

    case 'b':
        cout << "Ram Ram Duniya" << endl;
        break;

    case 'c':
        cout << "Kaise ho sab" << endl;
        break;

    default:
        cout << "Kya chahiye" << endl;
        break;
    }

    return 0;
}