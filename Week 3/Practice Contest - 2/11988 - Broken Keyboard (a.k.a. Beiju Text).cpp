//https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=3139

#include <bits/stdc++.h>
#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);

using namespace std;
int main()
{
    FastIO();
    string word;
    string s;
    while (cin >> s)
    {
        stack<string> home;
        queue<char> normal;
        queue<char> last;
        int length = s.size();
        for (int i = 0; i < length; i++)
        {
            if (s[i] == ']')
            {
                i++;
                if (s[i] != '[' || s[i] != ']')
                    while (i < length)
                    {
                        if (s[i] == '[' || s[i] == ']')
                            break;
                        last.push(s[i]);
                        i++;
                    }
                else
                {
                    i--;
                    continue;
                }
                i--;
            }
            else if (s[i] == '[')
            {
                i++;
                if (s[i] != '[' || s[i] != ']')
                    while (i < length)
                    {
                        if (s[i] == '[' || s[i] == ']')
                            break;
                        word += s[i];
                        i++;
                    }
                else
                {
                    i--;
                    continue;
                }
                home.push(word);
                word.clear();
                i--;
            }
            else
            {
                normal.push(s[i]);
            }
        }
        while (home.size())
        {
            cout << home.top();
            home.pop();
        }
        while (normal.size())
        {
            cout << normal.front();
            normal.pop();
        }
        while (last.size())
        {
            cout << last.front();
            last.pop();
        }
        cout << endl;
    }
    return 0;
}
