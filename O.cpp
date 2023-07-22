#include <bits/stdc++.h>
using namespace std;

string To_Knary(int n, int k)
{
    string Answer;
    while (n > 0)
    {
        int x = n % k;
        if (x >= 10)
        {
            Answer = char(x + 55) + Answer;
        }
        else
        {
            Answer = char(x + 48) + Answer;
        }
        n /= k;
    }
    return Answer;
}

int main()
{
    int n, k;
    cin >> n >> k;
    string Answer = "";
    if (n < k)
    {
        if (k > 10)
        {
            Answer = char(n + 55);
        }
        else
        {
            Answer = char(n + 48);
        }
        cout << Answer;
    }
    else
    {
        cout << To_Knary(n, k);
    }
    return 0;
}

