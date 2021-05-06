//https://www.spoj.com/problems/ALCATRAZ2/

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

bool hasNoConflict(int comb, int pairs, pair<int, int> c[])
{
    bool flag = false;
    for (int i = 1; i <= 8; i++)
    {
        if (!(comb & 1))
        {
            for (int j = 1; j < pairs; j++)
            {
                if (c[j].first == i)
                    c[j].first = -c[j].first;
                if (c[j].second == i)
                    c[j].second = -c[j].second;
            }
        }
        comb >>= 1;
    }
    for (int i = 1; i < pairs; i++)
    {
        if (c[i].first > 0 && c[i].second > 0)
            flag = true;
    }
    for (int j = 1; j < pairs; j++)
    {
        if (c[j].first < 0)
            c[j].first = -c[j].first;
        if (c[j].second < 0)
            c[j].second = -c[j].second;
    }
    return flag;
}

int getMoney(int money[], int comb)
{
    int m = 0;
    for (int i = 1; i <= 8; i++)
    {
        if (comb & 1)
            m += money[i];
        comb >>= 1;
    }
    return m;
}

int main()
{
    int *money{new int[9]{0}}, numberOfPairs, p1, p2, mx = 0;
    for (int i = 1; i < 9; i++)
        cin >> money[i];
    cin >> numberOfPairs;
    pair<int, int> conflict[++numberOfPairs];
    for (int i = 1; i < numberOfPairs; i++)
    {
        cin >> p1 >> p2;
        conflict[i] = make_pair(p1, p2);
    }

    for (int comb = 1; comb < 256; comb++)
    {
        if (!hasNoConflict(comb, numberOfPairs, conflict))
        {
            int sum = getMoney(money, comb);
            if (sum > mx)
                mx = sum;
        }
    }
    cout << mx << endl;
}
