#include "time.h"

int main() {
	// C++ friend
	// ���� ������: �� ���� �ǿ����ڸ� �䱸�ϴ� ������
	/*Time day1(1, 40);
	Time day2(2, 30);
	
	day1.show();
	day2.show();
	
	Time total;*/
	// operator+
	// �� ���� ��ü�� ���ϴ� ����
	// total = day1.sum(day2);
	// total = day1.operator+(day2);
	// total = day1 + day2;
	// total.show();

	// operator*
	// �ϳ��� ��ü�� ������(int) Ÿ���� ���ϴ� ����
	// �����ε����� �ذ� �Ұ�
	// ���� friend �Լ��� ����Ͽ� �ذ�

	Time t1(1, 20);
	Time t2;

	// �Ʒ��� ��� �Ű������� ������ �ٸ��� ������ �߻��Ѵ�.
	// t2 = 3 * t1;
	t2 = operator*(3, t1);
	t2.show();
	
	return 0;
}