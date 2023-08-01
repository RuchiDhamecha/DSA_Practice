#include <bits/stdc++.h>
using namespace std;


//                          Pattern14
// A
// A B
// A B C
// A B C D
void pattern14(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
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

        pattern14(rows);
        t--;
    }
}