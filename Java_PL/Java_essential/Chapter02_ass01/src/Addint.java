import java.util.Scanner; // import������  Scanner Ŭ���� ����

public class Addint { // Addint �̸��� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		System.out.print("�� ������ �Է��ϼ���>>"); // ����Ϳ� ���ڿ� ���
	
	// Scanner ��ü ����, new�� ������ ���� �Ҵ�
	Scanner scanner = new Scanner(System.in); 
	int a = scanner.nextInt(); // ���� ��ū �б�
	int b = scanner.nextInt(); // ���� ��ū �б�
	System.out.println(a+ "+" + b + "�� " + (a+b)); // ������ �� ����ϱ�
	
	scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}