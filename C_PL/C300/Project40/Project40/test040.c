#include <stdio.h>

main()
{
	int i = 0;
	int j = 1;

	printf("蔼=%d, 皋葛府林家=%p\n", i, &i);  // 蔼 = 0, 皋葛府林家=0012FF7C
	printf("蔼=%d, 皋葛府林家=%p\n", j, &j); // 蔼 = 1, 皋葛府林家=0012FF78
}