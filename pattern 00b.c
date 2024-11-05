//pattern 2//

#include <stdio.h>
int main ()
{
	int rows, columns;
	printf("\nEnter the number of rows you want:");
	scanf("%d", &rows);
	
	int i, j;
	
	for  (i=1; i<=rows; i++)
	{
		for (j=1; j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
