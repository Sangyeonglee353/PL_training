// �������� ������ ����ϱ�

#include <stdio.h>

void main(void)
{
	char* animal[3];
	char** ppanimal;

	animal[0] = "ȣ����";
	animal[1] = "����";
	animal[2] = "�䳢";

	ppanimal = animal;

	puts(animal[0]);
	puts(ppanimal[1]);
	puts(ppanimal[2]);
}