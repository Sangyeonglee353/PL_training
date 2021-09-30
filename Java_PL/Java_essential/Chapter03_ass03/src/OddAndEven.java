import java.util.Scanner; // import������ Scanner Ŭ���� ����
import java.util.InputMismatchException; // import������ ���� Ŭ���� ����
public class OddAndEven { // OddAndEven �̸�����  Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		// scanner ��ü ���� �� new�� ������ ���� �Ҵ�
		Scanner scanner = new Scanner(System.in);
		try { // ���๮ �Է�
			System.out.print("������ �Է��ϼ���>>"); // ����Ϳ� ���ڿ� ���
			int num = scanner.nextInt(); // ���� ��ū �б�
			if(num % 2 == 0) // ¦���� ��� ¦�� ���
				System.out.println("¦");
			else // Ȧ���� ��� Ȧ�� ���
				System.out.println("Ȧ");
		}
		catch(InputMismatchException e) { // ������ �ƴ� ���ڸ� �Է��� ���(����) �߻��� ������ ���
			System.out.println("���� �Է����� �ʾ� ���α׷� �����մϴ�.");
		}
		finally { // �׻� �������� ����
			scanner.close(); // scanner ��Ʈ�� �ݱ�
		}
	}
}