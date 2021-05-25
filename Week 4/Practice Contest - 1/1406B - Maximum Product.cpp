//https://codeforces.com/problemset/problem/1360/C

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, negative = 0;
        cin >> n;
        long long numbers[n];
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
            if (numbers[i] < 0)
                negative++;
        }
        long long m1, m2, m3;
        sort(numbers, numbers + n);
        // if (negative >= 4)
            m1 = numbers[0] * numbers[1] * numbers[2] * numbers[3] * numbers[n - 1];
        // if (negative <= 2)
            m2 = numbers[0] * numbers[1] * numbers[n - 1] * numbers[n - 2] * numbers[n - 3];
        // if (negative < 1)
            m3 = numbers[n - 1] * numbers[n - 2] * numbers[n - 3] * numbers[n - 4] * numbers[n - 5];
        cout << max({m1, m2, m3}) << endl;
    }
    return 0;
}
