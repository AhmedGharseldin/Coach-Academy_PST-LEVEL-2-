#include <bits/stdc++.h>
#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);

using namespace std;

int main()
{
    FastIO();
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, freq[10] = {}, numberOfPrints = 0;
        queue<pair<int, int>> PandI;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            int p;
            cin >> p;
            freq[p]++;
            PandI.push({p, i});
        }
        while (PandI.size())
        {
            pair<int, int> current = PandI.front();
            PandI.pop();
            bool flag = true;
            for (int i = current.first + 1; i <= 9; i++)
            {
                flag &= !(freq[i] > 0);
            }
            if (flag)
            {
                numberOfPrints++;
                freq[current.first]--;
                if (current.second == m)
                {
                    cout << numberOfPrints << endl;
                    break;
                }
            }
            else
                PandI.push(current);
        }
        for (int i = 1; i <= 9; i++)
            freq[i] = 0;
    }
    return 0;
}
