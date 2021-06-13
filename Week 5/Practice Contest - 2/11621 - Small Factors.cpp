//https://vjudge.net/problem/UVA-11621/origin

#include <bits/stdc++.h>

using namespace std;
#define ll long long
// const int N = 1e4 + 5;
vector<ll> allList;

void createList();

int main()
{
    int m;
    createList();
    sort(allList.begin(), allList.end());
    while (cin >> m && m != 0)
    {
        auto x = lower_bound(allList.begin(), allList.end(), m);
        cout << *x << endl;
    }
    return 0;
}

void createList()
{
    ll p;
    for (int i = 0; i < 32; i++)
    {
        for (int j = 0; j < 21; j++)
        {
            double two = pow(2, i);
            double three = pow(3, j);
            p = two * three;
            if (p > pow(2, 31))
                break;
            allList.push_back(p);
        }
    }
}