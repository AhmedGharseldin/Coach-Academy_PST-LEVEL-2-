//https://codeforces.com/problemset/problem/1296/A

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int *arr = new int[n], sum = 0, odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if (arr[i] % 2 == 1)
                odd++;
            if (arr[i] % 2 == 0)
                even++;
        }
        if (sum % 2 == 1 || (odd >= 1 && even >= 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
