//https://codeforces.com/problemset/problem/652/B

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

bool comp(int a, int b)
{
    if 
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort (arr, arr+n, comp);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}
