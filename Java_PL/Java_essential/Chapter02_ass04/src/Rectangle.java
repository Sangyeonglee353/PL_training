import java.util.Scanner; // import������ Scanner Ŭ���� ����

public class Rectangle { // Rectangle �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		final int x1 = 50, y1 = 50; // x1, y1�� ����� ����
		final int x2 = 100, y2 = 100; // x2, y2�� ����� ����
		System.out.print("�� (x,y)�� ��ǥ�� �Է��ϼ���>>"); // ����Ϳ� ���ڿ� ���
		
		// Scanner ��ü ����, new�� ������ ���� �Ҵ�
		Scanner scanner = new Scanner(System.in);
		int x = scanner.nextInt(); // ���� ��ū �б�
		int y = scanner.nextInt(); // ���� ��ū �б�
		if(x >= x1 && x <= x2) { // x�� �簢�� ���ο� �ִ��� �˻�
			if(y >= y1 && y <= y2) { // y�� �簢�� ���ο� �ִ��� �˻�
				// �簢�� ���� �ִٴ� ���ڿ� ���
				System.out.println("��(" + x + "," + y + ")�� (" + x1 + "," + y1 + ")�� "
						+ "("+ x2 + "," + y2 + ")�� �簢�� ���� �ֽ��ϴ�.");
			}
			else {
				// �簢�� �ۿ� �ִٴ� ���ڿ� ���
				System.out.println("��(" + x + "," + y + ")�� (" + x1 + "," + y1 + ")�� "
						+ "("+ x2 + "," + y2 + ")�� �簢�� �ۿ� �ֽ��ϴ�.");
			}
		}else {
			// �簢�� �ۿ� �ִٴ� ���ڿ� ���
			System.out.println("��(" + x + "," + y + ")�� (" + x1 + "," + y1 + ")�� "
					+ "("+ x2 + "," + y2 + ")�� �簢�� �ۿ� �ֽ��ϴ�.");
		}
		
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}