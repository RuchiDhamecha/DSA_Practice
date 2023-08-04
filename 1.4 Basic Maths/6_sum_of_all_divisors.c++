// Input: 4
// Output: 15
// Explanation
// F(1) = 1
// F(2) = 1 + 2 = 3
// F(3) = 1 + 3 = 4
// F(4) = 1 + 2 + 4 = 7
// ans = F(1) + F(2) + F(3) + F(4)
//     = 1 + 3 + 4 + 7
//     = 15
// Input: 5
// Output: 21


//  Naive approach is to traverse for every number(1 to n),
//  find all divisors and keep updating the sum with that divisor. 
// int sumOfAllDivisors(int n){
// 	int sum = 0;
 
//     for(int i = 1; i <= n; ++i)
//     {
         
//         // Find all divisors of i and add them
//         for(int j = 1; j * j <= i; ++j)
//         {	// suppose i = 10 and j = 2	
// 			// 10%2==0
//             if (i % j == 0)
//             {  	// 10/2 == 2 is false
// 				// so add the value of 10/2 == 5 into sum
// 				// because 5 is also a divisor of 10
//                 if (i / j == j)
//                     sum += j;
//                 else
//                     sum += j + i / j;
//             }
//         }
//     }
//     return sum;
// }


// Efficient approach is to observe the function and co-relate the pattern. 
// For a given number n, every number from 1 to n contributes its presence up to the highest multiple less than n. 
// For instance, 

// Let n = 6,
// => F(1) + F(2) + F(3) + F(4) + F(5) + F(6)
// => 1 will occurs 6 times in F(1), F(2), F(3), F(4), F(5) and F(6)
// => 2 will occurs 3 times in F(2), F(4) and F(6)
// => 3 will occur 2 times in F(3) and F(6)
// => 4 will occur 1 times in F(4)
// => 5 will occur 1 times in F(5)
// => 6 will occur 1 times in F(6)

int sumOfAllDivisors(int n){
	// Write your code here.
	int sum = 0;
    for (int i = 1; i <= n; ++i){
        sum += (n / i) * i;
    }
    return sum;
}
