//https://codeforces.com/problemset/problem/702/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long cnt = 0;
    multiset<int> val;
    map<int, int> mp;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < 31; k++)
        {
            int curr = (1 << k);
            if (mp.find(curr - arr[i]) != mp.end())
                cnt += mp[curr - arr[i]];
        }
        mp[arr[i]]++;
    }
    cout << cnt << endl;
    return 0;
}