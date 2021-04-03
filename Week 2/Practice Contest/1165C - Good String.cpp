//https://codeforces.com/problemset/problem/1165/C

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 2e5 + 9;
int arr[N];

int main()
{
    int n;
    string s;
    string newString;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (newString.size() % 2 == 0 || newString.back() != s[i])
            newString.push_back(s[i]);
    }
    if (newString.size() % 2 == 1)
        newString.pop_back();
    cout << n - int(newString.size()) << endl
         << newString << endl;
    return 0;
}