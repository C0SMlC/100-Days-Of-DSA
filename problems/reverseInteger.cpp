#include <bits/stdc++.h>
using namespace std;

int reverseInt(int x)
{
    if (x < 10)
        return x;

    int reversed = 0;

    while (x != 0)
    {
        int lastDigit = x % 10;
        x /= 10;

        if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && lastDigit > 7))
            return 0;
        if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && lastDigit < -8))
            return 0;

        reversed = reversed * 10 + lastDigit;
    }
    return reversed;
}

int main()
{
    int x = 4548;
    cout << reverseInt(x);
    return 0;
}