// find 2nd largest element in an array

// [1,3,4,5,6,7,7]
// here 2nd largest 6

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {1,7,4,2,6,7};
//     int n = sizeof(arr) /sizeof(arr[0]);
//     sort(arr,arr+n);      // TC = O(nlogn)
//     int largest = arr[n-1];
//     for(int i=n-2;i>=0;i--){   //tc= O(n)
//         if(arr[i]!=largest){
//             cout<<arr[i];
//             break;
//         }
        
//     }
//     return 0;
// }
//tc = O(nlogn + n) == O(nlogn)

//approach 2 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {1,7,4,2,6,7};
//     int n = sizeof(arr) /sizeof(arr[0]);
    
//     int largest =-1; //let say, so it can return -1 if not found largest
//     for(int i=0;i<=n;i++){   //tc= O(n)
//         if(arr[i]>largest){
//             largest = arr[i];
//         }
        
//     }

//     int slargest = -1;
//     for (int i=0;i<n;i++){
//         if(arr[i]> slargest && arr[i]<largest){
//             slargest = arr[i];
//         }
//     }
//     cout<< slargest;
//     return 0;
// }
//  TC= O(2n) == O(n)

//approach 3 = optimal approach

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {1,7,4,2,6,7};
//     int n = sizeof(arr) /sizeof(arr[0]);
    
//     int largest =arr[0]; 
//     int slargest = -1;
//     for(int i=0;i<=n;i++){   //tc= O(n)
//         if(arr[i]>largest){
//             slargest = largest;
//             largest = arr[i];

//         }
//         else if(arr[i]<largest && arr[i]>slargest){
//             slargest = arr[i];
//         }
        
//     }
//     cout<<slargest;
// }
//tc = O(n)

//2nd smallest in array===============================================
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,7,4,2,6,7};
    int n = sizeof(arr) /sizeof(arr[0]);
    
    int smallest =arr[0]; 
    int ssmallest = INT_MAX;  //so that find small by comparung
    for(int i=0;i<=n;i++){   //tc= O(n)
        if(arr[i]<smallest){
            ssmallest = smallest;
            smallest = arr[i];

        }
        else if(arr[i]>smallest && arr[i]<ssmallest){
            ssmallest = arr[i];
        }
        
    }
    cout<<ssmallest;
}

