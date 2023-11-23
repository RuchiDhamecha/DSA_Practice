#include<bits/stdc++.h>
using namespace std;

//in this code we will store no. of occurance / frequenccy of elememts in an array

//for string as well its same we dont need to convert in ascii value

//by storing the no. of occurance of each element in the map using key value pair 
//where key is element and value is no. of times elemt has occured 
//using mpp[arr[i]]++

//this map is ordered map so all the elements will stored on ordered way..even though we add arr in unordered way it will stored in map in ordered way

// TIME COMPLEXITY =====================================================
// Storing & fetching == O(n) == best/worst/average case

//in map we store key value pair
//key == i.first
//value == i.second
int main(){
   int n;
   cout<<"enter no. of elements to be in array:";
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
    // mpp[arr[i]]++;    //can write it here as well
    //but it will not make any diff in execution time as for 2 for loop complexity is O(2n) == O(n)
   }


   //declared map named as mpp
   map<int,int>mpp;    //by default ordered_map
   // in some cases it can be map< pair<d,a> , int > but only in ordered_map
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
