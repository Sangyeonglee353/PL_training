// [실습문제 5-2] StrToken, 입력된 문자열의 각 단어별 길이 출력하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define STRING_SIZE 200 // 문장별 최대 글자 수
#define LINE_NUM 10 // 최대 10문장까지 입력

int main(void) {

	char str[LINE_NUM][STRING_SIZE]; // 여러 문자열 저장 배열 변수 선언
	char seps[] = " ,.!\t"; // 분리자
	char* token;
	int lineCnt = 0; // 입력받은 문장 수

	// 기본 설정 안내문 출력
	printf("여러 줄에 원하는 문장을 입력하세요.\n");
	printf("입력이 다 되었으면 새로운 줄에 ctrl+Z, 그리고 Enter를 입력하세요.\n");
	
	// 문장 입력부
	for (int i = 0; i < LINE_NUM; i++)
	{
		// 문장 입력
		// Ctrl+Z 입력 후 Enter 입력 시 종료
		if (gets_s(str[i], sizeof(char) * STRING_SIZE) == NULL) { 
			break;
		}
		lineCnt++; // 입력받은 문장 카운트
	}
	
	// 문장 출력부
	for (int i = 0; i < lineCnt; i++)
	{
		printf(">> %d줄에 입력한 단어(토큰) 출력 >>\n", i+1);
		// 문자열을 전달하고 다음 토큰을 얻는다.
		token = strtok(str[i], seps);
		while (token != NULL) {
			// 문자열 s에 토큰이 있는 동안 반복하면서 단어의 글자수를 출력한다.
			printf("   strlen(%s)=%d\n", token, strlen(token));
			// 다음 토큰을 얻는다.
			token = strtok(NULL, seps);
		}
	}	
	return 0;
}