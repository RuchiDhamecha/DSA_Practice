#include <iostream>
using namespace std;

int main(){
    // int age;
    // cin>>age;

    // cout<<"Your age is : ";
    // return 0;

    // to find how many times a no. occurred we normally use..
    int arr[5] = {1,2,3,1,1};
    int no = 1;
    int cnt=0;
    cout<<"hello";
    for(int i =0; i<4 ;i++){
        if(arr[i]==no)cnt++;
    }
   cout<<cnt;
   return 0;


}
