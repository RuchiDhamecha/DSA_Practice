#include <bits/stdc++.h>
using namespace std;



//                          Pattern11
// 1
// 01
// 101
// 0101
// 10101
void pattern11(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        int start = 1;
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;

        // from 0th column to i'th column
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            // this will flip the 1's and 0's
            start = 1 - start;
            // start ( 0 ) = 1 - 0 == 1;
            // start ( 1 ) = 1 - 1 == 0;
            // start ( 0 ) = 1 - 0 == 1;
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

        pattern11(rows);
        t--;
    }
}