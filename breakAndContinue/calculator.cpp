#include <iostream>
using namespace std;

int main()
{

    int n1, n2;
    cout << "Please Enter the number ";
    cin >> n1 >> n2;

    char op;
    cout << "Please Enter an Operator ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1 + n2;
        break;

    case '-':
        cout << n1 - n2;
        break;

    case '*':
        cout << n1 * n2;
        break;

    case '/':
        cout << n1 / n2;
        break;
    default:
        cout << "Enter valid operator";
        break;
    }

    return 0;
}