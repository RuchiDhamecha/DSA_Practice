#include <bits/stdc++.h>
using namespace std;

//                          Pattern22
// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5
void pattern22(int rows)
{
    for (int i = 0; i < 2 * rows - 1; i++)
    {
        for (int j = 0; j < 2 * rows - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * rows - 2) - j;
            int bottom = (2 * rows - 2) - i;

            cout << (rows - min(min(top, bottom), min(left, right))) <<" ";
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

        pattern22(rows);
        t--;
    }
}