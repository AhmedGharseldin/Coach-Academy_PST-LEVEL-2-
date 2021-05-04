//https://codeforces.com/problemset/problem/652/B

#include <bits/stdc++.h>
#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
typedef long long ll;

using namespace std;

int solve(string s)
{
    int numberOfDigits = s.size(), ansPart2 = 0, ansPart1 = 0;
    ansPart1 = 1 << numberOfDigits;
    reverse(s.begin(), s.end());
    for (int i = 0; i < numberOfDigits; i++)
    {
        if (s[i] == '7')
            ansPart2 += 1 << i;
    }
    return ansPart1 + ansPart2 - 1;
}

int main()
{
    FastIO();
    string s;
    cin >> s;
    cout << solve(s) << "\n";
}
