//https://www.hackerrank.com/challenges/equal-stacks/problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum1 = 0, sum2 = 0, sum3 = 0, h1size, h2size, h3size, minCylinder;
    // vector<int> h1, h2, h3;
    h1size = h1.size()-1;
    h2size = h2.size()-1;
    h3size = h3.size()-1;
    stack<int> cylinder1, cylinder2, cylinder3;

    for (int i = h1size; i >= 0; i--)
    {
        sum1 += h1[i];
        cylinder1.push(h1[i]);
    }

    for (int i = h2size; i >= 0; i--)
    {
        sum2 += h2[i];
        cylinder2.push(h2[i]);
    }

    for (int i = h3size; i >= 0; i--)
    {
        sum3 += h3[i];
        cylinder3.push(h3[i]);
    }
    while (sum1 != sum2 || sum2 != sum3 || sum1 != sum3) //
    {
        minCylinder = min({sum1, sum2, sum3});
        while (!cylinder1.empty() && sum1 > minCylinder)
        {
            sum1 -= cylinder1.top();
            cylinder1.pop();
        }
        while (!cylinder2.empty() && sum2 > minCylinder)
        {
            sum2 -= cylinder2.top();
            cylinder2.pop();
        }
        while (!cylinder3.empty() && sum3 > minCylinder)
        {
            sum3 -= cylinder3.top();
            cylinder3.pop();
        }
    }
    return sum1;
}
