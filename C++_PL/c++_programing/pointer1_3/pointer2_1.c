/* ���� pointer2-1.c */
#include <stdio.h>

int test6_main(void)
{
    int* ptr1 = 0;				// int* ptr1=NULL; �� ���� ����
    char* ptr2 = 0;				// char* ptr2=NULL; �� ���� ����
    double* ptr3 = 0;	             	// double* ptr3=NULL; �� ���� ���� 

    printf("%d ����, %d ����, %d ���� \n", ptr1++, ptr2++, ptr3++);
    //printf("%d ����, %d ����, %d ���� \n", ++ptr1, ++ptr2, ++ptr3);
    printf("%d ����, %d ����, %d ���� \n", ptr1, ptr2, ptr3);

    return 0;
}
