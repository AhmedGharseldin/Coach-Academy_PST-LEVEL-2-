//https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1998

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
#define ll long long
const int N = 1e4 + 5;
int money, diff;
vector<int> books;
vector<pair<int, int>> ans;

void binarySearch(int l, int r);
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first > b.first && a.second < b.second)
        return true;
    return false;
}

int main()
{
    int n, book;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> book;
            books.push_back(book);
        }
        cin >> money;
        sort(books.begin(), books.end());
        binarySearch(0, n - 1);
        if (ans.size() > 1)
            sort(ans.begin(), ans.end(), cmp);
        cout << "Peter should buy books whose prices are " << ans[0].first << " and " << ans[0].second << "." << endl
             << endl;
        books.clear();
        ans.clear();
    }
    return 0;
}

void binarySearch(int l, int r)
{
    pair<int, int> pair;
    while (l < r)
    {
        if (books[l] + books[r] == money)
        {
            pair.first = books[l];
            pair.second = books[r];
            ans.push_back(pair);
            l++;
            r--;
        }
        else if (books[l] + books[r] >= money)
            r--;
        else
            l++;
    }
}