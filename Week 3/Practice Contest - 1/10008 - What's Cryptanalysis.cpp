//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=949

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

bool compre(pair<int, int> a, pair<int, int> b)
{
    if (a.first > b.first)
        return true;
    if (a.first == b.first)
    {
        if (a.second < b.second)
            return true;
    }
    return false;
}

int main()
{
    int lines, letters[27] = {};
    vector<pair<int, int>> decrypt;
    string sentence;
    cin >> lines;
    getchar();
    while (lines--)
    {
        getline(cin, sentence);
        transform(sentence.begin(), sentence.end(), sentence.begin(), ::toupper);
        for (int i = 0; i < (int)sentence.size(); i++)
            if (isalpha(sentence[i]))
                letters[sentence[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        pair<int, int> letter;
        if (letters[i] == 0)
            continue;
        else
        {
            letter.first = letters[i];
            letter.second = i;
            decrypt.push_back(letter);
        }
    }
    int len = (int)decrypt.size();
    sort(decrypt.begin(), decrypt.end(), compre);
    for (int i = 0; i < len; i++)
    {
        cout << char(decrypt[i].second + 'A') << " " << decrypt[i].first;
        cout << endl;
    }

    return 0;
}
