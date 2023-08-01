#include <bits/stdc++.h>
using namespace std;

//                          Pattern17
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

// 1st inner loop ---> to print spaces from 0 to rows-i-1
// then 2nd inner loop ---> to print char's from 0 to ( 2 * i + 1)
// when the inner loop of spaces reaches to (2*i)/2 then decrease the character by 1
// 3rd inner loop ---> to print spaces from 0 to rows-i-1 again after the character's
void pattern17(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        // spaces
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << " ";
        }

        // characters
        char ch = 'A';
        int breakPoint = (2 * i) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;

            if (j <= breakPoint)
                ch++;
            else
                ch--;
        }

        // space
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

        pattern17(rows);
        t--;
    }
}