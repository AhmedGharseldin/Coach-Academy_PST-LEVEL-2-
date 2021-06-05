//https://codeforces.com/problemset/problem/416/A

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll N = 5e5 + 5;

int main()
{
    int n, input, l = -2e9, r = 2e9;
    char p;
    string sign;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> sign >> input >> p;
        if (p == 'Y')
        {
            if (sign == ">")
                l = max(l, input + 1);
            else if (sign == ">=")
                l = max(l, input);
            else if (sign == "<")
                r = min(r, input - 1);
            else
                r = min(r, input);
        }
        else
        {
            if (sign == ">")
                r = min(r, input);
            else if (sign == ">=")
                r = min(r, input - 1);
            else if (sign == "<")
                l = max(l, input);
            else
                l = max(l, input + 1);
        }
    }

    if (l > r)
        cout << "Impossible" << endl;
    else
        cout << l << endl;
}
