import java.util.Scanner; // import������ Scanner Ŭ���� ����

public class Counter { // Counter �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		System.out.print("���� �׼��� �Է��ϼ���>>"); // ����Ϳ� ���ڿ� ���
		
		// Scanner ��ü ����, new�� ������ ���� �Ҵ�
		Scanner scanner = new Scanner(System.in);
		int m = scanner.nextInt(); // �Է� ���� ���� ��ū�� ���� m�� ����
		System.out.print("������"+ (m/50000) + "��, "); // ������ ���� ���
		m = m % 50000; // ������ ����
		System.out.print("����" + (m/10000) + "��, "); // ���� ���� ���
		m = m % 10000; // ������ ����
		System.out.print("õ��" + (m/1000) + "��, "); // õ�� ���� ���
		m = m % 1000; // ������ ����
		System.out.print("500��" + (m/500) + "��, "); // 500�� ���� ���
		m = m % 500; // ������ ����
		System.out.print("100��" + (m/100) + "��, "); // 100�� ���� ���
		m = m % 100; // ������ ����
		System.out.print("10��" + (m/10) + "��, "); // 10�� ���� ���
		m = m % 10; // ������ ����
		System.out.print("1��" + m + "��"); // 1�� ���� ���
		
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}