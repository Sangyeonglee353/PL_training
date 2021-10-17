import java.util.*; // import������ util�� ��� Ŭ���� ����

public class MaxHeight { // MaxHeight �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in); // scanner ��ü ����
		// �Ǽ����� ���԰����� Vector �÷��� ����
		Vector<Double> heightList = new Vector<Double>();
		
		System.out.println("2000~2009����� 1�� ������ Ű(cm)�� �Է�");
		// ����ڷκ��� 1�� ���� Ű�� �Է¹޾� Vector�� ����
		for(int i = 0; i < 10; i++) {
			double height = scanner.nextDouble(); // Ű����κ��� �Ǽ��� �Է�
			heightList.add(height); // Vector �÷��ǿ� ����
		}
		
		double maxHeight = 0; // Ű ������ ���� ����
		int year = 0;         // �ش� �⵵ ���� ����
		for(int i = 0; i < heightList.size()-1; i++) { // ���� Ű�� ���� �ڶ� �⵵ ���
			double temp = heightList.get(i+1) - heightList.get(i);
			if(maxHeight < temp) {
				maxHeight = temp;
				year = i;
			}
		}
		// ���� ����� ���
		System.out.println("���� Ű�� ���� �ڶ� �⵵�� 200" + year + "�� " + maxHeight + "cm");
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}