import java.util.Scanner; // import������ Scanner Ŭ���� ����

public class BuildingHeight { // BuildingHeight �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		final int HEIGHT = 5; // �� ���� ���̸� HEIGHT ����� ����
		System.out.print("�� ������ �Է��ϼ���>>"); // ����Ϳ� ���ڿ� ���
		
		// Scanner ��ü ����, new�� ������ ���� �Ҵ� 
		Scanner scanner = new Scanner(System.in);
		int floor = scanner.nextInt(); // �Է¹��� ���� ��ū�� floor ������ ����
		System.out.println(floor*HEIGHT + "m �Դϴ�."); // �ǹ��� ���� ���
		
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}
