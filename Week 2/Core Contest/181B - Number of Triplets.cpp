//https://codeforces.com/problemset/problem/181/B

#include <iostream>
#include <vector>
#include <utility>

typedef long long ll;

using namespace std;
int counter = 0;
bool chck[2010][2010];

int main()
{
    int n, counter = 0, x, y, xmd, ymd;
    cin >> n;
    vector<pair<int, int> > points(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        x += 1000;
        y += 1000;
        points[i] = (make_pair(x, y));
        chck[x][y] = true;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((points[i].first + points[j].first) % 2 != 0 || (points[i].second + points[j].second) % 2 != 0)
                continue;
            xmd = ((points[i].first + points[j].first) / 2);
            ymd = ((points[i].second + points[j].second) / 2);
            if (chck[xmd][ymd])
                counter++;
        }
    }
    cout << counter << endl;
    return 0;
}