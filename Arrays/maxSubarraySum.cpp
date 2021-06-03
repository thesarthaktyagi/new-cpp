#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        currSum += arr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }

    cout << maxSum;

    return 0;
}