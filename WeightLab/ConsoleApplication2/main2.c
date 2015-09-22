#include <stdio.h>

int main(void) {

	double weight, mercury, venus, mars, jupiter, saturn, uranus, neptune;
	weight = 200.0;

	mercury = weight * .378;
	venus = weight * .907;
	mars = weight * .373;
	jupiter = weight * 2.36;
	saturn = weight * .916;
	uranus = weight * .889;
	neptune = weight * 1.12;

	printf("Mercury: %05.1f\n", mercury);
	printf("  Venus: %5.1f\n", venus);
	printf("   Mars: %05.1f\n", mars);
	printf("Jupiter: %5.1f\n", jupiter);
	printf(" Saturn: %5.1f\n", saturn);
	printf(" Uranus: %5.1f\n", uranus);
	printf("Neptune: %5.1f\n", neptune);


	getchar();
	return 0;

}