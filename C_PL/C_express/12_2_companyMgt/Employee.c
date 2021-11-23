#include "Employee.h"

// 사원 정보 입력 함수 정의
E get_record()
{
	E data;

	getchar(); // 줄바꿈 문자 없애기
	printf("사원명: "); gets_s(data.Name, SIZE); // 이름을 입력받는다.
	printf("주민등록번호: "); gets_s(data.PersonID, SIZE); // 주민등록번호를 입력받는다.
	printf("주소: "); gets_s(data.Address, SIZE); // 주소를 입력받는다.
	printf("입사년도(YYYY MM DD): "); scanf("%d %d %d", &data.InitDate.year, &data.InitDate.month, &data.InitDate.day);
	printf("기본급여: "); scanf("%d", &data.Salary); // 급여액을 입력받는다.

	return data;
}

// 메인 화면 출력 함수 정의
void mainDisplay()
{
	// 메인 화면 함수
	printf("=====사원정보 관리프로그램=====\n");
	printf("1. 사원 추가\n");
	printf("2. 사원 검색(이름)\n");
	printf("3. 사원 삭제\n");
	printf("4. 전체 사원정보 출력(파일출력)\n");
	printf("q. 프로그램 종료\n");
	printf("===============================\n");
	printf("원하시는 메뉴를 선택해주세요: ");
}

// 사원 추가 함수 정의
void add_record(FILE* fp)
{
	E data;

	data = get_record();    // 사용자로부터 데이터를 받아서 구조체에 저장
	fseek(fp, 0, SEEK_END); // 파일의 끝으로 간다.
	fwrite(&data, sizeof(data), 1, fp); // 구조체 데이터를 파일에 쓴다.
	printf("정상 처리되었습니다.\n");
}

// 사원 검색 함수 정의
int search_record(FILE* fp)
{
	char name[30];
	E data;

	fseek(fp, 0, SEEK_SET); // 파일의 처음으로 간다.

	// #1. 찾을 사원명 입력 받기
	getchar(); // 줄바꿈 문자 없애기
	printf("찾으실 사원명을 입력하세요: ");
	gets_s(name, 30);

	// #2. 사원 정보 비교해 출력하기
	while (!feof(fp)) { // 파일의 끝까지 반복한다.
		fread(&data, sizeof(data), 1, fp); // 현재 위치에서 데이터를 읽는다.
		if (strcmp(data.Name, name) == 0) { // 이름을 비교한다
			print_record(data); // 일치하면 화면에 출력한다.
			return 0;
		}
	}
	printf("일치하는 사원이 없습니다.\n");
	return 0;
}

// 사원 삭제 함수 정의
int delete_record()
{
	char name[30];
	int index = 0;
	int find_pos; // 찾은 위치
	FILE* fp;
	E data, fdata[50];

	// #1. 파일에서 데이터를 읽어와 배열로 저장하기
	// 파일을 이어쓰기 모드로 연다.
	if ((fp = fopen("companyData.dat", "a+")) == NULL) {
		fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.");
		exit(1);
	}

	fseek(fp, 0, SEEK_SET); // 파일의 처음으로 간다.

	while (!feof(fp)) { // 파일의 끝까지 반복한다.
		fread(&data, sizeof(data), 1, fp); // 현재 위치에서 데이터를 읽는다.

		// 파일에 저장된 데이터를 배열로 받아낸다.
		strcpy(fdata[index].Name, data.Name);
		strcpy(fdata[index].PersonID, data.PersonID);
		strcpy(fdata[index].Address, data.Address);
		fdata[index].InitDate.year = data.InitDate.year;
		fdata[index].InitDate.month = data.InitDate.month;
		fdata[index].InitDate.day = data.InitDate.day;
		fdata[index].Salary = data.Salary;
		index++; // 사원 수 카운트
	}
	fclose(fp);

	// #2. 삭제할 사원명을 입력받아 검색한 뒤 삭제하기
	// #2-1. 삭제할 사원명 입력받기
	getchar(); // 줄바꿈 문자 없애기
	printf("삭제하실 사원명을 입력해주세요:");
	gets_s(name, 30);

	// #2-2. 검색 후 삭제하기
	for (int pos = 0; pos < index; pos++) {
		if (strcmp(fdata[pos].Name, name) == 0) { // 이름 비교하기
			printf("삭제할 사원이 검색되었습니다. 삭제하시겠습니까(y/n)?");
			int yn = _getche();
			if (yn == 'y') {
				find_pos = pos; // 찾은 위치 저장

				// 사원 정보 덮어쓰기
				for (int i = find_pos; i < index - 1; i++) {
					strcpy(fdata[i].Name, fdata[i + 1].Name);
					strcpy(fdata[i].PersonID, fdata[i + 1].PersonID);
					strcpy(fdata[i].Address, fdata[i + 1].Address);
					fdata[i].InitDate.year = fdata[i + 1].InitDate.year;
					fdata[i].InitDate.month = fdata[i + 1].InitDate.month;
					fdata[i].InitDate.day = fdata[i + 1].InitDate.day;
					fdata[i].Salary = fdata[i + 1].Salary;
				}
				index--; // 전체 사원 목록 감소

				printf("\n");

				// 파일을 새로 쓰기모드로 열기
				if ((fp = fopen("companyData.dat", "wb")) == NULL) {
					fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.");
					exit(1);
				}
				fseek(fp, 0, SEEK_SET); // 파일의 끝으로 가기

				// 사원 정보 파일에 업데이트
				for (int i = 0; i < index - 1; i++)
				{
					fwrite(&fdata[i], sizeof(fdata[i]), 1, fp); // 구조체 데이터를 파일에 쓴다.
				}
				fclose(fp);

				printf("\n사원 정보가 삭제가 되었습니다.\n");
				return 0;
			}
			else if (yn == 'n') {
				printf("\n사원 정보 삭제를 취소합니다.\n");
				return 0;
			}
			else {
				fflush(stdin);
				printf("\n잘못입력하셨습니다.\n");
				return 0;
			}
			break;
		}
	}
	printf("일치하는 사원이 없습니다.\n");
	return 0;
}

// 전체 사원 정보 출력 함수 정의
void print_all_record(FILE* fp)
{
	int num = 0;
	E data, fdata[50];
	printf("사원 정보를 출력합니다.\n");
	fseek(fp, 0, SEEK_SET); // 파일의 처음으로 간다.
	fflush(fp); // 버퍼 지우기 및 모드 변환

	while (!feof(fp)) { // 파일의 끝까지 반복한다.
		fread(&data, sizeof(data), 1, fp); // 현재 위치에서 데이터를 읽는다.

		// 파일에 저장된 데이터를 배열로 받아낸다.
		strcpy(fdata[num].Name, data.Name);
		strcpy(fdata[num].PersonID, data.PersonID);
		strcpy(fdata[num].Address, data.Address);
		fdata[num].InitDate.year = data.InitDate.year;
		fdata[num].InitDate.month = data.InitDate.month;
		fdata[num].InitDate.day = data.InitDate.day;
		fdata[num].Salary = data.Salary;
		num++;
	}

	for (int i = 0; i < num - 1; i++) { // 마지막에 한번 더 출력되는 문제 해결
		printf("\n%d. ", i + 1);
		print_record(fdata[i]);
	}
	printf("\n사원 정보를 모두 출력했습니다.\n");
}

// 사원 정보 출력 함수 정의
void print_record(E data)
{
	printf("\n");
	printf("사원명: %s\n", data.Name);
	printf("주민등록번호: %s\n", data.PersonID);
	printf("주소: %s\n", data.Address);
	printf("입사 일자: %d년 %d월 %d일\n", data.InitDate.year, data.InitDate.month, data.InitDate.day);
	printf("기본급여: %d원\n", data.Salary);
}
