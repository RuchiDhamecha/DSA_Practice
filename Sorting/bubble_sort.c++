#include<iostream>
using namespace std;

void bubble_sort(int n,int arr[]){
    for(int i=n-1;i>=0;i--){

        for(int j=0;j<=i-1;j++){
        
            if (arr[j]>arr[j+1]) {
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            } 
        }
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
    bubble_sort(n,arr);

    //printing sorted array
    cout<<"Sorted array is: ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}