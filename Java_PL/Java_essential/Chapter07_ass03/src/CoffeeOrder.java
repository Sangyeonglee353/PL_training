import java.util.*; // import������ util�� ��� Ŭ���� ����

public class CoffeeOrder { // CoffeeOrder �̸����� Ŭ���� ����
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in); // scanner ��ü ����
		// Ű�� ���ڿ�, ������ �������� ���� ������ HashMap �÷��� ����
		HashMap<String, Integer> h = new HashMap<String, Integer>();
		
		// HashMap �÷��ǿ� �� ����
		h.put("����������", 2000);
		h.put("�Ƹ޸�ī��", 2500);
		h.put("īǪġ��", 3000);
		h.put("ī���", 3500);
				
		System.out.println("����������, �Ƹ޸�ī��, īǪġ��, ī��� �ֽ��ϴ�");
		// �ֹ��ޱ�
		System.out.print("�ֹ� >> ");
		String order = scanner.next();
		while(!order.equals("�׸�")) { // �׸��� �Է��� ������ ��� �ֹ��ޱ�
			switch(order) {
			case "����������":
				System.out.println(order + "�� " + h.get(order) + "�Դϴ�.");
				break;
			case "�Ƹ޸�ī��":
				System.out.println(order + "�� " + h.get(order) + "�Դϴ�.");
				break;
			case "īǪġ��":
				System.out.println(order + "�� " + h.get(order) + "�Դϴ�.");
				break;
			case "ī���":
				System.out.println(order + "�� " + h.get(order) + "�Դϴ�.");
				break;
			default:
				System.out.println(order + "�� �Ǹ����� �ʽ��ϴ�. �ٽ� ����ּ���.");
				
			}
			System.out.print("�ֹ� >> ");
			order = scanner.next();
		}
		
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}