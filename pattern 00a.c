//pattern1//

#include <stdio.h>
int main ()
{
	int rows, columns;
	printf("\nEnter the number of rows you want:");
	scanf("%d", &rows);
	printf("\nEnter the number of columns you want:");
	scanf("%d", &columns);
	
	int i, j; 
	for (i =1; i <= rows; i++)
	{
		for (j = 1; j <= columns; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
	
}
