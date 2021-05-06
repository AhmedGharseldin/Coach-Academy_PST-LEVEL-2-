//https://codeforces.com/problemset/problem/611/B

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const ll mxxx = 1e18;
const int N = 1e6 + 9;
int arr[N];

ll numberOfBits(ll year);

int main()
{
    FastIO();
    ll startYear, endYear, numberOfBitsStartYear, numberOfBitsEndYear, answer = 0;
    cin >> startYear >> endYear;
    numberOfBitsStartYear = numberOfBits(startYear);
    numberOfBitsEndYear = numberOfBits(endYear);

    for (int i = numberOfBitsStartYear; i <= numberOfBitsEndYear; i++)
    {
        ll allOnes = (1LL << i) - 1;
        for (int j = 0; j < i - 1; j++)
        {
            ll permutation = allOnes - (1LL << j);
            if (permutation >= startYear && permutation <= endYear)
                answer++;
        }
    }
    cout << answer << endl;
}

ll numberOfBits(ll year)
{
    int bits = 0;
    while (year)
    {
        year /= 2;
        bits++;
    }
    return bits;
}

