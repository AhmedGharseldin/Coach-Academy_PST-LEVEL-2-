//https://codeforces.com/contest/1213/problem/D2

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int const N = 2e5 + 5;
int Freq[N];

bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    vector<vector<int>> numberCount(N);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        Freq[arr[i]]++;
    }
    sort(Freq, Freq + N, cmp);
    if (Freq[0] >= k)
    {
        cout << 0 << endl;
        return 0;
    }
    int mn = 1e9, current, counter;
    for (int i = 0; i < n; i++)
    {
        current = arr[i];
        counter = 0;
        numberCount[current].push_back(0);
        while (current)
        {
            current /= 2;
            numberCount[current].push_back(++counter);
        }
    }
    for (int i = 0; i < N; i++)
    {
        int numberOfDivision = 0;
        sort(numberCount[i].begin(), numberCount[i].end());
        if (numberCount[i].size() < k)
            continue;
        for (int j = 0; j < k; j++)
            numberOfDivision += numberCount[i][j];
        mn = min(numberOfDivision, mn);
    }
    cout << mn << endl;
    return 0;
}
