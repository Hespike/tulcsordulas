#include<stdio.h>
#include<limits.h>

int main(){
	int number = INT_MAX; // 4 bájt -> 32 bit -> 2^32 féle szám tárolására alkalmas -> [-2^31, 2^31-1]

	printf("number = %d\n", number);	
	number = number + 1;
	printf("number = %d\n", number);

	return 0;
}