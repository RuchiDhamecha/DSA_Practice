// An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 
// 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.

// Sample Input 1 :  1
// Sample Output 1 :  true
// Explanation Of Sample Input 1 :  1 is an Armstrong number as, 1^1 = 1.
  
bool checkArmstrong(int n){
	//Write your code here

	int arm = 0; 
	int originalNum = n;

	int count = (int)(log10(n) + 1); 
	// using this we can extract the count of digits in any number

	while(n){
		int digit = n % 10;
		arm = arm + pow(digit, count);

		n /= 10; // n = n / 10; 
	}

	if(originalNum==arm) return true;
	else return false;
}
