//https://codeforces.com/problemset/problem/26/B

#include <bits/stdc++.h>
#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);

using namespace std;

int main()
{
    FastIO();
    int counter = 0;
    string s;
    stack<char> openBrackets;
    cin >> s;
    int length = s.size();
    bool flag = true;
    for (int i = 0; i < length; i++)
    {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
            openBrackets.push(s[i]);
        else
        {
            if (flag && !openBrackets.empty())
            {
                if (openBrackets.top() == '{' && s[i] == '}')
                    openBrackets.pop(), counter++;
                else if (openBrackets.top() == '[' && s[i] == ']')
                    openBrackets.pop(), counter++;
                else if (openBrackets.top() == '(' && s[i] == ')')
                    openBrackets.pop(), counter++;
                else
                    flag = false;
            }

        }
    }
    cout << counter*2 << "\n";
    return 0;
}
