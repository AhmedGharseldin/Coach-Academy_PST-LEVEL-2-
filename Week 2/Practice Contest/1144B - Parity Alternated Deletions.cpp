//https://codeforces.com/problemset/problem/1144/B

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 2e5 + 9;
int arr[N];

int main()
{
    FastIO();
    int n, x, sum = 0;
    cin >> n;
    int arr[n], odd[n], even[n], sizeOdd = 0, sizeEven = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] & 1)
            odd[i] = arr[i], sizeOdd++;
        else
            even[i] = arr[i], sizeEven++;
    }
    if (abs(sizeEven - sizeOdd) <= 1)
    {
        cout << 0 << endl;
        return 0;
    }
    else if (sizeEven > sizeOdd)
    {
        x = sizeEven - sizeOdd - 1;
        sort(even, even + n);
        for (int i = 0; i < n && x > 0; i++)
            if (even[i] == 0)
                continue;
            else
                sum += even[i], x--;
    }
    else
    {
        x = sizeOdd - sizeEven - 1;
        sort(odd, odd + n);
        for (int i = 0; i < n && x > 0; i++)
            if (odd[i] == 0)
                continue;
            else
                sum += odd[i], x--;
    }
    cout << sum << endl;
    return 0;
}
