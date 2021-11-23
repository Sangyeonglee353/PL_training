#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100

struct Date
{
	int year;  // 입사 년도
	int month; // 입사 월
	int day;  // 입사 일
};

typedef struct Date Date; // 구조체로 새로운 자료형 생성

struct Employee
{
	char Name[SIZE]; // 사원 이름
	char PersonID[SIZE]; // 주민등록번호
	char Address[SIZE]; // 주소 
	Date InitDate; // 입사일자
	int Salary; // 급여액
};

typedef struct Employee E; // 구조체로 새로운 자료형 생성

E get_record();                  //  0. 사원 정보 입력 받기
void mainDisplay();              // 1. 메인 화면 출력
void add_record(FILE* fp);       // 2. 사원 추가 함수
int search_record(FILE* fp);    // 3. 사원 검색 함수
int delete_record();             // 4. 사원 삭제 함수
void print_all_record(FILE* fp); // 5. 전체 사원 정보 출력
void print_record(E data);       // 6. 일치 데이터 출력
#endif