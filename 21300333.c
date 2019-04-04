#include"21300333.h"

int reverse_digits(int n){
	int temp, num = 0;

	do{
		temp = n % 10;
		n = n / 10;
		num = (num * 10) + temp;
	}while(n);
	
	return num;
}

boolean isPrime(int n){
	int i, c;

	if(n < 2)
		return false;

	for(i = 2; i < n; i++){
		if(n%i == 0)
			return false;
	}
	return true;
}


	
