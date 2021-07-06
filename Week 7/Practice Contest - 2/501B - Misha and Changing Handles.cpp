//https://codeforces.com/contest/501/problem/B

#include <bits/stdc++.h>

using namespace std;

int n;
map<string, string> users;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string oldU, newU;
        cin >> oldU >> newU;
        if (users[oldU] != "")
            users[newU] = users[oldU];
        else
            users[newU] = oldU;
        users.erase(oldU);
    }
    cout << users.size() << endl;
    for (auto it : users)
        cout << it.second << " " << it.first << endl;
}