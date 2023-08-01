#include <bits/stdc++.h>
using namespace std;

//                          Pattern13
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
void pattern13(int rows)
{
    int cnt = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << cnt << " ";
            cnt++;
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

        pattern13(rows);
        t--;
    }
}