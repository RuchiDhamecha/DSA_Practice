#include <bits/stdc++.h>
using namespace std;



//                          Pattern16
// A
// B B
// C C C
// D D D D
void pattern16(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
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

        pattern16(rows);
        t--;
    }
}
