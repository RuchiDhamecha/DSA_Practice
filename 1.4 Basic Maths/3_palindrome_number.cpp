// Sample Input 1  :    1032
// Sample Output 1 :   false
// Explanation Of Sample Input 1: 1032, on being reversed, gives 2301, which is a totally different number.

// Sample Input 2  :    2442
// Sample Output 2 :   true
// Explanation Of Sample Input 1: 2442, on being reversed, gives 2442, which is a same identical number.

bool palindrome(int n)
{
    // Write your code here
    int originalNum = n, palindromeNum=0;
    bool ans;

    while(n){
        // extraction on last digit
        int lastDigit = n % 10;
        // for reversing the number
        palindromeNum = ( palindromeNum  * 10 ) + lastDigit;
        // eg., 123
        // ld = 3 , 2 , 1
        // palNum = 0;
        // palNum = ( 0  * 10 ) + 3  --> 0   + 3 = 3
        // palNum = ( 3  * 10 ) + 2  --> 30  + 2 = 32
        // palNum = ( 32 * 10 ) + 1  --> 320 + 1 = 321

        // reducing the number
        n = n/10;
    }

    // comparing the reverse number and originalNum
    (originalNum==palindromeNum)? ans = true :ans = false;

    return ans;
}
