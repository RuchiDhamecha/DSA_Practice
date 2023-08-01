#include <bits/stdc++.h>
using namespace std;

//                          Pattern18
// E
// D E
// C D E
// B C D E
// A B C D E

// so here the character's are going from E - i upto E
// i == current row number
// 0th row ==> E - 0 = E to E  ---> { E         }
// 1st row ==> E - 1 = D to E  ---> { D E       }
// 2nd row ==> E - 2 = C to E  ---> { C D E     }
// 3rd row ==> E - 3 = B to E  ---> { B C D E   }
// 4th row ==> E - 4 = A to E  ---> { A B C D E }
void pattern18(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
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

        pattern18(rows);
        t--;
    }
}