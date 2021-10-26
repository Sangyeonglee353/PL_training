/* commandline.c */
#include <stdio.h>

int main(int argc, char* argv[])
{
	int i = 0;

	printf("실행 명령어 줄 인자(command line arguments) >>\n\n");
	printf("실행 프로그램 이름을 합쳐서 인자의 갯수는 ? >>\n");
	printf("모두 (argc =) %d개 입니다.\n", argc);
	printf("각각의 문자열은 다음과 같습니다. >>\n");
	for (i = 0; i < argc; i++) {
		printf("argv[%d] = %s\n", i, argv[i]);
	}
}