// ���� 2: ���ڿ� ����_����
#include<stdio.h>

void set_pointer(char* q);

char* prb = "All that glisters is not gold.";

int main(void) {
	char* p = "zzz of main function";
	set_pointer(p);
	printf("%s \n", p);

	return 0;
}

void set_pointer(char* q) {
	q = prb; // *q = p
}