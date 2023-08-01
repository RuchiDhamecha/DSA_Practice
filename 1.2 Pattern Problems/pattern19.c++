#include <bits/stdc++.h>
using namespace std;

//                          Pattern19
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

// **********
// ****  ****                     stars == from { 0 to rows - i } for each row
// ***    ***         Upper       here spaces == from { 0 to +2 } for each frequent row
// **      **          Half
// *        *      ________________
// *        *         Lower      here spaces == from { (2 * rows - 2 ) to -2 } for each frequent row
// **      **         Half       stars == from { 0 to i } for each row
// ***    ***
// ****  ****
// **********

// there will be two outer loops
// 1st one is for upper half
//           3 inner loops
//           1st for stars       ---> { 0 to rows - i }
//           2nd for spaces      ---> from { 0 to +2 } for each frequent row
//           3rd again for stars ---> from { 0 to rows - i }

// 2nd one is for lower half
//           3 inner loops
//           1st for stars       ---> { 0 to  i }
//           2nd for spaces      ---> from { (2 * rows - 2 ) to -2 } for each frequent row
//           3rd again for stars ---> from { 0 to i }
void pattern19(int rows)
{
    int initialSpaces = 0;
    for (int i = 0; i < rows; i++)
    {
        // stars
        for (int j = 0; j < rows - i; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < initialSpaces; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < rows - i; j++)
        {
            cout << "*";
        }
        cout << endl;
        initialSpaces += 2;
    }
    initialSpaces = (2 * rows) - 2;
    for (int i = 0; i < rows; i++)
    {

        // stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < initialSpaces; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        initialSpaces -= 2;
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

        pattern19(rows);
        t--;
    }
}