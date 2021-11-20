// [실습문제 11-1] address, 주소록 파일 만들기
#include <stdio.h>
#define C_SIZE 30 // 문자열의 크기

struct address {
	char name[C_SIZE]; // 이름
	char addr[C_SIZE]; // 주소
	char tel[C_SIZE]; // 전화번호
};

int main(void)
{
	FILE* fp = NULL;
	int number; // 순번
	struct address a; // 구조체 address를 변수 a로 선언

	//파일열기
	fp = fopen("address.txt", "w");

	// 파일열기 실패 여부 검사
	if (fp == NULL)
	{
		printf("파일열기 실패 \n");
	}
	else
	{
		printf("파일열기 성공 \n");
	}

	// 상단 카테고리 명을 파일에 저장합니다."
	fprintf(fp, "순번\t이름\t주소\t\t전화번호\n");

	// 내용을 입력받아 파일에 저장합니다.
	while (1)
	{
		printf("순번을 입력하시오(음수이면 종료):");
		scanf("%d", &number);

		if (number < 0)
		{
			break;
		}

		printf("이름, 주소, 전화번호를 입력하시오:");
		scanf("%s %s %s", &a.name, &a.addr, &a.tel);
		fprintf(fp, "%-4d\t%s\t%s\t%s\n", number, &a.name, &a.addr, &a.tel);
	}
	fclose(fp);

	return 0;
}