import java.util.Scanner;
import java.util.Random;

public class UpAndDown {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		Random r = new Random();
		int k = r.nextInt(100); // 0~99���� ������ ���� ����
		
		int First = 0, Last = 99;
		
		System.out.println("Up & Down�����Դϴ�. ������ ���� ���߾� ������.");
		System.out.println(First + "-" + Last);
		
		int i = 1;
		int check = 0; // ���� �ݺ��� ����
		while(check == 0) {
			System.out.print(i + ">>");
			int input = scanner.nextInt();
			if(input == k) {
				System.out.println("�¾ҽ��ϴ�.");
				i = 1; // �ʱ�ȭ
				System.out.print("�ٽ��Ͻðڽ��ϱ�(y/n)>>");
				if(scanner.next().equals("y")) { // �����
					k = r.nextInt(100); // ���� ���� �ʱ�ȭ
					System.out.println("Up & Down�����Դϴ�. ������ ���� ���߾� ������.");
					First = 0;
					Last = 99;
					System.out.println(First + "-" + Last);
				}
				else { // ����
					check = 1;
					scanner.close(); // scanner ��Ʈ�� �ݱ�
				}
			}
			else if(input < k) { // �Է� ���� ���� ������ ���� ���
				System.out.println("�� ����");
				First = input; // ���� ����
				System.out.println(First + "-" + Last);
				i++; // Ƚ�� ����
			}
			else { // �Է� ���� ���� ������ ū ���
				System.out.println("�� ����");
				Last = input; // ���� ����
				System.out.println(First + "-" + Last);
				i++; // Ƚ�� ����
			}
		}		
	}
}
