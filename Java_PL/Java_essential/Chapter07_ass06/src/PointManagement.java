import java.util.*; // import������ util�� ��� Ŭ���� ����

public class PointManagement { // PointManagement �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in); // scanner ��ü ����
		// Ű������ ���ڿ�, ������ �������� ���԰����� HashMap �÷��� ����
		HashMap<String, Integer> pointInfo = new HashMap<String, Integer>(); 
		
		System.out.println("** ����Ʈ ���� ���α׷��Դϴ� **");
		System.out.print("�̸��� ����Ʈ �Է�>>");
		String name = scanner.next(); // Ű����κ��� ���ڿ� �Է�
		while(!name.equals("exit")) {
			int point = scanner.nextInt(); // Ű����κ��� ������ �Է�
			if(!pointInfo.containsKey(name)) { // �ؽøʿ� ��ġ�ϴ� Ű�� ���ٸ�
				pointInfo.put(name, point); // �ؽøʿ� ����
			}
			else { // �ؽøʿ� ��ġ�ϴ� Ű�� �ִٸ�
				pointInfo.replace(name, pointInfo.get(name) + point); // ����Ʈ ����
			}
			
			// �ؽø� ���尪 ���
			Set<String> names = pointInfo.keySet(); // HashMap �÷��ǿ��� Ű���� ������
			Iterator<String> it = names.iterator(); 
			while(it.hasNext()) { // it���� ��� Ű ��ŭ �ݺ�
				String customerName = it.next();
				int customerPoint = pointInfo.get(customerName);
				System.out.print("(" + customerName + ", " + customerPoint + ") ");
			}
			System.out.println(""); // �ٹٲ�
			System.out.print("�̸��� ����Ʈ �Է�>>"); // ���� �� �Է�
			name = scanner.next();
		}
		System.out.println("���α׷��� �����մϴ�...");
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}