// Find the number of digits of ‘n’ that evenly divide ‘n’.
// A digit evenly divides ‘n’ if it leaves no remainder when dividing ‘n’.
  
// Input: ‘n’ = 336

// Output: 3

// Explanation:
// 336 is divisible by both ‘3’ and ‘6’. Since ‘3’ occurs twice it is counted two times.


int countDigits(int n){
	// Write your code here.	
	int cnt=0;
	int temp = n;

	while(temp>0){
		int digit = temp % 10;
		// there might be some cases when digit == 0
		// for that there should be a different case
		// otherwise n % digit == number % 0 will throw a error
		if(digit ==0){
			cnt+=0;
		}else if(n % digit ==0){
			cnt++;
		} 
		temp = temp / 10;
	}
	return cnt;
}
