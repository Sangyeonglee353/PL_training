// [예제 2]: union

#include<stdio.h>

// case 1
/*
union example { // 공용체 선언
	int i;
	char c;
};

int main(void) {
	union example v; // 공용체 변수 선언

	v.c = 'A'; // char형으로 참조
	printf("v.c:%c v.i:%i\n", v.c, v.i);

	v.i = 10000;
	printf("v.c:%c v.i:%i\n", v.c, v.i);

	return 0;
}
*/

// case 2: union와 typedef
union example { // 공용체 선언
	int i;
	char c;
};

typedef union example example;

int main(void) {
	example v; // 공용체 변수 선언

	v.c = 'A'; // char형으로 참조
	printf("v.c:%c v.i:%i\n", v.c, v.i);

	v.i = 10000;
	printf("v.c:%c v.i:%i\n", v.c, v.i);

	return 0;
}

