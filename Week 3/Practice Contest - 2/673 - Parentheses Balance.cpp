//https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=614

#include <bits/stdc++.h>
#include <fstream>
#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);

using namespace std;
int main()
{
    FastIO();
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        stack<char> openBrackets;
        getline(cin, s);
        int length = s.size();
        bool flag = false;
        for (int i = 0; i < length; i++)
        {
            if (s[i] == '[' || s[i] == '(')
                openBrackets.push(s[i]);
            else if (!openBrackets.empty())
            {
                if ((s[i] == ']' && openBrackets.top() == '[') || (s[i] == ')' && openBrackets.top() == '('))
                    openBrackets.pop();
            }
            else
            {
                flag = true;
                break;
            }
        }
        cout << (flag || openBrackets.size() ? "No\n" : "Yes\n");
    }
    return 0;
}