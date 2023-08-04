// Sample Input 1:		5
// Sample Output 1:	YES

// Explanation Of Sample Input 1 :
// 5 is only divisible by 1 and 5. 2, 3 and 4 do not divide 5.

bool isPrime(int n)
{
	// Write your code here.
	int cnt=0;
	for(int i = 1 ; i<=sqrt(n); i++){
		if(n%i==0){
			cnt++;
			if(n/i != i){
				cnt++;
			}
		}
	}
	if(cnt==2) return true; // cnt == 2 means that number has only 2 divisors 1 and that number itself
	else return false; // if that number has more divisors then it's not a prime number
}
