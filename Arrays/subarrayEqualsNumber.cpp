
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum;
    cin >> sum;
    int curSum = 0;
    int st = 0;
    int end = 0;
    while (st < n)
    {
        if (end > n)
        {
            curSum = 0;
            st++;
            end = st;
        }
        if (curSum == sum)
        {
            cout << "The mentioned sun was found from index " << st << " to " << end - 1 << endl;
            break;
        }
        else
        {
            curSum += a[end];
        }
        end++;
    }
    if (end > n)
    {
        cout << "Oops! the sum was not found in any subarray.";
    }
    return 0;
}