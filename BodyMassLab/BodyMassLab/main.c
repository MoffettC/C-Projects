#include <stdio.h>

int main(void) {
	double height, weight, bmi;

	int i, bmievalcode;



	for (i = 1; i <= 4; i++)

	{
		/* --> add code to input weight and height between here */
		printf("Please input weight and height> ");
		scanf("%lf%lf", &weight, &height);

		/* <-- and here */

		/* --> add code to calculate bmi and bmievalcode between here */
		bmievalcode = -1;
		weight += .00001;
		height += .00001;
		bmi = (weight * 703) / (height * height);

		if (bmi < 18.5) {
			bmievalcode = 1;
		}
		else if ((bmi < 25.0) && (bmi >= 18.5)) {
			bmievalcode = 2;
		}
		else if ((bmi >= 25.0) && (bmi < 30.0)) {
			bmievalcode = 3;
		}
		else if (30.0 <= bmi) {
			bmievalcode = 4;
		}
		else
			printf("program error!");

		/* <-- and here */

		/*  bmievalcode:

		*  1 = underweight

		*  2 = normal

		*  3 = overweight

		*  4 = obese

		*/


		/* --> add code to print bmi and bmievalcode between here */

		
		bmievalcode == 1 ? printf("BMI = %4.1lf, evaluation is underweight\n", bmi) : ((bmievalcode == 2) ? printf("BMI = %4.1lf, evaluation is normal\n", bmi) : (bmievalcode == 3) ? printf("BMI = %4.1lf, evaluation is overweight\n", bmi) : printf("BMI = %4.1lf, evaluation is obese\n", bmi));


		/* <-- and here */

	}



	while (1) getchar();

	return 0;

}