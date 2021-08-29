//https://vjudge.net/problem/SPOJ-PPATH/origin

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

const int N = 1e4 + 5;
bool isPrime[N];
vector<int> primeNumber;
vector<int> edges[N];
bool vis[N];
int moves;

void sieve()
{
    for (int i = 2; i < N; i++)
        isPrime[i] = true;

    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j < N; j += i)
                isPrime[j] = false;
        }
    }
    for (int i = 1009; i < 10000; i += 2)
        if (isPrime[i])
            primeNumber.push_back(i);
}

bool valid(int a, int b)
{
    int counter = 0;
    while (a)
    {
        if (a % 10 != b % 10)
            counter++;
        a /= 10;
        b /= 10;
    }
    return (counter == 1);
}

void buildGraph()
{
    int x = primeNumber.size();
    for (int i = 0; i < x; i++)
        for (int j = i + 1; j < x; j++)
        {
            int x = primeNumber[i];
            int y = primeNumber[j];
            if (valid(x, y))
            {
                edges[x].push_back(y);
                edges[y].push_back(x);
            }
        }
}

void bfs(int a, int b)
{
    queue<int> q;
    q.push(a);
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            int next = q.front();
            if (next == b)
                return;
            vis[next] = 1;
            q.pop();
            for (auto child : edges[next])
                if (!vis[child])
                    q.push(child);
        }
        moves++;
    }
}

int main()
{
    sieve();
    buildGraph();
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        for (int i = 1000; i < 10000; i++)
            vis[i] = 0;

        moves = 0;
        bfs(a, b);
        cout << moves << endl;
    }
}