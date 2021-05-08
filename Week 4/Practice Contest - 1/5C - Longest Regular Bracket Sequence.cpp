//https://codeforces.com/problemset/problem/5/C

#include <bits/stdc++.h>

using namespace std;
int const N = 1e6+5;

int main()
{
    string a;
    int length = 0, subStrings = 1, mx = -1;
    cin >> a;
    stack<int> brackets;
    brackets.push(-1);
    int t = a.size(), Freq[N] = {};
    for (int i = 0; i < t; i++)
    {
        if (a[i] == '(')
            brackets.push(i);
        else
        {
            brackets.pop();
            if (brackets.size())
            {
                length = i - brackets.top();
                Freq[length]++;
            }
            else
                brackets.push(i);
        }
    }
    for (int i = N - 1; i >= 0; i--)
    {
        if (Freq[i])
        {
            length = i;
            subStrings = Freq[i];
            break;
        }
    }
    cout << length << " " << subStrings << endl;
    return 0;
}
