//https://codeforces.com/problemset/problem/1472/D

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        bool Alice = true;
        cin >> n;
        int arr[n];
        long long aliceScore = 0, bobScore = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n, greater<int>());

        for (int i = 0; i < n; i++)
        {
            if (Alice)
            {
                Alice = false;
                if (arr[i] % 2 == 0)
                    aliceScore += arr[i];
                else
                    continue;
            }
            else
            {
                Alice = true;
                if (arr[i] & 1)
                    bobScore += arr[i];
                else
                    continue;
            }
        }
        if (aliceScore > bobScore)
            cout << "Alice" << endl;
        else if (aliceScore == bobScore)
            cout << "Tie" << endl;
        else
            cout << "Bob" << endl;
    }
}