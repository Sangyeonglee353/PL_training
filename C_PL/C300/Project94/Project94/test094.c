// ���ڰ� ����, �ǹ��� �Ǵ� ���๮������ �˻��ϱ�(isspace)

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char* string = "This is Korea! \t\n";
	int cnt = 0;

	while (*string)
	{
		if (isspace(*string))
		{
			cnt++;
		}

		string++;
	}

	printf("����, �� �׸��� ���๮���� ���� %d�Դϴ�.", cnt);
}