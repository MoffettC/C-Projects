#include <stdio.h>

void calculateAverage()

{

	int grade, count, sum;

	double average;



	/*     add code to input grades, calculate average, and print it */

	/* --> between here */
	count = 0;
	sum = 0;
	printf("Add grades here (Enter -1 to end line): ");

	do {

		scanf("%d", &grade);

		count++;
		sum += grade;

	} while (grade != -1);

	if (count >= 2) { /*checks to see if at least a grade has been added.*/
		sum += 1;     /* adds one due to sentinel command*/
		count -= 1;   /* subtracts one due to sentinel command*/

		average = (double) sum / count;

		printf("The average is %4.2lf\n\n", average);
	}

	else {
		printf("Please enter a valid grade\n\n");
	}

	/* --> and here */

}



int main(void)

{

	int i;



	for (i = 1; i <= 4; i++)

	{

		calculateAverage();

	}



	/* comment out the following line when running

	* from the command prompt */

	while (1) getchar();

	return 0;

}