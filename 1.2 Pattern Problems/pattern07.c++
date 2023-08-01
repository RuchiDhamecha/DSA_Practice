#include <bits/stdc++.h>
using namespace std;

//                          Pattern7
//      *
//     ***
//    *****
//   *******
//  *********

// there will be { rows - i - 1 } spaces before printing the star's
// then there will be { 2 * i + 1 } star's after the spaces
// then there will be { rows - i - 1 } spaces again star's
// so there will be three inner for loop's
void pattern7(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        // for spaces upto { rows - i - 1 } before star's
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << " ";
        }
        // then for star's upto { 2 * i + 1 } after first spaces
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // then again spaces upto { rows - i - 1 } after star's
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << " ";
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

        pattern7(rows);
        t--;
    }
}