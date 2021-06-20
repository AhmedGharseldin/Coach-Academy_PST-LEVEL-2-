//https://vjudge.net/problem/UVA-725/origin

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int Freq[10];

bool check(int a, int b)
{
    for (int x = 0; x < 10; x++)
        Freq[x] = 0;

    if (b > 98765)
        return false;

    for (int i = 0; i < 5; i++)
    {
        Freq[a % 10]++;
        Freq[b % 10]++;
        a /= 10;
        b /= 10;
    }
    for (int j = 0; j < 10; j++)
    {
        if (Freq[j] != 1)
            return false;
    }
    return true;
}

int main()
{
    int n, newline = 0;
    while (cin >> n && n != 0)
    {
        if (newline)
            cout << "\n";
        newline++;
        bool noSolution = true;
        for (int i = 1234; i <= 99999; i++)
        {
            if (check(i, i * n))
            {
                cout << setw(5) << setfill('0') << i * n << " / " << setw(5) << setfill('0') << i << " = " << n << endl;
                noSolution = false;
            }
        }
        if (noSolution)
            cout << "There are no solutions for " << n << ".\n";
    }
    return 0;
}