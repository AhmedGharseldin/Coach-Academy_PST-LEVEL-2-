//https://codeforces.com/gym/101028/problem/I

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
#define ll long long
const int N = 1e5 + 5;
int arr[N];
int strips, holes;

int binarySearch(int l, int r);
bool checkStrip(int m);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> holes >> strips;
        for (int i = 0; i < holes; i++)
            cin >> arr[i];
        int l = 1, r = arr[holes - 1];
        cout << binarySearch(l, r) << endl;
    }
}
bool checkStrip(int m)
{
    int counter = strips, currentHole = 0;
    for (int i = 1; i < holes; i++)
    {
        if (arr[i] - arr[currentHole] + 1 >= m)
        {
            counter--;
            currentHole = i;
        }
    }
    return (counter <= 0 ? 1 : 0);
}

int binarySearch(int l, int r)
{
    int longestStrip = 0;
    while (l <= r)
    {
        int m = l + (r - l + 1) / 2;
        if (checkStrip(m))
        {
            l = m + 1;
            longestStrip = m;
        }
        else
            r = m - 1;
    }
    return longestStrip;
}