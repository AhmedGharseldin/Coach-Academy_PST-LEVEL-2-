//https://codeforces.com/problemset/problem/96/B

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const ll mxxx = 1e18;
const int N = 1e6 + 9;
int arr[N];
ll n, currentValue;
int numberOf7s, numberOf4s;
ll superlucky = mxxx;

ll findAllPossibleValues(ll currentValue, int numberOf7s, int numberOf4s)
{
    if (currentValue > n * 100)
        return 0;
    if (currentValue >= n && numberOf7s == numberOf4s)
    {
        superlucky = min(superlucky, currentValue);
    }
    findAllPossibleValues(currentValue * 10 + 4, numberOf7s, numberOf4s + 1);
    findAllPossibleValues(currentValue * 10 + 7, numberOf7s + 1, numberOf4s);
    return superlucky;
}

int main()
{
    cin >> n;
    cout << findAllPossibleValues(currentValue, numberOf7s, numberOf4s) << endl;
}
