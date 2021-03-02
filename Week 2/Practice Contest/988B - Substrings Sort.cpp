//https://codeforces.com/contest/988/problem/B

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 2e5 + 9;
int arr[N];

bool compare(string s1, string s2)
{
    return s1.size() < s2.size();
}

int main()
{
    FastIO();
    int n;
    cin >> n;
    string arr[n];
    bool flag = true;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n, compare);
    for (int i = 0; i < n - 1; i++)
        if (arr[i + 1].find(arr[i]) == -1)
        {
            flag = false;
            cout << "NO" << endl;
            return 0;
        }
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
}