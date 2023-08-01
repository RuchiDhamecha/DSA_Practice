#include <bits/stdc++.h>
using namespace std;

//                          Pattern12
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
// three for loops
// numbers, spaces, numbers
void pattern12(int rows)
{
    int space = 2 * (rows - 1);
    for (int i = 1; i <= rows; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // space reduces by 2
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }

        // printing numbers in reverse fashion
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
        space -= 2;
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

        pattern12(rows);
        t--;
    }
}