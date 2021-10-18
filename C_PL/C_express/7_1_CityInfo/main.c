// [�ǽ����� 7-1] CityInfo, ����ü�� �̿��Ͽ� �� ������ ������ ����ϴ� ���α׷� �ۼ��ϱ�
#include<stdio.h>
#define NUMBER 3 // �迭�� ũ�� ����

// ������ �浵 ������ ����� position ����ü ����
struct position {
	float latitude;  // ����
	float longitude; // �浵
};

// ���� ���� ������ ����� city ����ü ����
struct city {
	char* cityName;
	struct position p;
};

int main(void) {
	// ����ü city�� �迭 ���� ���� �� �ʱ�ȭ
	struct city cityinfo[NUMBER] = { {"����", {37.3, 126.6}},
									 {"����", {40.8, 73.9}},
									 {"����", {50.5, 135.2}} };

	// ����� ���� ���� ���
	printf("��ϵ� ���ÿ� ���� ��ġ������ ������ ����.\n");
	for (int i = 0; i < NUMBER; i++) {
		printf("%d. ����%d: %s, ����: %.1f, �浵: %.1f\n", i + 1, i + 1, \
			cityinfo[i].cityName, cityinfo[i].p.latitude, cityinfo[i].p.longitude);
	}

	return 0;
}