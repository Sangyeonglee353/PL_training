public class ArraySum {
	public static void main(String[] args) {
		int intArray[] = new int[10];
		int i = 1, sum = 0;
		while(i < 11) {
			intArray[i-1] = i; // �迭�� ���Ұ��� 1 �۾ƾ� �ϹǷ�
			sum += i;
			i++;
		}
		System.out.println("��� ������ ���� " + sum);
	}
}