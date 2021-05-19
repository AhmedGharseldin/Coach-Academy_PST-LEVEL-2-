//https://codeforces.com/problemset/problem/1008/B

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int n, w, h;
    cin >> n;
    bool yes;
    vector<pair<int, int>> rectangles;
    for (int i = 0; i < n; i++)
    {
        cin >> w >> h;
        rectangles.push_back({w, h});
    }
    int current = max(rectangles[0].first, rectangles[0].second), mx, mn;
    for (int i = 0; i < n; i++)
    {
        mx = max(rectangles[i].first, rectangles[i].second);
        mn = min(rectangles[i].first, rectangles[i].second);
        if (current >= mx)
        {
            yes = true;
            current = mx;
        }
        else if (current >= mn)
        {
            yes = true;
            current = mn;
        }
        else
        {
            yes = false;
            break;
        }
    }
    cout << (yes ? "YES" : "NO") << endl;

    return 0;
}
