//https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2180

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string project;
    while (getline(cin, project) && project != "0")
    {
        map<string, unordered_set<string>> A;
        while (true)
        {
            if (project == "1")
                break;
            A[project].insert("");
            while (true)
            {
                string student;
                cin >> student;
                if (isupper(student[0]) || student == "1")
                {
                    project = student;
                    break;
                }
                A[project].insert(student);
            }
        }
    }
    return 0;
}

// Amr, [21.04.21 23:37]
// Just remember this

// Amr, [21.04.21 23:37]
// If you have an unordered_set

// Amr, [21.04.21 23:37]
// And you insert 100 values in that set.

// Amr, [21.04.21 23:37]
// It will end up being the 100 values without duplicates

// Amr, [21.04.21 23:38]
// You can have a map<string,unordered_set<string>>

// Amr, [21.04.21 23:38]
// Key being the course name. And the set is people who subscribed.

// Amr, [21.04.21 23:40]
// This ensures no multiple subscriptions to the same course. But. How do you
//  remove someone subscribed in two different courses. That might need another
//   couple of steps.

// Amr, [21.04.21 23:41]
// After that iterate over the courses with an iterator.
// And put the data <course name, size> in a vector or array and sort it with
// size and if size is equal then course name for alphabetic order
