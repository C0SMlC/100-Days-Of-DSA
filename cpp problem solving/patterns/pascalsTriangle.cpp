#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 5;

    for (int row = 1; row <= count; row++)
    {
        int c = 1;

        for (int col = 1; col <= row; col++)
        {
            cout << c;
            c = c * (row - col) / col;
        }

        cout << endl;
    }

    return 0;
}