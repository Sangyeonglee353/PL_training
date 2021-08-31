#include <stdio.h>
#include "myFunctions.h"

void temp_main() {
	printf("¼·¾¾ %5.1fµµ = È­¾¾ %5.1µµ\n", 27.0, Cel2Fah(27.0));
	printf("È­¾¾ %5.1fµµ = ¼·¾¾ %5.1µµ\n", 95.0, Fah2Cel(95.0));
	printNumPyramid(5);
	printf("°ÔÀÓ Á¡¼ö = %d\n", playUpAndDown(35, 0, 99));
}