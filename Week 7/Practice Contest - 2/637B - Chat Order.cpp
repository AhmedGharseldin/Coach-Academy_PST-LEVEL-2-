//https://codeforces.com/problemset/problem/637/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> list;
    map<string, int> Freq;
    int n;
    string input;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        list.push_back(input);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (!Freq[list[i]])
            cout << list[i] << endl;
        Freq[list[i]] = 1;
    }
    return 0;
}