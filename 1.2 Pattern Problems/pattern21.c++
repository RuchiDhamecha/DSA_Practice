#include <bits/stdc++.h>
using namespace std;


//                          Pattern21
// * * * * *
// *       *
// *       *
// *       *
// * * * * *
void pattern21(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if ((i == 0) || (j == 0) || (i == rows - 1) || (j == rows - 1))
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    // enter test cases
    cout << "Enter No.Of test cases : ";
    cin >> t;

    while (t > 0)
    {
        int rows;
        cout << "Enter rows  : ";
        cin >> rows ;

        pattern21(rows);
        t--;
    }
}