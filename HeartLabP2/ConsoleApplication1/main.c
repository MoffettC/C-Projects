#include <stdio.h>

int main(void) {

	int heartbeat, years, total;
	int minutes = 60;
	int hours = 24;
	int days = 365;

	printf("Input the number of years> ");
	scanf("%d", &years);

	printf("Input heartbeats per minute> ");
	scanf("%d", &heartbeat);

	total = heartbeat * minutes * hours * days * years;

	printf("%d heartbeats per %d years", total, years);


	getchar(); getchar();

	return 0;

}