// ���ڿ��� ����ȭ�ϱ� (sprintf_s)

#include <stdio.h>

void main(void)
{
	char cValue = 'a';
	int iValue = 1234567;
	long IValue = 7890123;
	float fValue = 3.141592;
	double dValue = 3.141592;
	char* string = "korea";
	char buffer[100];

	sprintf_s(buffer, 100, "char ���� %c", cValue);
	puts(buffer);

	sprintf_s(buffer, 100, "int ���� %d", iValue);
	puts(buffer);

	sprintf_s(buffer, 100, "long ���� %Id", IValue);
	puts(buffer);

	sprintf_s(buffer, 100, "float ���� %f", fValue);
	puts(buffer);

	sprintf_s(buffer, 100, "double ���� %e", dValue);
	puts(buffer);

	sprintf_s(buffer, 100, "char���� %s", string);
	puts(buffer);


}