#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100

struct Date
{
	int year;  // �Ի� �⵵
	int month; // �Ի� ��
	int day;  // �Ի� ��
};

typedef struct Date Date; // ����ü�� ���ο� �ڷ��� ����

struct Employee
{
	char Name[SIZE]; // ��� �̸�
	char PersonID[SIZE]; // �ֹε�Ϲ�ȣ
	char Address[SIZE]; // �ּ� 
	Date InitDate; // �Ի�����
	int Salary; // �޿���
};

typedef struct Employee E; // ����ü�� ���ο� �ڷ��� ����

E get_record();                  //  0. ��� ���� �Է� �ޱ�
void mainDisplay();              // 1. ���� ȭ�� ���
void add_record(FILE* fp);       // 2. ��� �߰� �Լ�
int search_record(FILE* fp);    // 3. ��� �˻� �Լ�
int delete_record();             // 4. ��� ���� �Լ�
void print_all_record(FILE* fp); // 5. ��ü ��� ���� ���
void print_record(E data);       // 6. ��ġ ������ ���
#endif