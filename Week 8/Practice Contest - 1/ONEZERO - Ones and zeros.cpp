//https://www.spoj.com/problems/ONEZERO

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
const int N = 2e4 + 5;
int n;

string bfs(int child)
{
    if (child == 1)
        return "1";
    vector<string> edges(N);
    edges[1] = "1";
    queue<int> q;
    q.push(1);
    while (!q.empty())
    {
        int next = q.front();
        q.pop();
        if (next == 0)
            return edges[next];
        for (int i = 0; i < 2; i++)
        {
            int newNext = (10 * next + i) % n;
            if (edges[newNext].empty())
            {
                q.push(newNext);
                edges[newNext] = edges[next] + char('0' + i);
            }
        }
    }
    return "0";
}

int main()
{
    int t;
    cin >> t;
    for (int testCase = 1; testCase <= t; testCase++)
    {
        cin >> n;
        cout << bfs(n) << endl;
    }
    return 0;
}
