//trying to design a basic arithmetic calculator//

#include <stdio.h>
int main ()
{
	int a=1, b=2, c=3, e=4, choice;
	float x, y;
	printf("%d. Add \n", a);
	printf("%d. Subtract \n", b);
	printf("%d. Multiply \n", c);
	printf("%d. Divide \n \n", e);
	
	printf("Select any one of the above operations: \n\n");
	
	scanf("%d", &choice);
	if (choice == 1)
	{
		float sum;
		printf("Adding two numbers \n");
		printf("Type the two numbers to be added. \n");
		scanf("%f %f", &x, &y);
		sum = x+y;
		printf("The sum of numbers is %f", sum);
		
	}
	
	if (choice == 2)
	{
		float difference;
		printf("Subtracting two numbers \n");
		printf("Type the ywo numbers to be subtracted. \n");
		scanf("%f %f", &x, &y);
		difference = x-y;
		printf("The difference of two  numbers is %f", difference);	
	}
	
	if (choice == 3)
	{
		float product;
		printf("Multiplying two numbers \n");
		printf("Type the numbers to be multiplied. \n");
		scanf("%f %f", &x, &y);
		product = x*y;
		printf("The product of two numbers is %f", product);
	}
	
	if (choice == 4)
	{
		float quotient;
		printf("Dividing two numbers \n");
		printf("Type the two numbers to be divided. \n");
		scanf("%f %f", &x, &y);
		quotient = x/y;
		printf("The quotient upon dividing the numbers is %f", quotient);
	}
	return 0;

}
