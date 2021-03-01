#include <stdio.h>

union tagVariant
{
	int i;
	float d;
};

main()
{
	union tagVariant V;

	V.i = 0;
	V.d = 5.5;

	printf("V.i = %d \n", V.i); // V.i = 1085276160
	printf("V.d = %f \n", V.d); // V.d = 5.500000

}