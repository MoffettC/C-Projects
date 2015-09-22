#include <stdio.h>

int main(void) {

	double cost;
	double money;
	double totalchange;

	int change;
	int remainder;
	int twenty = 2000;
	int ten = 1000;
	int five = 500;
	int one = 100;

	int quarter = 25;
	int dime = 10;
	int nickel = 5;
	int penny = 1;

	printf("Input the cost of the item> ");
	scanf("%lf", &cost);

	printf("Input the money given> ");
	scanf("%lf", &money);

	totalchange = (money + 0.005) - (cost + 0.005);
	printf("\nYour total change is %.2lf\n\n", totalchange);

	money = money * 100;
	cost = cost * 100;

	change = (money + 0.005) - (cost + 0.005);

	remainder = change / twenty;
	printf("You will get %d twenties back\n", remainder);

	remainder = (change % twenty) / ten;
	printf("You will get %d tens back\n", remainder);

	remainder = ((change % twenty) % ten) / five;
	printf("You will get %d fives back\n", remainder);

	remainder = (((change % twenty) % ten) % five) / one;
	printf("You will get %d ones back\n", remainder);

	remainder = ((((change % twenty) % ten) % five) % one) / quarter;
	printf("You will get %d quarters back\n", remainder);

	remainder = (((((change % twenty) % ten) % five) % one) % quarter) / dime;
	printf("You will get %d dimes back\n", remainder);

	remainder = ((((((change % twenty) % ten) % five) % one) % quarter) % dime) / nickel;
	printf("You will get %d nickels back\n", remainder);

	remainder = (((((((change % twenty) % ten) % five) % one) % quarter) % dime) % nickel) / penny;
	printf("You will get %d pennies back\n", remainder);


	getchar(); getchar();
	return 0;
}