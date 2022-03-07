/* 예제 pointer2-1.c */
#include <stdio.h>

int test6_main(void)
{
    int* ptr1 = 0;				// int* ptr1=NULL; 과 같은 문장
    char* ptr2 = 0;				// char* ptr2=NULL; 과 같은 문장
    double* ptr3 = 0;	             	// double* ptr3=NULL; 과 같은 문장 

    printf("%d 번지, %d 번지, %d 번지 \n", ptr1++, ptr2++, ptr3++);
    //printf("%d 번지, %d 번지, %d 번지 \n", ++ptr1, ++ptr2, ++ptr3);
    printf("%d 번지, %d 번지, %d 번지 \n", ptr1, ptr2, ptr3);

    return 0;
}
