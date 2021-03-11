// 문자열에서 특정 문자열의 인덱스 구하기(strstr)

#include <Stdio.h>
#include <string.h>

void main(void)
{
	 //01234567890

	char string[] = "This is a book";
	char* pos;

	pos = strstr(string, "book"); 

	if (pos)
	{
		printf("book을 %d번째에서 찾았습니다. \n", pos - string);
		printf("%s \n", &string[pos - string]);
	}
}