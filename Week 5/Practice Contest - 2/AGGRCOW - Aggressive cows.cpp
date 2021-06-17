//https://www.spoj.com/problems/AGGRCOW/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
#define ll long long
const int N = 1e5 + 5;
int stalls[N];
int cows, n;

int binarySearch(int l, int r);
bool checkGap(int m);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> cows;
        for (int i = 0; i < n; i++)
            cin >> stalls[i];
        sort(stalls, stalls + n);
        int l = 1, r = stalls[n - 1];
        cout << binarySearch(l, r) << endl;
    }
}

bool checkGap(int m)
{
    int counter = cows - 1, currentCow = 0;
    for (int i = 1; i < n; i++)
    {
        if (stalls[i] - stalls[currentCow] >= m)
        {
            counter--;
            currentCow = i;
        }
    }
    return (counter <= 0 ? 1 : 0);
}

int binarySearch(int l, int r)
{
    int maxGap = 0;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (checkGap(m))
        {
            l = m + 1;
            maxGap = max(m, maxGap);
        }
        else
            r = m - 1;
    }
    return maxGap;
}