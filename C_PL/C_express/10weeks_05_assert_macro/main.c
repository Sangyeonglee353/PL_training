// [���� 5] ASSERT ��ũ��
#include<stdio.h>

#define ASSERT(exp) {if(!(exp)) \
			{ printf("����(" #exp ")�� �ҽ� ���� %s %d��° �ٿ��� ����.\n" \
			, __FILE__, __LINE__), exit(1);}}

int main(void) {
	int sum = 100; // ���� ������ �ʱⰪ�� 0�� �ƴ�
	
	ASSERT(sum == 0); // sum�� ���� 0�� �Ǿ�� ��.
	return 0;
}