#include <bits/stdc++.h>
using namespace std;

//                          Pattern2
// *          ---> for 1st row 1 *   { *     }
// * *        ---> for 2nd row 2 *   { * *    }
// * * *      ---> for 3rd row 3 *   { * * *   }
// * * * *    ---> for 4th row 4 *   { * * * *  }
// * * * * *  ---> for 5th row 5 *   { * * * * * }
// prints * equivalent to the number of current row
void pattern2(int rows)
{
    // from 1 to noOfRows
    for (int i = 1; i <= rows; i++)
    {
        // columns from 1 to the number of current row
        // 1 columns for 1st row
        // 2 columns for 2nd row
        // 3 columns for 3rd row
        // 4 columns for 4th row and so on.
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
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

        pattern2(rows);
        t--;
    }
}
