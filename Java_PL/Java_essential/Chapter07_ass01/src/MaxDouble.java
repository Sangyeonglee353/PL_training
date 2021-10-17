import java.util.*; // import������ util�� Ŭ�������� ��� ����

public class MaxDouble { // MaxDouble �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		// ���۷��� ���� scanner�� ���� �� ��ü ���� �� �Է��� ���ڷ� ����
		Scanner scanner = new Scanner(System.in);
		// �Ǽ����� ���԰����� Vector �÷��� ����
		Vector<Double> d = new Vector<Double>();
		
		// Ű����κ��� 5���� �Ǽ��� �Է¹޾� Vector�� ����
		for(int i = 0; i < 5; i++) {
			double num = scanner.nextDouble(); // Ű����κ��� �Ǽ� �Է�
			d.add(num); // Vector �÷��ǿ� ����
		}
		
		// Vector d�� ��Ҹ� ���� �˻��� Iterator ��ü ����
		Iterator<Double> it = d.iterator();
		double max = d.get(0);
		while(it.hasNext()) { // it�� Vector�� ������ �ݺ�
			double temp = it.next(); // ��� ����. it�� ��� Ÿ���� Double�̹Ƿ� �Ǽ� ����
			if(max < temp) { // �ִ밪 ����
				max = temp;
			}
		}
		
		// ���� ����� ���
		System.out.println("���� ū ���� " + max);
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}

}