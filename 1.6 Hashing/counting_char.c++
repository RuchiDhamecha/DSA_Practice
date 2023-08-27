//counting no. of times a lower letter character occurred in a  string

// ascii val
// 0 = 48
// 9 = 57
// A = 65
// Z = 90
// a = 97
// z = 122

//int x = 'a';  
// this is not an error , x will have ascii value of a i.e 97

//counting no. of times a character occurred in a given string ============

// let say, 
// string contains only lower case letter 
// having ascii value between 97 - 122
// so lets make hash of only those 26 char , instead of all 256 char
// so to start from ascii 97 till 122,
// a = 'a' - 'a'   // 0 == 1st position of hash
// b = 'b' - 'a'   // 66 -65 ==1 ==2nd position of hash
// ..
// z = 'z' -'a'  // 122 - 65 == 25 == 25th position in hash

// if we dont do this , it will take whole 256 space and occcupy only 26 out of them as we just have lower case letters so , lot of memory will be wasted
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cout<< "Enter the string: ";
cin >> s; // taking input of string

int hash[26] = {0};
//made hash of 26 and initialized all as 0,initially count is 0 of the char occured in string

for(int i=0;i<s.size();i++){
    hash[s[i] - 'a']++;  //[s[i] - 'a'] this place increase by 1
    // now all now all positions has increase by 1 or more as per occurance in string else 0 only
}

char q; //no. of test cases
cout<<"Enter no. of test cases";
cin>> q;
while(q>0){
 //take q test cases to check its occurrance in string
 char c;
 cout<<"\nEnter char who occurrance need to be found: ";
 cin>>c;

 //extracting the value present at [c - 'a'] in hash..the value will be occurance of the char 
 cout<<hash[c - 'a']; //c is already char so no need to show using ''
 q--;
 }
}