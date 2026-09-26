// Link: https://codeforces.com/problemset/problem/2260/A

#include <iostream>
using namespace std;

int main()
{
    int testCase = 0;
    // cout << "Enter the number of test case: ";
    cin >> testCase;

    cout<<endl<<endl;

    for (int k = 0; k < testCase; k++)
    {
        int n;
        // cout << "Enter the size: ";
        cin >> n;

        int arr[n];

        bool startingZeroFound = false, endingZeroFound = false;
        int startingZeroIdx = -1, endingZeroIdx = -1;

        for (int i = 0; i < n; i++)
        {
            int x = 0;
            cin >> x;

            if (x == 0 || x == 1)
            {
                arr[i] = x;

                if (arr[i] == 0)
                {
                    if (!startingZeroFound)
                    {
                        startingZeroIdx = i;
                        startingZeroFound = true;
                    }
                    else
                    {
                        endingZeroIdx = i;
                        endingZeroFound = true;
                    }
                }
            }
            else
            {
                i--;
                // cout << "Enter number 0 or 1" << endl;
                continue;
            }
        }

        int totalOperation = -1;
        int firstSwap = startingZeroIdx - 0, secondSwap = (n - 1) - endingZeroIdx;

        if (startingZeroFound && endingZeroFound)
        {
            if (firstSwap != 0 && secondSwap != 0)
            {
                totalOperation = 2;
            }
            else if (firstSwap > 0 || secondSwap > 0)
            {
                totalOperation = 1;
            }
            else
            {
                totalOperation = 0;
            }
        }

        cout << totalOperation << endl ;
    }

    return 0;
}
