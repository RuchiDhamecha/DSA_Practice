//to count no. of times element occured in an array using hashing
#include<bits/stdc++.h>
using namespace std;
//int arr[1e7];  
//it array declared globally it can store value till 10^7
//but inside main till 1^6

//in bool 1^7 inside main and 1^8 for assigning globally
int hashh[1000000]; //globally its value is 0;if not assigned
//in main , if we dont assign values it will be garbage value

//in this as all val will be initially 0; so is 1st elemnt in array is 3 , it will mark 1 in hash at 3rd possition of hash..again 2 is 2nd element of arr,,hash will mark +1 at 3rd possition of hash

int main(){
int n;

cin >> n; //no of elemats in array
int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
//int hash[1000000] = {0}; //make hash of 12 elemenys and assigned valued 0 to each
    for (int i = 0; i < n; i++)
    {
    hashh[arr[i]]+=1;
    }

    //now to try this on various test cases
    //use while loop till no of test cases we have so in loop it will take input and process and this will continue till all the test cases 'q'

    int q;
    cout<<"no if test cases:";
    cin>>q;
    while(q--){
        int num;
        cout<<"no whose occurance in array to be found: ";
        cin>>num;
        cout<<"no of times occured"<<hashh[num]; //it will return the no of times num is present in the array.

    }
return 0;
}