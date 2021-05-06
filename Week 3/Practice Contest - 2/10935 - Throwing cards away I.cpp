//https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1876

#include <bits/stdc++.h>
#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);

using namespace std;
int main()
{
    FastIO();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        stack<char> openBrackets;
        cin >> s;
        int length = s.size();
        bool flag = true;
        for (int i = 0; i < length; i++)
        {
            if (s[i] == '[' || s[i] == '(')
                openBrackets.push(s[i]);
            else if (!openBrackets.empty())
            {
                if ((!openBrackets.empty()) && (openBrackets.top() == '[' && s[i] == ']'))
                {
                    openBrackets.pop();
                    flag = true;
                }
                else if ((!openBrackets.empty()) && (openBrackets.top() == '(' && s[i] == ')'))
                {
                    openBrackets.pop();
                    flag = true;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        cout << (flag && openBrackets.empty() ? "YES" : "NO") << "\n";
    }
}
