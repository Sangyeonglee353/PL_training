// 현재 작업중인 드라이브 변경하기(_chdrive)

#include<stdio.h>
#include<direct.h>

void main(void)
{
	int drive = 4;

	if (_chdrive(drive) == 0) // error: -1
	{
		drive = _getdrive();
		printf("변경된 드라이브: %c \n", 'A' + drive - 1);
	}
}