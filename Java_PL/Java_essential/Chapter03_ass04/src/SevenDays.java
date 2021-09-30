import java.util.Scanner; // import������ Scanner Ŭ���� ����
import java.util.InputMismatchException; // import������ ���� Ŭ���� ����
public class SevenDays { // SevenDays �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		// scanner ��ü ���� �� new�� ������ ���� �Ҵ�
		Scanner scanner = new Scanner(System.in);
		
		// ���� �迭 day�� �����ϰ� �ʱ�ȭ
		char day[] = {'��', '��', 'ȭ', '��', '��', '��', '��'};
		while(true) { // while ���� Ȱ���� ���� �ݺ���
			System.out.print("������ �Է��ϼ���>>"); // ����Ϳ� ���ڿ� ���
			try { // ���๮ �Է�
				int num = scanner.nextInt(); // ���� ��ū �б�
				if(num > 0) // ���� ������ �Է������� ������ ���
					System.out.println(day[num % day.length]);
				else if(num == 0){ // 0�� �Է½� ������ ���
					System.out.println("���� ������ �Է����ּ���!!");
				}
				else { // ���� �Է½� �޽��� ��� �� ���α׷� ����
					System.out.println("���α׷� �����մϴ�...");
					break; // break ������ �ݺ��� ����
				}
			}
			catch(InputMismatchException e) { // ������ �Է����� ���� ���ܰ� �߻����� �� ������ ���
				System.out.println("���! ���� �Է����� �ʾҽ��ϴ�.");
				scanner.next(); // �Է� ��Ʈ���� �ִ� ������ �ƴ� ��ū�� ������.
				continue; // ���� ����
			}
		}
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}