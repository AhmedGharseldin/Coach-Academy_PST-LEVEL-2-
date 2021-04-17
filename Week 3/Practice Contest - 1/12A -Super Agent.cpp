//https://codeforces.com/problemset/problem/12/A

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 2e5 + 9;
int arr[N];

int main()
{
    char symbols[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> symbols[i][j];
    if (symbols[0][0] == symbols[2][2] && symbols[0][1] == symbols[2][1] && symbols[0][2] == symbols[2][0] && symbols[1][0] == symbols[1][2])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}