#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a = 0, d = 0;
    cin >> t;
    string str;
    cin >> str;
    for (int i = 0; i < t; i++)
    {
        if (str[i] == 'A')
        {
            a++;
        }
        else if (str[i] == 'D')
        {
            d++;
        }
    }
    if (a > d)
    {
        cout << "Anton" << endl;
    }
    else if (d > a)
    {
        cout << "Danik" << endl;
    }
    else if (d == a)
    {
        cout << "Friendship" << endl;
    }
    return 0;
}