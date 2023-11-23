//rotate array 1 step left
// 2 3 4 5 6  ==>
// 6 2 3 4 5

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,4,3,6,7}; 
    int n = 5;
    int temp = arr[0];
    for (int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i];    //O(n)
    }
    return 0;
}