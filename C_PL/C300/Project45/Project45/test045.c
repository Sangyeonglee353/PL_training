#include <stdio.h>

enum { Sun=0, Mon, Tue, Wed, Thr, Fri, Sat};

main()
{
	printf("%d ", Sun); //0
	printf("%d ", Mon); //1
	printf("%d ", Tue); //2
	printf("%d ", Wed); //3
	printf("%d ", Thr); //4
	printf("%d ", Fri); //5
	printf("%d ", Sat); //6
}