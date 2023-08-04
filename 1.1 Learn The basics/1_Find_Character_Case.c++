// Write a program that takes a character as input and prints 
// 1, 0, or -1 according to the following rules.
// 1, if the character is an uppercase alphabet (A - Z).
// 0, if the character is a lowercase alphabet (a - z).
// -1, if the character is not an alphabet.
// Example :
// Input: Character is 'a'.

// Output: 0

// Explanation: The input character is lowercase, so our answer is 0.
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char c;
	cin>>c;

	// for uppercase alphabets A-Z ASCII code is from 65 to 91
	if( c>= 65 && c<= 91){
		cout<<1<<endl;
	}
	// for lowercase alphabets a-z ASCII code is from 97 to 123
	else if(c>= 97 && c<= 122){
		cout<<0<<endl;
	}
	// if the input character is not alphabet
	else cout<<-1<<endl;
}
