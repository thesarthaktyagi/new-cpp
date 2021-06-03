#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[], int size)
{
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
    return maxSum;
}

int main()
{

    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int wrapSum;
    int nonWrapSum;
    nonWrapSum = kadane(arr, size);
    int totalSum = 0;
    for (int i = 0; i < size; i++)
    {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }

    wrapSum = totalSum + kadane(arr, size);
    cout << max(wrapSum, nonWrapSum) << endl;

    return 0;
}