#include <stdio.h>
#include <stdlib.h>

#define SIZE 2

struct Book {
	int number;
	char title[15];
};

int main(void) {
	struct Book* p;

	p = (struct Book*)malloc(SIZE * sizeof(struct Book)); // ����ü �迭 �Ҵ�
	
	if (p == NULL) {
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}

	p->number = 1;
	strcpy(p->title, "C Programing");

	(p + 1)->number = 2;
	strcpy((p + 1)->title, "Data structure");

	for (int i = 0; i < SIZE; i++) {
		printf("[%d] = %s\n", (p + i)->number, (p + i)->title);
	}

	free(p);
	return 0;
}
