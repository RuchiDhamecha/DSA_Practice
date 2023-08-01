#include <bits/stdc++.h>
using namespace std;


//                          Pattern4
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// print row number
// for every row colums are going from 1 to row itself
void pattern4(int rows)
{
    // from 1 to noOfRows
    for (int i = 1; i <= rows; i++)
    {
        // from 1 to the number of current row
        for (int j = 1; j <= i; j++)
        {
            cout << i; // print row number
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

        pattern4(rows);
        t--;
    }
}