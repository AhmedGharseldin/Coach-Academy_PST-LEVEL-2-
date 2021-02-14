//https://codeforces.com/problemset/problem/1157/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, n, counter = 0;
    cin >> x;
    n = x;
    if (n < 10)
    {
        cout << 9 << endl;
        return 0;
    }
    while (n >= 10)
    {
        n++;
        counter++;
        while (n % 10 == 0)
            n /= 10;
        if (n < 10)
            counter += 9;
    }

    cout << counter << endl;
    return 0;
}
