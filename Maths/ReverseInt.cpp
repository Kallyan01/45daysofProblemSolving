#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int digit;
        long long int revnum = 0;
        int number = x;
        number % 10 == 0 ? number = number / 10 : number = number;
        while (number != 0)
        {
            digit = number % 10;
            revnum = revnum * 10 + digit;
            number = number / 10;
        }
        if (revnum < pow(-2, 31) || revnum > pow(2, 31))
            return 0;
        else
            return revnum;
    }
};

int main()
{
    Solution getRev;
    cout << getRev.reverse(-100);
    return 0;
}