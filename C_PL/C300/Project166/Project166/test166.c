// ���� �۾����� ����̺� �����ϱ�(_chdrive)

#include<stdio.h>
#include<direct.h>

void main(void)
{
	int drive = 4;

	if (_chdrive(drive) == 0) // error: -1
	{
		drive = _getdrive();
		printf("����� ����̺�: %c \n", 'A' + drive - 1);
	}
}