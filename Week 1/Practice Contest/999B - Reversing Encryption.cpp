//https://codeforces.com/problemset/problem/999/B

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string word;
    cin >> n >> word;
    for (int i = 0; i <= n; i++)
    {
        if (i != 0 && i != 1 && (n % i == 0))
        {
            reverse(word.begin(), word.begin() + i);
        }
    }
    for (int i = 0; i < n; i++)
        cout << word[i];
    cout << endl;
    return 0;
}
