//number of digits of a number//
#include <stdio.h>
#include <math.h>
int main ()
{
	int N, P=0;
	printf("Enter the number:");
	scanf("%d", &N);
	int temp = N;
	
	while (temp>0)
	{
		temp /= 10;
		P++;
	}
	
	printf("The number of digits in the given number is %d", P);
	
}
