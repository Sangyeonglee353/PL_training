#include <stdio.h>
#include "myFunctions.h"

void temp_main() {
	printf("���� %5.1f�� = ȭ�� %5.1��\n", 27.0, Cel2Fah(27.0));
	printf("ȭ�� %5.1f�� = ���� %5.1��\n", 95.0, Fah2Cel(95.0));
	printNumPyramid(5);
	printf("���� ���� = %d\n", playUpAndDown(35, 0, 99));
}