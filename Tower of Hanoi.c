//Tower of Hanoi
#include <stdio.h>

void hanoi (int n, char source, char destn, char intermdt)
{
	if (n == 1)
	{
		printf("Move the disc %d from %c to %c.\n", n, source, destn);
	}
	
	else
	{
		hanoi (n-1, source, intermdt, destn);
		printf("Move the disc %d from %c to %c.\n", n, source, destn);
		hanoi (n-1, intermdt, destn, source);
	}
	
}

int main ()
{
	int n;
	printf("Enter the number of rings: \n", n);
	scanf("%d", &n);
	
	char A='A', B='B', C='C';
	
	hanoi (n, A, B, C);
	
	return 0;
}
