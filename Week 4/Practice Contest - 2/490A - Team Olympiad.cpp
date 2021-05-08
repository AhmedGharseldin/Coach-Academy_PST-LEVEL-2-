//https://codeforces.com/problemset/problem/490/A

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int n, ones = 0, two = 0, three = 0, input;
    cin >> n;
    int arr[4][n];
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input == 1)
        {
            arr[input][ones] = i;
            ones++;
        }
        if (input == 2)
        {
            arr[input][two] = i;
            two++;
        }
        if (input == 3)
        {
            arr[input][three] = i;
            three++;
        }
    }
    int mn = min({ones, two, three});
    if (mn == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        cout << mn << endl;
        for (int i = 0; i < mn; i++)
            cout << ++arr[1][i] << " " << ++arr[2][i] << " " << ++arr[3][i] << endl;
    }
    return 0;
}