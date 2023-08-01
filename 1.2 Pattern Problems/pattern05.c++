#include <bits/stdc++.h>
using namespace std;


//                          Pattern5
// * * * * *  ---> for 5th row 5 *   { * * * * * }
// * * * *    ---> for 4th row 4 *   { * * * *  }
// * * *      ---> for 3rd row 3 *   { * * *   }
// * *        ---> for 2nd row 2 *   { * *    }
// *          ---> for 1st row 1 *   { *     }
// starts from noOfRows and decrease row number by 1 for next
// outerloop iteration
// prints * equivalent to the number of current row
void pattern5(int rows)
{
    // from noOfRows to 1
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // there is one more approach
    for (int i = 1; i <= rows; i++)
    {
        // this inner loop will execute from 1 to rows - i + 1 times
        // suppose total rows == 4
        // for 1st row ---> 4 - 1 + 1 = 4 --> * * * *
        // for 2nd row ---> 4 - 2 + 1 = 3 --> * * *
        // for 3rd row ---> 4 - 3 + 1 = 2 --> * *
        // for 4th row ---> 4 - 4 + 1 = 1 --> *
        for (int j = 1; j <= rows - i + 1; j++)
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

        pattern5(rows);
        t--;
    }
}