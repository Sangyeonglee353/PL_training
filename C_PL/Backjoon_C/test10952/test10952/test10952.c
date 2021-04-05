#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x, y;
	x = 1;
	y = 1;
	while (x != 0 && y != 0)
	{
		scanf("%d %d", &x, &y);
		if (x != 0 && y != 0)
		{
			printf("%d\n", x + y);
		}
	}
	return 0;
}