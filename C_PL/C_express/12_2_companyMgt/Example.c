// [실습문제 2] company Managment, 사원 관리 프로그램
#include "Employee.h"

int main(void)
{
	FILE* fp = NULL;
	char choiceMenu;
	
	while (1) {
		mainDisplay(); // 메인 화면 메뉴를 출력한다.
		
		scanf(" %c", &choiceMenu); // 사용자로부터 메뉴를 선택받는다.
		if (choiceMenu == '1' || choiceMenu == '2' || choiceMenu == '4') {
			if ((fp = fopen("companyData.dat", "a+")) == NULL) {
				fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.");
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
			printf("프로그램을 종료합니다.\n");
			return 0;
		default:
			printf("잘못된 입력입니다.\n");;
		}
	}
}
