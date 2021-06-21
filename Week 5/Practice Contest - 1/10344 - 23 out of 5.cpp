//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1285

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
#define ll long long
const int N = 2e5 + 5;
int num[5];
bool vis[5];
bool possible = 0;

void calculate(int n, int val, int first)
{
    if (possible)
        return;

    if (n == 5)
    {
        possible |= (val == 23);
        return;
    }
    for (int i = 0; i < 5; i++)
    {
        if (vis[i])
            continue;
        vis[i] = 1;

        if (first)
        {
            calculate(n + 1, val * num[i], 1);
            calculate(n + 1, val - num[i], 1);
            calculate(n + 1, val + num[i], 1);
        }
        else
        {
            calculate(n + 1, num[i], 1);
        }
        vis[i] = 0;
    }
}
int main()
{
    while (true)
    {
        possible = 0;
        int zero = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> num[i];
            zero += num[i];
        }
        if (!zero)
            return 0;
        calculate(0, 0, 0);
        if (possible)
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }
    return 0;
}