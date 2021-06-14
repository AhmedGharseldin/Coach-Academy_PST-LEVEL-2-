//https://codeforces.com/problemset/problem/51/C

#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 501;

int main()
{
    int n, m, q, x;
    while (cin >> n >> m)
    {
        vector<vector<int>> prop;
        for (int i = 0; i < n; i++)
        {
            vector<int> row;
            for (int j = 0; j < m; j++)
            {
                cin >> x;
                row.push_back(x);
            }
            prop.push_back(row);
        }
        cin >> q;
        while (q--)
        {
            int l, u, L;
            cin >> l >> u;
            int ans = 0;
            for (int i = 0; i < n; i++)
            {
                // getting lower bound for each row.
                L = lower_bound(prop[i].begin(), prop[i].end() + m, l) - prop[i].begin();
                // checking for upperbound.
                // cout << L;
                for (int j = ans; j < n; j++)
                {
                    if (i + j >= n || L + j >= m || prop[i + j][L + j] > u)
                        break;
                    ans = max(ans, j + 1);
                }
            }
            cout << ans << endl;
        }
        cout << '-' << endl;
    }
    // while (r - l > eps)
    // {
    //     // minimization
    //     double mid = l + (r - l) / 2;
    //     if (valid(mid))
    //         r = mid;
    //     else
    //         l = mid;
    // }
    // cout << fixed << setprecision(6) << r << endl;
    // for (int i = 0; i < n; i++)
    //     cout << houses[i] + r << " ";

    return 0;
}

// #include <stdio.h>
// #include <string.h>
// #include <algorithm>
// #include <vector>
// using namespace std;
// int main(void)
// {
//     int N, M, Q, L, U, maxx;
//     int tmp;
//     int range[505][2];

//     while (EOF != scanf("%d %d", &N, &M) && (N || M))
//     {

//         vector<vector<int>> v(505);
//         vector<int>::iterator lower, upper;
//         for (int i = 0; i < N; i++)
//         {
//             for (int j = 0; j < M; j++)
//             {
//                 scanf("%d", &tmp);
//                 v[i].push_back(tmp);
//             }
//         }

//         scanf("%d", &Q);

//         for (int i = 0; i < Q; i++)
//         {
//             scanf("%d %d", &L, &U);
//             memset(range, 0, sizeof(range));
//             maxx = 0;

//             // Write down the values ​​in the range of each row
//             for (int j = 0; j < N; j++)
//             {
//                 lower = lower_bound(v[j].begin(), v[j].end(), L);
//                 upper = upper_bound(v[j].begin(), v[j].end(), U);
//                 range[j][0] = lower - v[j].begin();
//                 range[j][1] = upper - v[j].begin();
//             }

//             // Every row is checked once
//             for (int j = 0; j < N; j++)
//             {
//                 int cnt = 0;
//                 // Take the first number in the range of the row as the upper left corner // It is square for the row The biggest possibility is U-L
//                 for (; cnt <= range[j][1] - range[j][0]; cnt++)
//                 { // Check whether the diagonal (going down to the right) is within the range
//                     if (j + cnt >= N || range[j + cnt][1] <= range[j][0] + cnt)
//                         break;
//                 }
//                 if (cnt > maxx)
//                     maxx = cnt;
//             }
//             printf("%d\ n", maxx);
//         }

//         printf("-");
//         puts("");
//     }

//     return 0;
// }

// #include<algorithm>
// #include<cstdio>

// using namespace std;

// int N, M, Q, L, U;

// int main() {
//     for(;;) {
//         scanf("%d %d", &N, &M);
//         if(N == 0 && M == 0) break;
//         int plot[N][M];
//         for(int i = 0; i < N; i++)
//             for(int j = 0; j < M; j++)
//                 scanf("%d", &plot[i][j]);
//         scanf("%d", &Q);
//         for(int i = 0; i < Q; i++) {
//             scanf("%d %d", &L, &U);
//             int curr_max = 0;
//             for(int j = 0; j < N; j++) {
//                 int* lb = lower_bound(plot[j], plot[j] + M, L);
//                 int min_ind = lb - plot[j];
//                 for(int k = curr_max; k < N; k++) {
//                     if(j + k >= N || min_ind + k >= M || plot[j + k][min_ind + k] > U) break;
//                     if(k + 1 > curr_max) curr_max = k + 1;
//                 }
//             }
//             printf("%d\n", curr_max);
//         } printf("-\n");
//     }
//     return 0;
// }