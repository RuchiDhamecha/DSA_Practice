// Write a program to input an integer 
// and print the sum of all its even digits and sum of all its odd digits separately.
// Digits mean numbers, not the places! That is, if the given integer is "132456",  even digits are 2, 4 and 6 and odd digits are 1, 3 and 5.
// Input: 'n' = 132456

// Output: 12 9

// Explanation:
// The sum of even digits = 2 + 4 + 6 = 12
// The sum of odd digits = 1 + 3 + 5 = 9

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int temp = n;
	int odd = 0, even = 0;

	while(n!=0){
		int digit = n % 10;
		if(digit%2 == 0){
			even+=digit;
		}else{
			odd+=digit;
		}

		n = n/10;
	}

	cout<<even<<" "<<odd<<endl;
}
