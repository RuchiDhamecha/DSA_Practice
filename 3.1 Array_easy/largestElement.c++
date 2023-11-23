// ARRAY 

//data structure of same data type = all int/ all string, etc

// array size 1e6 = inside main 
//            1e7 = globally

// arr[0] stores at any location and next will be contigeous to that location

// code to find largest element in an array==================
//approach  1 = bruteforce

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {1,3,12,8,2};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     sort(arr,arr+n);   //TC= O(nlogn)

//     // for(int i=0;i<n;i++){
//     //     cout<<arr[i];
//     // } //sorted

//     cout<<arr[4];  //arr[n-1] == largest element

//     return 0;
// }

//time complexity is O(nlogn)

//approach  2
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,3,12,8,2};
    int max= arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max;  //arr[n-1] == largest element

    return 0;
}

//TC= O(n)   //only 1 for loop

