#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct employee {
	int id;
	char* name;
	int salary;
	struct employee* next;
} employee;

int main(void) {
	// 첫번째 사원 one, 두번째 사우너 two 생성
	employee* one = (employee*)malloc(sizeof(employee));
	employee* two = (employee*)malloc(sizeof(employee));
	
	one->id = 20146729;
	one->salary = 2500;
	one->name = (char*)malloc(strlen("조재수") + 1); // 구조체 변수의 문자열 포인터를 사용하려면 동적메모리 할당해야함 이와 같이
	strcpy(one->name, "조재수"); // 이 다음에 해당 위치에 문자열 카피
	one->next = NULL; // 첫번재 연결은 NULL
	
	// 2번째 사원 you 추가
	two->id = 20146730;
	two->salary = 3000;
	two->name = (char*)malloc(strlen("홍길동") + 1);
	strcpy(two->name, "홍길동");
	
	one->next = two; // 두번째 사원을 첫번째 사원과 연결
	two->next = NULL; // 두번째 사원 연결은 NULL

	//?? 세번째 사원(각자이름)을 생성해서 연결해보자. 각자//
	employee* three = (employee*)malloc(sizeof(employee));
	three->id = 202013322;
	three->salary = 3500;
	three->name = (char*)malloc(strlen("세종대왕")+1);
	strcpy(three->name, "세종대왕");
	
	two->next = three; // 세번째 사원을 두번째 사원과 연결
	three->next = NULL; // 세번째 사원 연결은 NULL
	
	// 두번째 사원 삭제 전
	printf("%d %s %d \n", one->id, one->name, one->salary);
	printf("%d %s %d \n", two->id, two->name, two->salary);
	printf("%d %s %d \n", one->next->id, one->next->name, one->next->salary);
	printf("%d %s %d \n", three->id, three->name, three->salary);
	printf("%d %s %d \n", two->next->id, two->next->name, two->next->salary);
	
	// 두번째 사원 삭제
	free(two->name);
	free(two);
	// 첫번째 사원과 세번째 사원 연결
	one->next = three;
	
	// 두번째 사원 삭제 후
	printf("두번째 사원 삭제 후\n");
	printf("%d %s %d \n", one->id, one->name, one->salary);
	printf("%d %s %d \n", one->next->id, one->next->name, one->next->salary);

	free(one->name); // 각 이름의 동적 메모리 할당 해제
	free(three->name);
	
	return 0;
	

}