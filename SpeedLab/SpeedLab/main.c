#include <stdio.h>

int main(void) {

	double speed;
	double speed2;
	double miles;
	double hours;

	printf("Input the number of miles> ");
	scanf("%lf", &miles);

	printf("Input the number of hours> ");
	scanf("%lf", &hours);

	speed = (miles/hours);

	printf("%.2f miles per hour\n", speed);

	speed2 = (miles * 1600) / (hours * 3600);
	
	printf("%.2f meters per second\n", speed2);


	getchar(); getchar();

	return 0;

}