#include <stdio.h>

int main(void) {

	int z0 = -1000;
	int z1 = -1000;
	int z2 = -1000;
	int z3 = -1000;


	int x0 = 9;
	int x1 = 5;
	int x2 = 5;
	int y0 = 3;
	int y1 = 6;
	int y2 = 7;

	printf("Please input the first 3 digits of the number>\n ");
	printf("Please input the first digit (Hundreds) of the first number> ");
	scanf("%d", &x2);
	printf("\nPlease input the second digit (Tens) of the first number> ");
	scanf("%d", &x1);
	printf("\nPlease input the third digit of the (Singles) first number> ");
	scanf("%d", &x0);

	printf("\nPlease input the second 3 digits of the number>\n ");
	printf("Please input the first digit (Hundreds) of the second number> ");
	scanf("%d", &y2);
	printf("\nPlease input the second digit (Tens) of the second number> ");
	scanf("%d", &y1);
	printf("\nPlease input the third digit of (Singles) the second number> ");
	scanf("%d", &y0);


	z0 = x0 + y0;

	//printf("%d Initial Z", z0);
	if (z0 >= 10) {
		x1 = x1 + 1;
		z0 = z0 - 10;
	}

	z1 = x1 + y1;

	//printf("%d", x1);
	if (z1 >= 10) {
		x2 = x2 + 1;
		z1 = z1 - 10;
	}


	z2 = x2 + y2;

	//printf("%d", z2);
	if (z2 >= 10) 
	{
		z3 = 1;
		z2 = z2 - 10;
	}

	else
	{
		z2 = z2;
		z3 = 0;
	}

	printf("\n The answer is %d %d %d %d", z3, z2, z1, z0);




	getchar(); getchar();
	return 0;
}
