//remove duplicate in the sorted array
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {2,2,3,3,4}; //2,3,4,_,_
//     int n = 5;
//     set<int>st;
//     for(int i=0;i<n;i++){
//         st.insert(arr[i]);   //O(nlogn)
//     }
//     int index =0;
//     for(auto it : st){
//         arr[index] = it;
//         index++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
//     return 0;
// }

// 2 pointer approach
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,2,3,3,4}; //2,3,4,_,_
    int n = 5;
    int i =0;
        for(int j=1;j<n;j++){
            if(arr[i]!=arr[j]){
 arr[i+1] = arr[j];
            i++;
            }
           
        }
    
    for(int it=0;it<n;it++){
         cout<<arr[it];
     }
    return 0;
}