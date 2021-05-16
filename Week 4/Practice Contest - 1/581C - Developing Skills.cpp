//https://codeforces.com/problemset/problem/581/C

#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b)
{
    return a % 10 > b % 10;
}
int main()
{
    int n, k, sum = 0;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++)
    {
        int rem = 10 - arr[i] % 10;
        if (arr[i] % 10 == 0)
            continue;
        if (rem <= k)
        {
            arr[i] += rem;
            k -= rem;
        }
    }
    for (int i = 0; i < n; i++)
    {
        while (arr[i] < 100 && k >= 10)
        {
            arr[i] += 10;
            k -= 10;
        }
    }
    for (int i = 0; i < n; i++)
        sum += arr[i]/10;

    cout << sum ;
    return 0;
}

// int main()
// {
//     int n, k, sum = 0, input;
//     bool hundred = true, zero = true;
//     cin >> n >> k;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> input;
//         sum += input;
//     }
//     if (sum < n * 100)
//     {
//         if (sum + k <= n * 100)
//             cout << (sum + k) / 10 << endl;
//         else
//             cout << n * 10 << endl;
//     }
//     else
//         cout << sum / 10;
//     return 0;
// }

// if (input < 100)
//     hundred = false;
// if (input != 0)
//     zero = false;
// if (n == 1)
// {
//     if (arr[0] + k <= 100)
//         cout << arr[0] + k / 10 << endl;
//     else
//         cout << 10 << endl;
//     return 0;
// }
// if (hundred)
// {
//     cout << sum / 10;
//     return 0;
// }
// if (zero)
// {
//     sum = n * 100;
//     if (sum <= k)
//         cout << sum / 10 << endl;
//     else
//         cout << k / 10 << endl;
//     return 0;
// }