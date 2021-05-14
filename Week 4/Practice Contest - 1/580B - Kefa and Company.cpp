//https://codeforces.com/problemset/problem/580/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d, money, factor;
    cin >> n >> d;
    vector<pair<int, int>> friends;
    for (int i = 0; i < n; i++)
    {
        cin >> money >> factor;
        friends.push_back({money, factor});
    }
    sort(friends.begin(), friends.end());
    int start = 0;
    long long curr = 0, mx = -1;
    for (int i = 0; i < n; i++)
    {
        while (start < n && friends[start].first - friends[i].first < d)
        {
            // cout << friends[start].first - friends[i].first << endl;
            curr += friends[start].second;
            start++;
        }
        mx = max(mx, curr);
        curr -= friends[i].second;
    }
    cout << mx << endl;
    // for (int i = 0; i < n; i++)
    // cout << friends[i].first << " " <<friends[i].second<<endl;
    return 0;
}
