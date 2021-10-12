// [���� 2]: union

#include<stdio.h>

// case 1
/*
union example { // ����ü ����
	int i;
	char c;
};

int main(void) {
	union example v; // ����ü ���� ����

	v.c = 'A'; // char������ ����
	printf("v.c:%c v.i:%i\n", v.c, v.i);

	v.i = 10000;
	printf("v.c:%c v.i:%i\n", v.c, v.i);

	return 0;
}
*/

// case 2: union�� typedef
union example { // ����ü ����
	int i;
	char c;
};

typedef union example example;

int main(void) {
	example v; // ����ü ���� ����

	v.c = 'A'; // char������ ����
	printf("v.c:%c v.i:%i\n", v.c, v.i);

	v.i = 10000;
	printf("v.c:%c v.i:%i\n", v.c, v.i);

	return 0;
}

