//https://www.spoj.com/problems/STPAR/

#include <bits/stdc++.h>
#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);

using namespace std;

int main()
{
    FastIO();
    int n;
    while (cin >> n && n)
    {
        int x = 1;
        bool found = false;
        queue<int> in;
        stack<int> side;
        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            in.push(input);
        }
        while (x < n)
        {
            if (in.size() && in.front() == x)
            {
                found = true;
                x++;
                in.pop();
            }
            else if (!side.empty() && side.top() == x)
            {
                found = true;
                x++;
                side.pop();
            }
            else if (in.size())
            {
                side.push(in.front());
                in.pop();
                found = false;
            }
            else
            {
                found = false;
                break;
            }
        }
        cout << (found ? "yes" : "no") << endl;
    }
    return 0;
}
