//nearest square root

#include <stdio.h>
int main ()
{
	int N;
	int count = 0;
	scanf("%d", &N);
	while (count <= N)
	{
		
		if ((count*count)==N)
		{
			printf("The square root of given number : %d ", count);
			break;
		}
		else
		{
			if((count*count)>N)
		{
		
			printf("The nearest square root : %d", count-1);
			break;
		}
	}
		count = count+1;
	}
	return 0;
}
	
