//fibonacci sequence//

#include <stdio.h>
int main ()
{
	int t1=0, t2=1, next_term, n;
	int i;
	printf("Enter the number of terms you want in the sequence:");
	scanf("%d", &n);
	
	if (n == 1)
	{
		printf("fibonacci sequence : %d", t1);
	}
	
	if (n == 2)
	{
		printf("fibonacci sequence : %d, %d", t1, t2);
	}
	
	else if (n > 2)
	{
		printf("Fibonacci sequence : %d, %d, ", t1, t2);
		for (i = 3; i <= n; i++)
		{
			next_term = t1 + t2;
			t1 = t2;
			t2 = next_term;
			printf ("%d, ", next_term);
		}
	}
	
	else 
	{
		printf("Give a valid input for number of terms!!!");
	}
	
	return 0;
}
