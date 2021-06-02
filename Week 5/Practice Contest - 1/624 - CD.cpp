//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=565

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
#define ll long long
const int maxn = 2e5 + 10;
vector<int> songs, maxSongs;
int maxCapacity, capacity;

void solve(int currentCapacity, int songNumber, vector<int> temp)
{

    if (songNumber == songs.size())
    {
        if (currentCapacity > maxCapacity)
        {
            maxCapacity = currentCapacity;
            maxSongs = temp;
        }
        return;
    }

    if (currentCapacity + songs[songNumber] <= capacity)
    {
        temp.push_back(songs[songNumber]);
        solve(currentCapacity + songs[songNumber], songNumber + 1, temp);
        temp.pop_back();
        // ignore song
    }
    solve(currentCapacity, songNumber + 1, temp);
}

int main()
{
    int numberOfSongs;
    while (cin >> capacity)
    {
        cin >> numberOfSongs;
        songs.clear();
        maxSongs.clear();
        maxCapacity = 0;
        for (int i = 1; i <= numberOfSongs; i++)
        {
            int input;
            cin >> input;
            songs.push_back(input);
        }
        vector<int> temp;
        solve(0, 0, temp);
        int n = maxSongs.size();
        for (int i = 0; i < n; i++)
            cout << maxSongs[i] << " ";
        cout << "sum:" << maxCapacity << endl;
    }
    return 0;
}