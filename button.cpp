#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int test;
    cin >> test;
    for (int itr = 0; itr < test; itr++)
    {
        int a, k, b;
        cin >> a >> k >> b;
        if ((a == k && b % 2 == 0) || a < k)
            cout << "Second" << endl;
        else if ((a == k && b % 2 != 0) || a > k)
            cout << "First" << endl;
    }

    return 0;
}