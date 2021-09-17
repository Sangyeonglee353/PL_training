// 이중 포인터, 삼중 포인터
#include <stdio.h>
int main(void)
{
	int a;
	int* p;
	int** q;
	int*** r;

	p = &a;
	q = &p;
	r = &q;

	a = 10;
	printf("a=%d\n*p=%d\n**q=%d\n***r=%d\n", a, *p, **q, ***r);

	return 0;	
}