// ���ڿ����� ���ڰ� ���۵Ǵ� ��ġ �����ϱ�(strcspn)

#include <stdio.h>
#include <string.h>

void main(void)
{

	char string[] = " ���� 3����, �ڳ��� 5����, �罿 4����";
	char* find = "0123456789";
	int index;

	index = strcspn(string, find);

	printf("%d ��ġ���� ��ġ�Ǵ� ù ���ڸ� �߰��Ͽ����ϴ�. \n", index);
}