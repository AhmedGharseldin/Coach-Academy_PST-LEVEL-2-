//https://codeforces.com/problemset/problem/489/A

#include <bits/stdc++.h>

using namespace std;
int const N = 1e6+5;
const int maxn = 2e5 + 10;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<pair<int, int> > ans;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n-1; i++)
    {
        int mn = arr[i], idx = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                if(arr[j] < mn){
                    mn = min(mn, arr[j]);
                    idx = j;
                }
            }
        }
        if (idx != i)
        {
            ans.push_back({i, idx});
            swap(arr[i], arr[idx]);
        }
    }
    int x = ans.size();
//    cout << elements << " " << x;
    if (!x){
        cout << 0 << endl;
        return 0;
    }
    else{
        cout << x << endl;
        for (int i = 0; i < x; i++)
            cout << ans[i].first << " " << ans[i].second << endl;
    }
    return 0;
}
