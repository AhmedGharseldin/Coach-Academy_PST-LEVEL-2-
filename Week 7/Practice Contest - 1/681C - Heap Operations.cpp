//https://codeforces.com/problemset/problem/681/C
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, v;
    string op;
    cin >> n;
    multiset<int> heap;
    vector<pair<string, int>> operations;
    while (n--)
    {
        cin >> op;
        if (op == "insert")
        {
            cin >> v;
            heap.insert(v);
            operations.push_back({op, v});
        }
        else if (op == "removeMin")
        {
            if (heap.empty())
            {
                operations.push_back({"insert", -1e9});
                operations.push_back({"removeMin", -2e9});
                continue;
            }
            heap.erase(heap.begin());
            operations.push_back({"removeMin", -2e9});
        }
        else
        {
            cin >> v;
            while (*heap.begin() < v && !heap.empty())
            {
                operations.push_back({"removeMin", -2e9});
                heap.erase(heap.begin());
            }
            if (heap.empty() || *heap.begin() != v)
            {
                heap.insert(v);
                operations.push_back({"insert", v});
            }

            operations.push_back({op, v});
        }
    }
    cout << operations.size() << endl;
    for (auto ans : operations)
    {
        cout << ans.first;
        if (ans.second != -2e9)
            cout << " " << ans.second;
        cout << "\n";
    }

    return 0;
}