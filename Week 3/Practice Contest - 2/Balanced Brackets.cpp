//https://www.hackerrank.com/challenges/balanced-brackets/problem

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
        stack<char> openBrackets;
        cin >> s;
        int length = strlen(s);
        bool flag = true;
        for (int i = 0; i < length; i++)
        {
            if (s[i] == '{' || s[i] == '(' || s[i] == '[')
                openBrackets.push(s[i]);
            else
            {
                if (flag && !openBrackets.empty())
                {
                    if(openBrackets.top() == '{' && s[i] == '}')
                    openBrackets.pop();
                    else if( openBrackets.top() == '[' && s[i] == ']')
                    openBrackets.pop();
                    else if (openBrackets.top() == '(' && s[i] == ')')
                    openBrackets.pop();
                    else
                        flag = false;
                }
                else flag = false;
            }

        }
        cout << (!openBrackets.empty() || !flag ? "NO" : "YES") << "\n";
    }
}