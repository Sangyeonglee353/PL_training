import java.util.Scanner; // import������ Scanner Ŭ���� ����
public class LowAlpha { // LowAlpha �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		// scanner ��ü ���� �� new�� ������ ���� �Ҵ�
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("���ĺ� �� ���ڸ� �Է��ϼ���>>"); // ����Ϳ� ���ڿ� ��� 
		char s = scanner.next().charAt(0); // �Է¹��� ���ڿ� ��ū���� ù��° ���ڸ� ���� s�� ����
		
		for(int i = (int)'a'; i <= (int)s; i++) { // �ƽ�Ű�ڵ忡�� �ҹ��� a = 97���� �����Ѵٴ� ���� �̿��Ͽ� �ݺ����� ����
			                                      // 97�� ���� i�� �ʱⰪ���� ����� ���� ������, int ����ȯ�� �̿��� ǥ��
			for(int j = i; j <= (int)s; j++)      // ù ���� ���ڸ� �ܰ躰�� ���̱� ���� ���� �ݺ������� ����
				System.out.print((char)j);        // ���� j�� �����̹Ƿ� char ����ȯ�� �̿��� ���� ���·� ����Ϳ� ���
			System.out.print("\n");               // �� ������ ������ ���� �ٹٲ� ���
		}
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}