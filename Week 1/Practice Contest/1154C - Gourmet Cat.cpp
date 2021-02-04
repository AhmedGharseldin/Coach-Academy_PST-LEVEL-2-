//https://codeforces.com/problemset/problem/1154/C

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
const int N = 2e5 + 9;
int arr[N];

int solve(int remainingA, int remainingB, int remainingC, char days[], int day);
int mxCounter(int remainingA, int remainingB, int remainingC, char days[]);

int main()
{
    int a, b, c, minWeeks, remainingA, remainingB, remainingC;
    char days[] = {'a', 'b', 'c', 'a', 'c', 'b', 'a'};
    cin >> a >> b >> c;
    minWeeks = min({a / 3, b / 2, c / 2});
    ll totalDays = 7 * minWeeks;
    remainingA = a - minWeeks * 3, remainingB = b - minWeeks * 2, remainingC = c - minWeeks * 2;

    cout << mxCounter(remainingA, remainingB, remainingC, days) + totalDays << endl;

    return 0;
}

int solve(int remainingA, int remainingB, int remainingC, char days[], int day)
{
    int counter = 0;
    //    remainingA !=0 && remainingB !=0  && remainingC !=0 && (day+1)%7 !=day
    while ((day + 1) % 7 != day)
    {
        if (days[day] == 'a' && remainingA)
            remainingA--;
        else if (days[day] == 'b' && remainingB)
            remainingB--;
        else if (days[day] == 'c' && remainingC)
            remainingC--;
        else
            break;
        counter++;
        day++;
        day %= 7;
    }
    return counter;
}
int mxCounter(int remainingA, int remainingB, int remainingC, char days[])
{
    int mx = 0, countremainder = 0;
    for (int i = 0; i < 7; i++)
    {
        countremainder = solve(remainingA, remainingB, remainingC, days, i);
        if (countremainder > mx)
            mx = countremainder;
    }
    return mx;
}
