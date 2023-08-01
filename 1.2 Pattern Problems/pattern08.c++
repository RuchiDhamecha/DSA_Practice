#include <bits/stdc++.h>
using namespace std;

//                          Pattern8
//  *********
//   *******
//    *****
//     ***
//      *

// there will be { i } spaces before printing the star's
// then there will be { 2 * rows ( 2 * i + 1 ) } star's after the spaces
// then there will be { i } spaces again star's
// so there will be three inner for loop's
void pattern8(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        // for spaces upto { i } before star's
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // then for star's upto { 2 * rows - ( 2 * i + 1 ) } after first spaces
        for (int j = 0; j < 2 * rows - (2 * i + 1); j++)
        {
            cout << "*";
        }
        // then again spaces upto { i } after star's
        for (int j = 0; j < i; j++)
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

        pattern8(rows);
        t--;
    }
}