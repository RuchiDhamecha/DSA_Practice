// Sample Input 1:    5
// Sample Output 1 :  1 2 3 4 5
// Explanation Of Sample Input 1: 
// Input: ‘n’ = 5
// Output: 1 2 3 4 5

// Explanation: An array containing integers from ‘1’ to ‘n’ is [1, 2, 3, 4, 5].



// recursive function of return type void
// because we need this function just for manipulating the array 
// i.e., just for adding elements into it
void addIntoArray(int i,int x, vector<int>&vec){
    // base condition 
    // from i = 1 to untill it becomes greater than x 
    // once i becomes greater than x return;
    if(i>x)
        return;
        
    vec.push_back(i);
    // recursive call
    addIntoArray(i+1,x,vec);
}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> vec;

    addIntoArray(1,x, vec);

    return vec;
}
