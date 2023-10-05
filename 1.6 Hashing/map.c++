#include<bits/stdc++.h>
using namespace std;

//in this code we will store no. of occurance of elememts in an array
//by storing the no. of occurance of each element in the map using key value pair 
//where key is element and value is no. of times elemt has occured 
//using mpp[arr[i]]++

//in map we store key value pair
//keyy == i.first
//value == i.second
int main(){
   int n;
   cout<<"enter no. of elements to be in array:";
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   map<int,int>mpp;
   for(int i=0;i<n;i++){
    mpp[arr[i]]++;
   }

   //to show key value pair of given array
   for(auto it : mpp){
    cout<<it.first <<"==>" <<it.second<<endl;
   }
   //1==>2
   //2==>1

   //to print the occurance of only requires element

   //if there are q test cases
   int q;
   cout<<"no. of test cases";
   cin>>q;

   for(;q>0;q--){
        int p;
        cout<<"enter no. to knw occurance";
        cin>>p;
        cout<<mpp[p]<<endl;
   }
  
   return 0;
}
