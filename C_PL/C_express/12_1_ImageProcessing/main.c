// [실습 문제 1] ImageProcessing, 이미지 파일 처리
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define Size_X 256
#define Size_Y 256

unsigned char* Addition(unsigned char* InImage, int value); // 영상 덧셈 함수 선언
unsigned char* Subtraction(unsigned char* InImage, int value); // 영상 뺄셈 함수 선언

int main(void)
{
    int value; // 원하는 조절값
    int number; // 영상 덧셈과 뺄셈 선택값
    unsigned char* InImage; // 입력영상을 위한 메모리 저장 포인터
    unsigned char* OutImage; // 출력영상을 위한 메모리 저장 포인터
    FILE* fileIn, * fileOut; // 입력영상 파일 및 출력영상 파일 포인터

    InImage = (unsigned char*)malloc(Size_X * Size_Y * sizeof(unsigned char));
    OutImage = (unsigned char*)malloc(Size_X * Size_Y * sizeof(unsigned char));

    fileIn = fopen("lena.raw", "rb");
    if (fileIn == NULL) {
        fprintf(stderr, "lena.raw 파일을 열 수 없습니다.");
        exit(1);
    }

    fileOut = fopen("result.raw", "wb");
    if (fileOut == NULL) {
        fprintf(stderr, "result.raw 파일을 열 수 없습니다.");
        exit(1);
    }

    fread(InImage, sizeof(unsigned char), Size_X * Size_Y, fileIn); // 영상 읽어오기

    // 원하는 조절 수치 입력 받기
    printf("조절하고 싶은 수치(정수)를 입력하시오: ");
    scanf("%d", &value);
    // 영상 덧셈, 뺄셈 선택하기
    printf("1. 영상 덧셈 2. 영상 뺄셈 중 하나를 선택하시오: ");
    scanf("%d", &number);

    switch (number) {
    case 1:
        printf("영상 덧셈을 실행합니다.\n");
        OutImage = Addition(InImage, value);
        break;
    case 2:
        printf("영상 뺄셈을 실행합니다.\n");
        OutImage = Subtraction(InImage, value);
        break;
    default:
        printf("잘못된 선택입니다. 프로그램을 다시 실행하세요.\n");
        break;
    }

    fwrite(OutImage, sizeof(unsigned char), Size_X * Size_Y, fileOut); // 영상 출력하기

    free(InImage); // 동적 메모리 할당 해제
    free(OutImage); // 동적 메모리 할당 해제

    fclose(fileIn); // 파일 닫기
    fclose(fileOut); // 파일 닫기

    return 0;
}

// 영상 덧셈 함수 정의
unsigned char* Addition(unsigned char* InImage, int value)
{
    unsigned char* OutImage; // 출력영상을 위한 메모리 저장 포인터

    OutImage = (unsigned char*)malloc(Size_X * Size_Y * sizeof(unsigned char));

    for (int i = 0; i < Size_X * Size_Y; i++)
    {
        OutImage[i] = (int)InImage[i] + value;
        // 영상처리 후 출력영상 클리핑 처리
        if (OutImage[i] > 255) OutImage[i] = 255;
        if (OutImage[i] < 0) OutImage[i] = 0;
    }

    return OutImage;
}

// 영상 뺄셈 함수 정의
unsigned char* Subtraction(unsigned char* InImage, int value)
{
    unsigned char* OutImage; // 출력영상을 위한 메모리 저장 포인터

    OutImage = (unsigned char*)malloc(Size_X * Size_Y * sizeof(unsigned char));

    for (int i = 0; i < Size_X * Size_Y; i++)
    {
        OutImage[i] = (int)InImage[i] - value;
        // 영상처리 후 출력영상 클리핑 처리
        if (OutImage[i] > 255) OutImage[i] = 255;
        if (OutImage[i] < 0) OutImage[i] = 0;
    }

    return OutImage;
}
