// [�ǽ����� 2] company Managment, ��� ���� ���α׷�
#include "Employee.h"

int main(void)
{
	FILE* fp = NULL;
	char choiceMenu;
	
	while (1) {
		mainDisplay(); // ���� ȭ�� �޴��� ����Ѵ�.
		
		scanf(" %c", &choiceMenu); // ����ڷκ��� �޴��� ���ù޴´�.
		if (choiceMenu == '1' || choiceMenu == '2' || choiceMenu == '4') {
			if ((fp = fopen("companyData.dat", "a+")) == NULL) {
				fprintf(stderr, "�Է��� ���� ������ �� �� �����ϴ�.");
				exit(1);
			}
		}

		switch (choiceMenu) {
		case '1':
			add_record(fp);
			fclose(fp);
			break;
		case '2':
			search_record(fp);
			fclose(fp);
			break;
		case '3':
			delete_record();
			break;
		case '4':
			print_all_record(fp);
			fclose(fp);
			break;
		case 'q':
			printf("���α׷��� �����մϴ�.\n");
			return 0;
		default:
			printf("�߸��� �Է��Դϴ�.\n");;
		}
	}
}
