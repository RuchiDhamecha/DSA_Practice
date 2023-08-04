// Sample Input 1 :
// Number of test cases - 2
// 0
// 12
// Sample Output 1:
//  0
//  805306368

// Explanation For Sample Input 1 :
// For the first test case :
// Since the given number N = 0 is represented as 00000000000000000000000000000000 in its binary representation. 
// So after reversing the bits, it will become 00000000000000000000000000000000 which is equal to 0 only. So the output is 0.     

// For the second test case :
// Since the given number N = 12 is represented as 00000000000000000000000000001100 in its binary representation. 
// So after reversing the bits, it will become 0110000000000000000000000000000, which is equal to 805306368 only. 
// So the output is 805306368.

// Sample Input 2 :
// Number of test cases - 1 
// 6
// Sample Output 2 :
//  1610612736
// Explanation For Sample Input 1 :
// For the first test case :
// Since the given number N = 6 is represented as 00000000000000000000000000000110 in its binary representation. 
// So after reversing the bits, it will become 01100000000000000000000000000000, which is equal to 1610612736.



long reverseBits(long n) {
    // Write your code here.
    // declaring a vector to store 32 bit binary number and  
    // pre initialise all numbers as 0
    vector<int>arr(32,0);
    int i=0; // iterator i

    while(n){ // while n exist means n!=0
        int digit = n%2; 
        // divide by 2 for extracting the bit of the binary number
        // as we know for decimal to binary conversion we divide decimal by 3
        
        arr[i] = digit; // then storing that value either 1 or 0 into the arr
        // ar its corresponding position inside from 0 to 32 bits
        n = n/2; // decrementing number using devide by 2
        i++; // increment iterator
    }
    
    long int ans =0; // for storing answer

      // The loop starts from i = 31 and goes down to i = 0.
      for (int i = 31; i >= 0; i--) {
       // For each iteration, it multiplies the value of arr[i] 
       // (which is either 0 or 1) by pow(2, 31 - i).
       // The pow function calculates 2 raised to the power of 31 - i, 
       // which represents the decimal place value of the current binary digit.
       // The result of the multiplication is added to the ans variable.
        
        ans = ans + arr[i] * pow(2, 31 - i); 
        // 2^32-i for converting binary digit of each index to decimal
      }

       return ans;
}
