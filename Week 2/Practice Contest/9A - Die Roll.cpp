//https://codeforces.com/problemset/problem/9/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    double w, y, d, mx;
    cin >> w >> y;
    mx = w;
    if (y > w)
        mx = y;
    d = (7 - mx);
    if (d == 0)
        cout << "0/1" << endl;
    if (d == 1)
        cout << "1/6" << endl;
    if (d == 2)
        cout << "1/3" << endl;
    if (d == 3)
        cout << "1/2" << endl;
    if (d == 4)
        cout << "2/3" << endl;
    if (d == 5)
        cout << "5/6" << endl;
    if (d == 6)
        cout << "1/1" << endl;

    return 0;
}
