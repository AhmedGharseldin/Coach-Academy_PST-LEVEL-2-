//https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=481

#include <bits/stdc++.h>
#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);

using namespace std;

int main()
{
    FastIO();
    int teams, noElements, c = 0;
    while (cin >> teams && teams)
    {
        c++;
        int **Freq = new int *[1000000];
        for (int i = 0; i < teams; i++)
        {
            Freq[i] = new int[1000000];
        }
        queue<int> *Q = new queue<int>[teams];
        int input;
        for (int i = 0; i < teams; i++)
        {
            cin >> noElements;
            for (int j = 0; j < noElements; j++)
            {
                cin >> input;
                Freq[i][input]++;
            }
        }
        string s;
        queue<int> Order;
        int T = -1;
        cout << "Scenario #" << c << endl;
        while (cin >> s && s != "STOP")
        {
            if (s[0] == 'E')
            {
                cin >> input;
                for (int i = 0; i < teams; i++)
                    if (Freq[i][input] == 1)
                        T = i;
                if (Q[T].empty())
                {
                    Q[T].push(input);
                    Order.push(T);
                }
                else
                    Q[T].push(input);
            }
            else
            {
                T = Order.front();
                cout << Q[T].front() << endl;
                Q[T].pop();
                if (Q[T].empty())
                    Order.pop();
            }
        }
        cout << endl;
    }
    return 0;
}