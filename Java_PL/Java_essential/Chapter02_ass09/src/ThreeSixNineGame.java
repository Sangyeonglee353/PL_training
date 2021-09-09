import java.util.Scanner; // import������ Scanner Ŭ���� ����

public class ThreeSixNineGame { // ThreeSixNineGame �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		System.out.print("1~99 ������ ������ �Է��ϼ���>>"); // ����Ϳ� ���ڿ� ���
		
		// Scanner ��ü ����, new�� ������ ���� �Ҵ�
		Scanner scanner = new Scanner(System.in);
		int num = scanner.nextInt(); // ���� ��ū �б�
		if(num < 1 || num > 99) { // 1~99 ���̸� �ʰ��ϴ� ��� ������ ���
			System.out.println("�߸��� �Է��Դϴ�.");
		}
		else {
			int first = num/10; // 10�� �ڸ� �� ���
			int second = num%10; // 1�� �ڸ� �� ���
			if(first % 3 == 0 && second % 3 == 0) { // �� ���� ��� 3�� ����� ���
				System.out.println("�ڼ�¦¦");
			}
			else if(first % 3 == 0 || second % 3 == 0) { // �� �� �� �ϳ��� 3�� ����� ���
				System.out.println("�ڼ�¦");
			}
			else { // �� �� 3�� ����� �ƴ� ���
				System.out.println("�ڼ�����");
			}
		}
		
		scanner.close(); // scanner Ŭ���� �ݱ�
	}
}