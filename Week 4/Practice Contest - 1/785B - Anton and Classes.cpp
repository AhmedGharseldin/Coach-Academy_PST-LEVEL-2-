//https://codeforces.com/problemset/problem/785/B

#include <bits/stdc++.h>
typedef long long ll;

#define ll long long
const int maxn = 2e5 + 10;
 
bool cmp ( pair <int, int> a, pair <int,int >b){
    return a.second < b.second;
}
int main()
{
    int n, l, r, m, ans1, ans2;
    cin >> n;
    vector <pair <int,int> > class1, class2;
    for (int i = 0; i<n; i++)
    {
        cin >> l >> r;
        class1.push_back({l, r});
    }
    cin >> m;
    for (int i = 0; i <m; i++)
    {
        cin >> l >> r;
        class2.push_back({l, r});
    }
    sort (class1.begin(), class1.end(), cmp);
    sort (class2.begin(), class2.end());
    ans1 = class2[m-1].first - class1[0].second;
 
    sort (class1.begin(), class1.end());
    sort (class2.begin(), class2.end(), cmp);
    ans2 = class1[n-1].first - class2[0].second;
    if ( ans1 <= 0 && ans2 <= 0)
    {cout << 0 << endl;
        return 0;}
    else
        cout << max(ans1,ans2) <<  endl;
    return 0;
}