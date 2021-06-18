//https://www.spoj.com/problems/SUBS/en/

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

string current(string x, int y)
{
    string check = "";
    int n = x.size();
    for (int i = 0; i < n; i++)
        for (int j = 0; j < y; j++)
        {
            check += x[i];
        }
    return check;
}

bool sub(string a, string b)
{
    int y = a.size();
    int x = 0;
    for (int i = 0; i < y; i++)
        if (a[i] == b[x])
            x++;
    return (x == b.size());
}

int main()
{
    int t;
    string a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int high = 0, low = 0, mid;
        high = b.size() / a.size();
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            string check = current(a, mid);
            if (sub(b, check))
                low = mid + 1;
            else
                high = mid - 1;
        }
        cout << high << endl;
    }
}