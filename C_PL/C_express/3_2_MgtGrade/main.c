// [실습 문제 3-2] : MgtGrade, 2차원 배열을 이용한 성적관리 프로그램
#include <stdio.h>
#define STUDENT 4 // 학생 수를 4명으로 정의
#define CLASS 4 // 과목 수를 4개로 정의
#define SIZE 5 // 학생과 과목이름의 크기를 5로 정의

void student_average(int(*score)[4], float (*student_avg)); // 학생별 평균 계산 함수 선언
void class_average(int(*score)[4], float(*class_avg)); // 과목별 평균 계산 함수 선언

int main(void) {
	// 학생들의 과목별 점수를 저장할 2차원 배열 선언
	int score[STUDENT][CLASS] = { 0, };
	// 학생별 평균 점수, 과목별 점수를 저장할 배열 선언
	float student_avg[STUDENT] = { 0, };
	float class_avg[CLASS] = { 0, };
	// 학생들의 이름을 저장할 2차원 배열 선언
	char name[STUDENT][SIZE] = { "철희", "철수", "영희", "영수" };
	// 과목 이름을 저장한 2차원 배열 선언
	char subject[CLASS][SIZE] = { "국어", "영어", "수학", "도덕" };

	// 학생들의 성적을 과목별로 입력받기
	for (int i = 0; i < STUDENT; i++) {
		printf("%s 학생의 점수를 입력하세요\n", name[i]);
		// 국어, 영어, 수학, 도덕 순서로 점수를 입력 받는다.
		for (int j = 0; j < CLASS; j++) {
			printf("%s 점수: ", subject[j]);
			scanf("%d", &score[i][j]);
		}
	}

	student_average(score, student_avg); // 학생별 평균 점수 계산
	class_average(score, class_avg);     // 과목별 평균 점수 계산

	printf("\n===학생별 점수 평균===\n");
	for (int i = 0; i < STUDENT; i++) {
		printf("%s: %.1f 점 \n", name[i], student_avg[i]);
	}

	printf("\n===과목별 점수 평균===\n");
	for (int i = 0; i < CLASS; i++) {
		printf("%s: %.1f 점 \n", subject[i], class_avg[i]);
	}
		
	return 0;
}

// 학생별 평균 계산 함수 정의
void student_average(int(*score)[4], float (*student_avg))
{
	int total;

	for (int i = 0; i < STUDENT; i++) {
		total = 0;
		for (int j = 0; j < CLASS; j++) {
			total = total + score[i][j];
		}
		student_avg[i] = (float)total / CLASS;
	}
}

// 과목별 평균 계산 함수 정의
void class_average(int(*score)[4], float (*class_avg))
{
	int total;

	for (int i = 0; i < CLASS; i++) {
		total = 0;
		for (int j = 0; j < STUDENT; j++) {
			total = total + score[j][i];
		}
		class_avg[i] = (float)total / STUDENT;
	}
}