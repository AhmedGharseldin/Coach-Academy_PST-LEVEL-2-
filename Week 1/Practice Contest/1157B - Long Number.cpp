//https://codeforces.com/problemset/problem/1157/B

#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    int n;
    cin >> n >> s;
    int arr[n], mapping[10], counter = 0;
    //taking the number into array
    for (int i = 0; i < n; i++)
        arr[i] = s[i] - '0';
    //taking the mapping
    for (int i = 1; i <= 9; i++)
        cin >> mapping[i];

    for (int i = 0; i < n; i++)
        if (arr[i] < mapping[arr[i]])
        {
            counter = i;
            break;
        }
    for (int i = counter; i < n; i++)
        if (arr[i] <= mapping[arr[i]])
            arr[i] = mapping[arr[i]];
        else
            break;
    for (int i = 0; i < n; i++)
        cout << arr[i];
    cout << endl;
    return 0;
}
