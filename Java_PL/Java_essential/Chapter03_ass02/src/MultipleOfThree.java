import java.util.Scanner; // import������ Scanner Ŭ���� ����
public class MultipleOfThree { // MultilpleOfThree �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		// scanner ��ü ���� �� new�� ������ ���� �Ҵ�
		Scanner scanner = new Scanner(System.in);
		
		final int SIZE = 10; // ��� SIZE�� 10���� ����
		int intArray[] = new int[SIZE]; // �迭�� ���۷����� �����ϰ� new�� �迭 ���� ������ Ȯ��
		System.out.print("���� 10�� �Է�>>"); // ����Ϳ� ���ڿ� ���
		for(int i = 0; i < intArray.length; i++) // �迭�� ũ�⸸ŭ �ݺ�
			intArray[i] = scanner.nextInt(); // �Է� ���� ���� ��ū�� �迭�� ����
		for(int i = 0; i < intArray.length; i++) // �迭�� ũ�⸸ŭ �ݺ�
			if(intArray[i] % 3 == 0) // �迭�� �� �� 3�� ����� ��� ����Ϳ� ���
				System.out.print(intArray[i] + " ");
		
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}