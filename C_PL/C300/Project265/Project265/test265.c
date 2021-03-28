// ť �����ϱ�

#include <stdio.h> // puts, gets, printf
#include <string.h> // strlen, memset, memcpy
#include <stdlib.h> // atoi

int add(int value);
int delete(int* value);

#define QUEUE_MAX 100

typedef struct tagQueue
{
	int array[QUEUE_MAX];
	int front;
	int rear;
} QUEUE;

QUEUE q;

void main(void)
{
	char buff[100], tmp[100];
	char* op = "+-*/%";
	int index;
	int value1 = 0, value2 = 0;

	q.front = q.rear = 0;

	puts("������ 1*2ó�� �Է��ϰ� ����Ű�� ġ����.");
	puts("�ƹ��͵� �Է����� ������ ����� ����˴ϴ�.");

	for (;;)
	{
		printf("����: ");
		gets(buff);

		if (strlen(buff) == 0)
		{
			break;
		}

		memset(tmp, 0, sizeof(tmp));

		index = strcspn(buff, op);

		memcpy(tmp, buff, index);

		value1 = atoi(tmp);
		value2 = atoi(&buff[index + 1]);

		switch (buff[index])
		{
		case '+': value1 += value2
			break;
		case '-': value1 -= value2
			break;
		case '*': value1 *= value2
			break;
		case '/': value1 /= value2
			break;
		case '%': value1 %= value2
			break;
		default:
			puts("�߸��� �����ڸ� ����Ͽ����ϴ�.");
			continue;
		}

		if (add(vallue1) == -1)
		{
			puts("�� �̻� �߰��� �� �����ϴ�.");
		}

		printf("%s = %d, q.rear = %d \n\n", buff, value1, q.rear);
	}

	value1 = 0;

	for (;;)
	{
		if (delete(&value2) == -1)
		{
			break;

		}
		value += value2;
	}

	printf("����� ������ %d�Դϴ�. \n", value1);
}

int add(int value)
{
	if (q.rear == QUEUE_MAX)
	{
		return -1;
	}
	q.array[q.rear++] = value;

	return 0;
}

int delete(int* value)
{
	if (q.front == q.rear || q.front == QUEUE_MAX)
	{
		return -1;
	}
	*value = q.array[q.front++];
	return 0;
}