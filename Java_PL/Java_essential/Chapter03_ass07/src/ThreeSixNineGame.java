public class ThreeSixNineGame { // ThreeSixNineGame �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		for(int num = 1; num < 100; num++) { // 1���� 99���� �ݺ��� ����
			int First = num/10; // 10�� �ڸ��� ����
			int Second = num%10; // 1�� �ڸ��� ����
			
			if(First == 3 || First == 6 || First == 9) { // 10�� �ڸ��� 3, 6, 9�� ���
				if(Second == 3 || Second == 6 || Second == 9) { // 1�� �ڸ��� 3, 6, 9�� ���
					System.out.println(num + " �ڼ��ι�"); // �ش� ���ڿ� �ڼ��ι��� ���
				}
				else { // 1�� �ڸ��� 3, 6, 9�� �ƴ� ���
					System.out.println(num + " �ڼ��ѹ�"); // �ش� ���ڿ� �ڼ��ѹ��� ���
				}
			}
			else { // 10�� �ڸ��� 3, 6, 9�� �ƴ� ���
				if(Second == 3 || Second == 6 || Second == 9) { // 1�� �ڸ��� 3, 6, 9�� ���
					System.out.println(num + " �ڼ��ѹ�"); // �ش� ���ڿ� �ڼ��ѹ��� ���
				}
			}
		}
	}
}