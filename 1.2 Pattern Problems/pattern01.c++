#include <bits/stdc++.h>
using namespace std;

//                          Pattern1
// * * * *
// * * * *
// * * * *
// * * * *
void pattern1(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
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

        pattern1(rows);

        t--;
    }
}
