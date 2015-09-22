#include <stdio.h>

int main(void)

{
	int x1, x2, x3, x4;
	int xlarge, xsmall, ixlarge, ixsmall;
	int i;

	for (i = 1; i <= 4; i++)

	{

		printf("enter x1, x2, x3, x4:\n");

		scanf("%d%d%d%d", &x1, &x2, &x3, &x4);

		/*     add code to calculate xlarge, xsmall,

		*     ixlarge, ixsmall

		* --> between here */
		xsmall = ((x1 <= x2) && (x1 <= x3) && (x1 <= x4)) ? x1 : (((x2 < x1) && (x2 <= x3) && (x2 <= x4)) ? x2 : (((x3 < x1) && (x3 < x2) && (x3 <= x4)) ? x3 : x4));
		ixsmall = (xsmall == x1) ? 1 : ((xsmall == x2) ? 2 : ((xsmall == x3) ? 3 : 4));

		xlarge = (((x4 >= x1) && (x4 >= x2) && (x4 >= x3)) ? x4 : (((x3 > x4) && (x3 >= x2) && (x3 >= x1)) ? x3 : (((x2 >= x1) && (x2 > x3) && (x2 > x4)) ? x2 : x1)));
		ixlarge = (xlarge == x4) ? 4 : ((xlarge == x3) ? 3 : ((xlarge == x2) ? 2 : 1));

		/* <-- and here */

		printf("largest = %4d at position %d, ", xlarge, ixlarge);
		printf("smallest = %4d at position %d\n", xsmall, ixsmall);
	}


	while (1) getchar();

	return 0;

}