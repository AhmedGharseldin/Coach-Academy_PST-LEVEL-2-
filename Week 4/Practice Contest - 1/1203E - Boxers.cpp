//https://codeforces.com/problemset/problem/1203/E

#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 150002;
int Freq[N];
int main()
{
    int n, numberOfBoxers = 0, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        Freq[x]++;
    }
    for (int i = 1; i < N-1; i++){
        if(Freq[i] == 0 && Freq[i + 1] > 0)
        {
            Freq[i]++;
            Freq[i + 1]--;
        }
    }
    for (int i = N-1; i > 1; i--){
        if(Freq[i] == 0 && Freq[i - 1] > 0)
        {
            Freq[i]++;
            Freq[i - 1]--;
        }
    }
    for (int i = 1; i < N; i++)
        if(Freq[i])
            numberOfBoxers++;
    
    cout << numberOfBoxers << "\n";
    return 0;
}
