#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int n1, n2;
    cout << "Please Enter Two Numbers ";
    cin >> n1 >> n2;

    for (int i = n1; i <= n2; i++)
    {
        if (isPrime(i))
        {
            cout << "Prime" << i << endl;
        }
    }
    return 0;
}
