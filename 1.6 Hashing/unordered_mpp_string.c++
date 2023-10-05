#include<bits/stdc++.h>
using namespace std;

//in this code we will store no. of occurance / frequenccy of elememts/ characters in a string

//by storing the no. of occurance of each element/character in the map using key value pair 
//where key is element and value is no. of times elemt/char has occured on string
//using mpp[arr[i]]++

//this map is unordered_map so all the elements will stored on unordered way i.e randomly..

// TIME COMPLEXITY =====================================================
// Storing & fetching == 
// O(1) == best/average case
// O(n) == worst case 

// so it is better in complexity than ordered map as it has O(n) complexity
// so always use unordered_map 
// in worst case if time limit exeeds then only use ordered map

//in map we store key value pair
//keyy == i.first
//value == i.second
int main(){
   int n;
   cout<<"enter no. of chars string:";
   cin>>n;
   string s;
   cin>>s;

   //declared map named as mpp
   unordered_map<char,int>mpp;    //char=char in str, int = occurance
   for(int i=0;i<n;i++){
    mpp[s[i]]++;
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
