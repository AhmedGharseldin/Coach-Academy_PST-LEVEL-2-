//https://www.spoj.com/problems/RPLD/cstart=20

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, r, id, c;
    cin >> t;
    for (int a = 1; a <= t; a++)
    {
        bool possible = 1;
        vector<pair<int, int>> S;
        cin >> n >> r;
        for (int i = 0; i < r; i++)
        {
            cin >> id >> c;
            S.push_back({id, c});
        }
        sort(S.begin(), S.end());

        for (int i = 0; i < r; i++)
        {
            auto student1 = S[i];
            auto student2 = S[i + 1];
            if (student1.first == student2.first && student1.second == student2.second)
            {
                possible = 0;
                break;
            }
        }

        cout << "Scenario #" << a << ": " << (possible ? "possible\n" : "impossible\n");
    }

    return 0;
}