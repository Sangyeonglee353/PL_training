import java.util.Scanner; // import������ Scanner Ŭ���� ����
public class ArraySort { // ArraySort �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		// scanner ��ü ���� �� new�� ������ ���� �Ҵ�
		Scanner scanner = new Scanner(System.in);
		
		int intArray[] = new int[10]; // ���� �迭�� 10�� ũ��� ����
		int temp, indexMin; // �ӽ� ���� ����
		System.out.print("���� 10�� �Է�>>"); // ����Ϳ� ���ڿ� ���
		for(int i = 0; i < intArray.length; i++) // �迭�� ũ�⸸ŭ �ݺ��Ͽ� �迭�� ���� ����
			intArray[i] = scanner.nextInt(); // ���� ��ū�� �о� �迭�� ����
		
		for(int i = 0; i < intArray.length; i++) { // �ּҰ��� ã�� �տ������� �����ϴ� �������� ���·� �ݺ��� ����
			indexMin = i; // �ּҰ��� ������ ��ġ�� ���� ��ġ ����
			for(int j = i+1; j < intArray.length; j++) { // ���� ��ġ ���������� �迭�� ������ �ּҰ��� ã�� ��ġ ����
				if(intArray[indexMin] > intArray[j]) {
					indexMin = j;
				}
			}
			// ���� ��ġ�� �迭���� �ּҰ� ��ġ�� �迭������ ���� 
			temp = intArray[i];
			intArray[i] = intArray[indexMin];
			intArray[indexMin] = temp;
		}
		for(int i = 0; i < intArray.length; i++) // �������� ���ĵ� �迭 ��� 
			System.out.print(intArray[i] + " ");
		
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}