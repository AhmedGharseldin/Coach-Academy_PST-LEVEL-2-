//https://codeforces.com/problemset/problem/1006/B

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 2e5 + 9;
int arr[N];

//pair <int, int> x;

void solve(int temp[], int n, int k)
{
    temp[2004] = 0;
    sort(temp, temp + n, greater<int>());
    for (int i = 0; i < k; i++)
        temp[2004] += temp[i];
}

int main()
{
    int n, k, counter = 0;
    cin >> n >> k;
    int temp[2005], arr[n];
    int iD[2005];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        temp[i] = arr[i];
    }
    solve(temp, n, k);
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
            if (temp[i] == arr[j])
            {
                iD[i] = j;
                arr[j] = -1;
                break;
            }
    }
    cout << temp[2004] << endl;
    sort(iD, iD + k);

    if (k == 1)
    {
        cout << n << endl;
        return 0;
    }
    for (int i = 0; i < n - 1; i++)
    {
        counter++;
        if (arr[i] == -1)
        {
            cout << counter << " ";
            counter = 0;
        }
        if (i == iD[k - 2])
            break;
    }
    cout << n - iD[k - 2] - 1 << endl;
    return 0;
}