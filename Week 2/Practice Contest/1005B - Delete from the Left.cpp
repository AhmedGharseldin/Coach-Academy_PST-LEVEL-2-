//https://codeforces.com/problemset/problem/1015/C

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 1e5 + 9;
int freq[N];

int solve(string s, string t);

int main()
{
    string s, t;
    cin >> s >> t;
    cout << solve(s, t);
    return 0;
}

int solve(string s, string t)
{
    int ss = s.size(), st = t.size(), answer = 0;
    answer = ss + st;
    int sendIndex = ss - 1, tendIndex = st - 1;
    while (true)
    {
        if (s[sendIndex] == t[tendIndex])
        {
            if (answer <= 2)
                return 0;
            answer -= 2;
            sendIndex--;
            tendIndex--;
        }
        else
            return answer;
    }
}