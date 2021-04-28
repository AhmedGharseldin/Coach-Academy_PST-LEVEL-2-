//https://codeforces.com/problemset/problem/652/B

#define FastIO() ios_base::sync_with_stdio(false), cin.tie(NULL);
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int arr[N];

int main()
{
    FastIO();
    string s1, s2;
    cin >> s1 >> s2;
    int sLength, sum1 = 0, sum2 = 0, possibilities = 0, answer = 0;
    sLength = s1.size();
    for (int i = 0; i < sLength; i++)
        if (s1[i] == '+')
            sum1 += 1;
        else
            sum1 -= 1;
    for (int i = 0; i < sLength; i++)
        if (s2[i] == '+')
            sum2 += 1;
        else if (s2[i] == '-')
            sum2 -= 1;
        else
            possibilities += 1;
    if (sum1 == sum2 && possibilities == 0)
        cout << fixed << setprecision(12) << (double)1 << endl;
    else if (sum1 != sum2 && possibilities == 0)
        cout << fixed << setprecision(12) << (double)0 << endl;
    else
    {
        int n = pow(2, possibilities);
        for (int i = 0; i < n; i++)
        {
            int plus = 0;
            plus = __builtin_popcount(i);
            sum2 += plus;
            sum2 -= (possibilities - plus);
            if (sum1 == sum2)
            {
                answer++;
            }
            sum2 -= plus;
            sum2 += (possibilities - plus);
        }
        cout << fixed << setprecision(12) << (double)answer / n << endl;
    }
}