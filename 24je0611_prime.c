//prime or composite

#include <stdio.h>
int main ()
{
	int N, r;
	int count=1;
	scanf("%d", &N);
	while(count<=N)
	{
		count++;
		r = N%count;
		//printf("Iteration %d, r = %d \n",count,r);
		if (r==0)
	{
	printf ("The given number is composite \n");
	break;
	}
	
	else if (r!=0)
	{
	printf("The given number is prime\n");
	break;
	}
	}
}
