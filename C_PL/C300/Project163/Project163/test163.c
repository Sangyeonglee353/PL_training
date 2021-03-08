// 현재 작업중인 디렉터리 구하기(_getcwd)

#include <stdio.h>
#include <stdlib.h>
#include <direct.h>

void main(void)
{
	char pathname[_MAX_PATH];

	_getcwd(pathname, _MAX_PATH);

	puts(pathname);
}