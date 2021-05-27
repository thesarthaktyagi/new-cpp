#include <iostream>

using namespace std;

bool isPythagoreanTriplet(int n1, int n2, int n3)
{
    int maxNum = max(n1, max(n2, n3));
    int sum = n1 * n1 + n2 * n2 + n3 * n3 - maxNum * maxNum;
    if (sum == maxNum * maxNum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    if (isPythagoreanTriplet(n1, n2, n3))
    {
        cout << "Pythagorean Triplet";
    }
    else
    {
        cout << "Not Pythagorean Triplet";
    }
    return 0;
}