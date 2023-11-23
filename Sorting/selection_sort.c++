// selection sort

// Time Complexity == O(n^2) == best avg worst ===================


//  in this sort 
//  iterate array til n-2 instead of n-1
//  n-2 is the last element of the array, which will be automatically sorted till we reach there from started sorting from 1st

//  we select the smallest element from the array and swap it with 1st index
//  now 
//  take 2nd element and check if its smaller than rest of the array, ehan found swap it with 2nd elemt now 1st 2 elements are sorted

//  again take 3rd elemt and check if its smaller than rest of the elements i.e from 3rd to 5th

//  when found replace 3rd element with smaller one. now first  3 elements are sorted 
//  again check if 4th element is bigger than 5th if yes swap.

//  so 5th elemet will be automatically at its correct place

//  only 4 iterations needed
//  i=0 till i<n-2

//  arr[5] = {12,45,22,56,9};   //min at i=4 so swap i=0 to i=4
//  step 1 : 9 ,45,22,56,12   //now find min between i=1 to i=n-1
//  step 2 : 9 ,12,22,56,45   //now find min between i=2 to i=n-1
//  step 3 : 9 ,12,22,56,45   //i=2 22 is smallest in i=2 to i=4
//  step 4 : 9 ,12,22,45,56   //i=3 is smallest in i=3 to i=4
//i=4 is at its correct position as its largest

//this is how selection sort works

#include<iostream>
using namespace std;

void section_sort(int n,int arr[]){
    for(int i=0;i<=n-2;i++){
        int min=i;

        for(int j=i;j<=n-1;j++){
        //to sort , we will start with 2nd half so j=i
            if (arr[j]<arr[min]) {
                min=j;   //j is min
            } 
        }

        int temp= arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}


int main(){

    int n;
    cout<<"no. of elements in array:";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //calling function that sorts array
    section_sort(n,arr);

    //printing sorted array
    cout<<"Sorted array is: ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}