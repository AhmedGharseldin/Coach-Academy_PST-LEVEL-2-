//https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=4844

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
#define ll long long
const int N = 1e4 + 5;
int p, c, t = 0, ans = 1e9, mx = 1e9;
vector<int> P, C, T;

void binarySearch();

int main()
{
    int a, x;
    cin >> a;
    while (a--)
    {
        cin >> p >> c;
        for (int i = 0; i < p; i++)
        {
            cin >> x;
            P.push_back(x);
            T.push_back(x);
        }
        for (int i = 0; i < c; i++)
        {
            cin >> x;
            P.push_back(x);
            T.push_back(x);
        }
        sort(P.begin(), P.end());
        sort(C.begin(), C.end());
        sort(T.begin(), T.end());
        binarySearch();
        cout << ans << " " << mx << endl;
        C.clear();
        P.clear();
        T.clear();
        t = 0;
    }
    return 0;
}

void binarySearch()
{
    for (int i = 0; i < p + c; i++)
    {
        for (int j = 0; j < p; j++)
        {
            if (T[i] < P[j])
                t++;
            else
                break;
        }
        for (int k = c - 1; k > 0; k--)
        {
            if (T[i] > C[k])
                t++;
            else
                break;
        }
        if (t < mx)
        {
            mx = t;
            ans = T[i];
        }
    }
}