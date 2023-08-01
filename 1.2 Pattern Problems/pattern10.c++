#include <bits/stdc++.h>
using namespace std;

//                          Pattern10
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
void pattern10(int rows)
{
    for (int i = 1; i <= 2 * rows - 1; i++)
    {
        int stars = i;
        if (i > rows)
            stars = 2 * rows - i;

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
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

        pattern10(rows);
        t--;
    }
}