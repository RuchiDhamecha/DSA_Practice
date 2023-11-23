//to check if array us sorted or not in non descending order

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,3,4,5,6};
    for(int i=0;i<4;i++){
        if(arr[i]>=arr[i-1]){
            cout<<"true";
        }
        else cout<<"false";
    }
    
    return 0;
}