//https://codeforces.com/problemset/problem/343/B

#include <bits/stdc++.h>
#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);

using namespace std;
int main()
{
    FastIO();
    string s;
    stack<char> current1;
    stack<char> current2;
    cin >> s;
    int length = s.size(), counterPlus = 0, counterMinus = 0;
    bool flag = true;
    if (length & 1)
    {
        cout << "No" << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            if (s[i] == '+')
                counterPlus++;
            else if (s[i] == '-')
                counterMinus++;
        }
        cout << ((counterMinus == counterPlus) || (counterPlus % 2 == 0) || (counterMinus % 2 == 0) ? "YES" : "NO") << "\n";
        return 0;
    }
}
//                -++-+--+
