#include <stdio.h>

main()
{
	int i = 1;
	int hap = 0;

	do
	{
		hap = hap + i;
		i++; // i�� 1,2,3,4,5,6,7,8,9,10,11���� ����
	} while (i <= 10); // i�� 10���� �۰ų� ���� ���� �ݺ�, 11�̸� ��ȯ Ż��

	printf("hap = %d", hap); // hap = 55
}