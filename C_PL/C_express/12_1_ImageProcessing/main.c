// [�ǽ� ���� 1] ImageProcessing, �̹��� ���� ó��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define Size_X 256
#define Size_Y 256

unsigned char* Addition(unsigned char* InImage, int value); // ���� ���� �Լ� ����
unsigned char* Subtraction(unsigned char* InImage, int value); // ���� ���� �Լ� ����

int main(void)
{
    int value; // ���ϴ� ������
    int number; // ���� ������ ���� ���ð�
    unsigned char* InImage; // �Է¿����� ���� �޸� ���� ������
    unsigned char* OutImage; // ��¿����� ���� �޸� ���� ������
    FILE* fileIn, * fileOut; // �Է¿��� ���� �� ��¿��� ���� ������

    InImage = (unsigned char*)malloc(Size_X * Size_Y * sizeof(unsigned char));
    OutImage = (unsigned char*)malloc(Size_X * Size_Y * sizeof(unsigned char));

    fileIn = fopen("lena.raw", "rb");
    if (fileIn == NULL) {
        fprintf(stderr, "lena.raw ������ �� �� �����ϴ�.");
        exit(1);
    }

    fileOut = fopen("result.raw", "wb");
    if (fileOut == NULL) {
        fprintf(stderr, "result.raw ������ �� �� �����ϴ�.");
        exit(1);
    }

    fread(InImage, sizeof(unsigned char), Size_X * Size_Y, fileIn); // ���� �о����

    // ���ϴ� ���� ��ġ �Է� �ޱ�
    printf("�����ϰ� ���� ��ġ(����)�� �Է��Ͻÿ�: ");
    scanf("%d", &value);
    // ���� ����, ���� �����ϱ�
    printf("1. ���� ���� 2. ���� ���� �� �ϳ��� �����Ͻÿ�: ");
    scanf("%d", &number);

    switch (number) {
    case 1:
        printf("���� ������ �����մϴ�.\n");
        OutImage = Addition(InImage, value);
        break;
    case 2:
        printf("���� ������ �����մϴ�.\n");
        OutImage = Subtraction(InImage, value);
        break;
    default:
        printf("�߸��� �����Դϴ�. ���α׷��� �ٽ� �����ϼ���.\n");
        break;
    }

    fwrite(OutImage, sizeof(unsigned char), Size_X * Size_Y, fileOut); // ���� ����ϱ�

    free(InImage); // ���� �޸� �Ҵ� ����
    free(OutImage); // ���� �޸� �Ҵ� ����

    fclose(fileIn); // ���� �ݱ�
    fclose(fileOut); // ���� �ݱ�

    return 0;
}

// ���� ���� �Լ� ����
unsigned char* Addition(unsigned char* InImage, int value)
{
    unsigned char* OutImage; // ��¿����� ���� �޸� ���� ������

    OutImage = (unsigned char*)malloc(Size_X * Size_Y * sizeof(unsigned char));

    for (int i = 0; i < Size_X * Size_Y; i++)
    {
        OutImage[i] = (int)InImage[i] + value;
        // ����ó�� �� ��¿��� Ŭ���� ó��
        if (OutImage[i] > 255) OutImage[i] = 255;
        if (OutImage[i] < 0) OutImage[i] = 0;
    }

    return OutImage;
}

// ���� ���� �Լ� ����
unsigned char* Subtraction(unsigned char* InImage, int value)
{
    unsigned char* OutImage; // ��¿����� ���� �޸� ���� ������

    OutImage = (unsigned char*)malloc(Size_X * Size_Y * sizeof(unsigned char));

    for (int i = 0; i < Size_X * Size_Y; i++)
    {
        OutImage[i] = (int)InImage[i] - value;
        // ����ó�� �� ��¿��� Ŭ���� ó��
        if (OutImage[i] > 255) OutImage[i] = 255;
        if (OutImage[i] < 0) OutImage[i] = 0;
    }

    return OutImage;
}
