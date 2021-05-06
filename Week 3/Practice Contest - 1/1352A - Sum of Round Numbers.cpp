//https://codeforces.com/problemset/problem/1352/A

#include <bits/stdc++.h>
#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
typedef long long ll;

using namespace std;
void solve(int number, int power)
{
    int counter = 1;
    vector<int> roundNumbers;

    while (1)
    {
        if (number % power == number)
        {
            int n = roundNumbers.size();
            cout << counter << endl;
            for (int i = 0; i < n; i++)
                cout << roundNumbers[i] << " ";
            cout << number << endl;
            roundNumbers.clear();
            return;
        }
        if (number % power != 0)
        {
            roundNumbers.push_back(number % power);
            counter++;
        }
        number /= power;
        number *= power;
        power *= 10;
    }
}

int main()
{
    FastIO();
    int t, n, x = 10;
    cin >> t;
    while (t--)
    {
        cin >> n;
        solve(n, x);
    }
    return 0;
}
