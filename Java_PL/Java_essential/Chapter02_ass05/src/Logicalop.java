import java.util.Scanner; // import������ Scanner Ŭ���� ����

public class Logicalop { // Logicalop �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		System.out.print("�� ������ �Է��ϼ���>>"); // ����Ϳ� ���ڿ� ���
		
		// Scanner ��ü ����, new�� ������ ���� �Ҵ�
		Scanner scanner = new Scanner(System.in);
		boolean a = scanner.nextBoolean(); // ù ��° �� �� �б�
		String op = scanner.next(); // �� ������(AND �Ǵ� OR)�� ���ڿ��� �б�
		boolean b = scanner.nextBoolean(); // �� ��° �� �� �б�
		switch(op) {
		case "AND": // op�� AND��� false�� ���
			System.out.println("false"); 
		case "OR": // op�� OR��� true�� ���
			System.out.println("true");
		}
		
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}