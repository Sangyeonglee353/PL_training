import java.util.Scanner; // import������ Scanner Ŭ���� ����

public class Grade { // Grade �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		System.out.print("������ �Է��ϼ���>>"); // ����Ϳ� ���ڿ� ���
		
		// Scanner ��ü ����, new�� ������ ���� �Ҵ�
		Scanner scanner = new Scanner(System.in);
		String rank = scanner.next(); // �Է� ���� ���ڿ��� rank ������ ����
		switch(rank) {
		case "A": case "B": // rank�� A�� B�� ��� Excellent ���ڿ� ���
			System.out.println("Excellent");
			break;
		case "C": case "D": // rank�� C�� D�� ��� Good ���ڿ� ���
			System.out.println("Good");
			break;
		case "F": // rank�� F�� ��� Bye ���ڿ� ���
			System.out.println("Bye");
			break;
		default: // rank�� �� case�� �ش����� �ʴ� ��� Error!! ���ڿ� ���
			System.out.println("Error!!");
		}
		
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}