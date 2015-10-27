#include <stdio.h>



void fib(int total)

{
	int i;
	double f1 = 0; /*included double to increase fibonacci number range*/
	double f2 = 1;
	double f3 = 0;

	for (i = 0; i < total; i++)

	{
		if (i == (total - 1)) {
			f3 = f1 + f2;
			printf("%.2lf. \n ", f3);
		}
		else {
			f3 = f1 + f2;
			printf("%.2lf, ", f3);
			f1 = f2;
			f2 = f3;
		}

	}


}



int main(void)

{

	fib(20);

	getchar();

	return 0;

}