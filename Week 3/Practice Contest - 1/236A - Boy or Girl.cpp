//https://codeforces.com/problemset/problem/579/A

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int c = 0, sizeOfArray = 0, x = 0;
    char N[100];
    cin >> N;

    for (int i = 0; N[i] != 0; i++)
    {
        sizeOfArray++;
    }
    sort(N, N + sizeOfArray);
    for (int i = 0; i < sizeOfArray; i++)
    {
        x++;
        if (N[i] == N[i + 1])
            x--;
    }

    if (x % 2 == 1)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;
    return 0;
}