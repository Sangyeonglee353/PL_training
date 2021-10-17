import java.util.*; // import������ util Ŭ������ ��� ����

public class GradeConverter { // GradeConverter �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in); // scanner ��ü ����
		// ���ڿ��� ���԰����� ArrayList �÷��� ����
		ArrayList<String> list = new ArrayList<String>();
		
		// ���ڿ� ���
		System.out.print("�� ĭ���� �и��Ͽ� 5 ���� ������ �Է�(A/B/C/D/E/F)>>");
		// Ű����κ��� 5���� ���ڿ��� �Է¹޾� ArrayList�� ����
		for(int i = 0; i < 5; i++) {
			String grade = scanner.next(); // Ű����κ��� ���ڿ� �Է�
			list.add(grade); // ArrayList �÷��ǿ� ����
		}
		
		// ArrayList �÷����� ũ�⸸ŭ ���� ��ȯ�Ͽ� ���
		for(int i = 0; i < list.size(); i++) {
			switch(list.get(i)) {
			case "A":
				System.out.print("4.0");
				break;
			case "B":
				System.out.print("3.0");
				break;
			case "C":
				System.out.print("2.0");
				break;
			case "D":
				System.out.print("1.0");
				break;
			case "F":
				System.out.print("0.0");
				break;
			default:
				System.out.print("�߸��� �Է��Դϴ�.");
			}
			System.out.print(" ");
		}
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}