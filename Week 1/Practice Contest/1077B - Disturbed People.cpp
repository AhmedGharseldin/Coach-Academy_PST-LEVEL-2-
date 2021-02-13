//https://codeforces.com/problemset/problem/1077/B

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int solveleft(int arr[], int n);
int solveright(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arrleft[n], arrright[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arrleft[i];
        arrright[i] = arrleft[i];
    }
    cout << min(solveleft(arrleft, n), solveright(arrright, n)) << endl;
    return 0;
}

int solveleft(int arr[], int n)
{
    int counts = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i + 1] == 1 && arr[i] == 0 && arr[i - 1] == 1)
        {
            arr[i - 1] = 0;
            counts++;
        }
    }
    return counts;
}

int solveright(int arr[], int n)
{
    int counter = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i + 1] == 1 && arr[i] == 0 && arr[i - 1] == 1)
        {
            arr[i + 1] = 0;
            counter++;
        }
    }
    return counter;
}