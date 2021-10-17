import java.util.*; // import������ util�� ��� Ŭ���� ����

public class MaxNations { // MaxNations �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in); // scanner ��ü ����
		// Ű�� ���ڿ�, ������ �������� ���԰����� HashMap �÷��� ����
		HashMap<String, Integer> nations = new HashMap<String, Integer>();
		
		System.out.println("���� �̸��� �α��� 5�� �Է��ϼ���. (��: Korea 5000)");
		for(int i = 0; i < 5; i++) {
			String nation = scanner.next(); // Ű����κ��� ���ڿ� �Է�
			int population = scanner.nextInt(); // Ű����κ��� ������ �Է�
			nations.put(nation, population); // HashMap �÷��ǿ� ����
		}
		
		String maxNation = ""; // ���� ���� �α��� ����
		int maxPopulation = 0; // ���� ���� �α�
		Set<String> names = nations.keySet(); // HashMap �÷��ǿ��� Ű���� ������
		Iterator<String> it = names.iterator(); 
		while(it.hasNext()) { // it���� ��� Ű��ŭ �ݺ�
			String name = it.next(); // Ű�� �����̸�
			int num = nations.get(name); // �ش� ������ �α� ��
			if(maxPopulation < num) { // ���� �α��� ���� ���� ����
				maxNation = name;
				maxPopulation = num;
			}
		}
		// ���� ����� ���
		System.out.println("���� �α��� ���� ����� (" + maxNation + ", " + maxPopulation + ")");
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}