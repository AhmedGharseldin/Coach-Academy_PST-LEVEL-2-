//https://www.spoj.com/problems/FACEFRND/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ID, m;
    set<int> F;
    cin >> n;
    int friends = n;
    while (n--)
    {
        cin >> ID >> m;
        F.insert(ID);
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            F.insert(x);
        }
    }
    cout << F.size() - friends;
    return 0;
}
