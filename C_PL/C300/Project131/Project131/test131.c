// �������� �����͸� �Լ����� ����ϱ�

#include <stdio.h>

void print(char** ppanimal);

void main(void)
{
	char* animal[3];

	animal[0] = "ȣ����";
	animal[1] = "����";
	animal[2] = "�䳢";

	print(animal);
}

void print(char** ppanimal)
{
	puts(ppanimal[0]);
	puts(ppanimal[1]);
	puts(ppanimal[2]);
}