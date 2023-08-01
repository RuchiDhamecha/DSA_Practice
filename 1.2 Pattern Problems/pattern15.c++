#include <bits/stdc++.h>
using namespace std;


//                          Pattern15
// A B C D E
// A B C D
// A B C
// A B
// A
void pattern15(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (char ch = 'A'; ch < 'A' + rows - i; ch++)
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

        pattern15(rows);
        t--;
    }
}
