//https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1975

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
        queue<int> left;
        queue<int> right;
        int length, cars, input, trips = 0;
        string side;
        cin >> length >> cars;
        length *= 100;
        for (int i = 0; i < cars; i++)
        {
            cin >> input >> side;
            if (side[0] == 'l')
                left.push(input);
            else
                right.push(input);
        }
        bool turn = true;
        while (left.size() || right.size())
        {
            trips++;
            int sum = 0;
            if (turn)
            {
                while (!left.empty() && sum + left.front() <= length)
                {
                    sum += left.front();
                    left.pop();
                }
            }
            else
            {
                while (!right.empty() && sum + right.front() <= length)
                {
                    sum += right.front();
                    right.pop();
                }
            }
            turn ^= 1;
        }
        cout << trips << "\n";
    }
    return 0;
}