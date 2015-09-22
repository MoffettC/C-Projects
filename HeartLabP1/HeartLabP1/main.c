#include <stdio.h>

int heartlab(void);

int main(void) {

	int total;
	int years;
	int minutes = 60;
	int hours = 24;
	int days = 365;
	int heartbeat = 60;


	printf("Input the number of years> ");
	scanf("%d", &years);

	total = heartbeat * minutes * hours * days * years;

	if (years >= 2) {
		printf("%d heartbeats per %d years\n", total, years);
	}
	else if (years <= 0) {
		printf("Please enter a valid amount of years\n");
	}
	else {
		printf("%d heartbeats for one year\n", total);
	}


	getchar(); getchar();

	return 0;
}