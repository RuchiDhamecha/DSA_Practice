#include <bits/stdc++.h>
using namespace std;


//                          Pattern20
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
void pattern20(int rows)
{
    int spaces = 2 * rows - 2;
    for (int i = 1; i <= 2 * rows - 1; i++)
    {
        int stars = i;
        if (i > rows)
            stars = 2 * rows - i;
        // stars
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < rows)
            spaces -= 2;
        else
            spaces += 2;
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

        pattern20(rows);
        t--;
    }
}