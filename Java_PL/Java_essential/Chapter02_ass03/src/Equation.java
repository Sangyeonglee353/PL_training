import java.util.Scanner; // import������ Scanner Ŭ���� ����

public class Equation { // Equation �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		System.out.print("x ���� �Է��ϼ���>>"); // ����Ϳ� ���ڿ� ���
		
		// Scanner ��ü ����, new�� ������ ���� �Ҵ�
		Scanner scanner = new Scanner(System.in);
		int x = scanner.nextInt(); // �Է� ���� ���� ��ū�� ���� x�� ����
		System.out.print("x=" + x + ", y=" + (int)(Math.pow(x,2)-3*x+7)); // ����� ���
		
		scanner.close(); // scanner ��ũ�� �ݱ�
	}
}