// Greatest Common Divisor or Highest Common Multiplier
// Sample Input 1:    9 6
// Sample Output 1:   3
// Explanation Of Sample Output 1:  gcd(6,9) is 3, as 3 is the largest positive integer that divides both 6 and 9.

// brute force for this can be as
// if a = 16 and b = 20
// we run a loop until min(a,b) because greatest common divisor can be upto the lowest number only
// and what we do inside loop is we check if the both numbers are divisible by iterator 
// and keep updating GCD or HCF
// and return the maximum or highest or greatest value of GCD

// int gcd ;
// for(int i = 0; i < min(a,b); i++){
//   if(a%i==0 && b%i==0){
//     gcd = i;  
//   }
// } return gcd;
// but this gives Time Complexity TC : O(min(a,b)) 

// so there is a optimize approach to this problem which is using euclideans distance
// gcd (a,b) = gcd(a-b,b)   , where a > b if b > a then swap a, b
// we need to do this computation untill any of a, b becomes 0

// Basic Euclidean Algorithm for GCD: 
// The algorithm is based on the below facts. 

// If we subtract a smaller number from a larger one (we reduce a larger number), 
// GCD doesn’t change. So if we keep subtracting repeatedly the larger of two, we end up with GCD.
// Now instead of subtraction, if we divide the smaller number, the algorithm stops when we 
// find the remainder 0.

int calcGCD(int n, int m){
    // Write your code here.
    int gcd ;
    // loop will iterate while n or m does not become 0
    while( n > 0 && m > 0 ){

        // as we always choose larger number % smaller num
        if(n > m ){     // if n > m
            n = n % m;
        } else { // if m > n
            m = m % n;
        }
    } // if any of m or n become 0 loop breaks

    // return the non zero number remaining out of n and m
    if(n==0) return m; 
    else return n;    
}
