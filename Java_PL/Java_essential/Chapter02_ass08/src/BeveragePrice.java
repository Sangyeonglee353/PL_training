import java.util.Scanner; // import������ Scanner Ŭ���� ����

public class BeveragePrice { // BeveragePrice �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		System.out.print("Ŀ�� �ֹ��ϼ���>>"); // ����Ϳ� ���ڿ� ���
		
		// Scanner ��ü ����, new�� ������ ���� �Ҵ�
		Scanner scanner = new Scanner(System.in);
		String coffee = scanner.next(); // ���ڿ� ��ū �б�
		int cnt = scanner.nextInt(); // ���� ��ū �б�
		if(coffee.equals("����������")) { // ������������ ���
			System.out.println(2000*cnt + "���Դϴ�.");
		}
		else if(coffee.equals("�Ƹ޸�ī��")) { // �Ƹ޸�ī���� ���
			System.out.println(2500*cnt + "���Դϴ�.");
		}
		else if(coffee.equals("īǪġ��")) { // īǪġ���� ���
			System.out.println(3000*cnt + "���Դϴ�.");
		}
		else if(coffee.equals("ī���")) { // ī����� ��� 
			System.out.println(3500*cnt + "���Դϴ�.");
		}
		else { // Ŀ�� ��Ͽ� ���� ��� ���� ���� ���
			System.out.println("�˼��մϴ�. ���� ���Դ� �ش� Ŀ�Ǹ� �Ǹ����� �ʽ��ϴ�.");
		}
		
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}