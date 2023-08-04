// The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
// F(n) = F(n - 1) + F(n - 2), 
//    Where, F(1) = 1, F(2) = 1
// you have to find out the n-th Fibonacci Number. Handle edges cases like when 'n' = 1 or 'n' = 2 by using conditionals like if else and return what's expected.
// Input: 6
// Output: 8
// Explanation: The number is ‘6’ so we have to find the “6th” Fibonacci number.
// So by using the given formula of the Fibonacci series, we get the series:    
// [ 1, 1, 2, 3, 5, 8, 13, 21]
// So the “6th” element is “8” hence we get the output.

#include<bits/stdc++.h>
using namespace std;

int main(){

        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */

        int n,i;
        cin>>n;
        int arr[n];
 
        arr[0]=1,
        arr[1]=1;
 
        for(i=2 ; i<n ; i++){
                arr[i]=arr[i-1]+arr[i-2];
        }
        cout<<arr[n-1];
}
