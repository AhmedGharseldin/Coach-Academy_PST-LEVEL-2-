//https://www.spoj.com/problems/INVCNT/en/

#include <bits/stdc++.h>
long long ans = 0;

using namespace std;
int const N = 1e5;
void divide(vector<int> &A, vector<int> &X, vector<int> &Y)
{
    int sze = A.size();
    for (int i = 0; i < sze / 2; i++)
        X.push_back(A[i]);
    for (int i = sze / 2; i < sze; i++)
        Y.push_back(A[i]);
}
vector<int> combine(vector<int> &X, vector<int> &Y)
{
    vector<int> combined;
    int Left = 0, Right = 0, x = X.size(), y = Y.size();
    while (Left < x || Right < y)
    {
        if (Left != x && (Right == y || X[Left] < Y[Right]))
        {
            combined.push_back(X[Left]);
            Left++;
        }
        else
        {
            combined.push_back(Y[Right]);
            ans += x - Left;
            Right++;
        }
    }
    return combined;
}

vector<int> mergeSort(vector<int> &A)
{
    if (A.size() <= 1)
        return A;
    vector<int> X, Y, sorted;
    divide(A, X, Y);
    X = mergeSort(X);
    Y = mergeSort(Y);
    sorted = combine(X, Y);
    return sorted;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, input;
        cin >> n;
        vector<int> A, SortedA;
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            A.push_back(input);
        }
        SortedA = mergeSort(A);
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}
