import java.util.Scanner; // import������ Scanner Ŭ���� ����

public class LogicalOperation { // LogicalOperation �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		System.out.print("�� ������ �Է��ϼ���>>"); // ����Ϳ� ���ڿ� ���
		
		// Scanner ��ü ����, new�� ������ ���� �Ҵ�
		Scanner scanner = new Scanner(System.in);
		boolean a = scanner.nextBoolean(); // ù ��° �� �� �б�
		String op = scanner.next(); // �� ������(AND �Ǵ� OR)�� ���ڿ��� �б�
		boolean b = scanner.nextBoolean(); // �� ��° �� �� �б�
		
		switch(op) {
		case "AND": // op�� AND��� AND ����
			System.out.println(a && b); // �� ���� ��� ���
			break;
		case "OR": // op�� OR��� OR ����
			System.out.println(a || b); // �� ���� ��� ���
			break;
		default: // �����ڰ� �ش����� �ʴ� ��� ���� ���ڿ� ���
			System.out.println("�߸��� �� �������Դϴ�.");
			break;
		}
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}