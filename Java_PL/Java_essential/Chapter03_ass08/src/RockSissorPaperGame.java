import java.util.Scanner; // import������ Scanner Ŭ���� ����
public class RockSissorPaperGame { // RockSissorPaperGame �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		// scanner ��ü ���� �� new�� ������ ���� �Ҵ�
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("��ǻ�Ϳ� ���� ���� �� ������ �մϴ�."); // ����Ϳ� ���ڿ� ���
		String str[] = {"����", "����", "��"}; // str �迭 ����

		while(true) { // while ���� �ݺ��� ����
			System.out.print("���� ���� ��!>>"); // ����Ϳ� ���ڿ� ���
			String User = scanner.next(); // ���ڿ� ��ū �б�
			
			// ��ǻ���� ����, ����, �� ����
			int n = (int)(Math.random()*3); // 0. 1, 2 �߿� ���� ���� ����
					
			if(User.equals("����")){ // ����ڰ� ������ �Է��� ���
				if(str[n].equals("����")) { // ��ǻ�͵� ������ ���
					System.out.println("����� = " + User + ", ��ǻ�� = " + str[n] + ", �����ϴ�.");
				}
				else if(str[n].equals("����")) { // ��ǻ�ʹ� ������ ���
					System.out.println("����� = " + User + ", ��ǻ�� = " + str[n] + ", ��ǻ�Ͱ� �̰���ϴ�.");
				}
				else if(str[n].equals("��")) { // ��ǻ�ʹ� ���� ���
					System.out.println("����� = " + User + ", ��ǻ�� = " + str[n] + ", ����ڰ� �̰���ϴ�.");
				}
			}
			else if(User.equals("����")) { // ����ڰ� ������ �Է��� ���
				if(str[n].equals("����")) { // ��ǻ�ʹ� ������ ���
					System.out.println("����� = " + User + ", ��ǻ�� = " + str[n] + ", ����ڰ� �̰���ϴ�.");
				}
				else if(str[n].equals("����")) { // ��ǻ�ʹ� ������ ���
					System.out.println("����� = " + User + ", ��ǻ�� = " + str[n] + ", �����ϴ�.");
				}
				else if(str[n].equals("��")) { // ��ǻ�ʹ� ���� ���
					System.out.println("����� = " + User + ", ��ǻ�� = " + str[n] + ", ��ǻ�Ͱ� �̰���ϴ�.");
				}
			}
			else if(User.equals("��")) { // ����ڰ� ���� �Է��� ���
				if(str[n].equals("����")) { // ��ǻ�ʹ� ������ ���
					System.out.println("����� = " + User + ", ��ǻ�� = " + str[n] + ", ��ǻ�Ͱ� �̰���ϴ�.");
				}
				else if(str[n].equals("����")) { // ��ǻ�ʹ� ������ ���
					System.out.println("����� = " + User + ", ��ǻ�� = " + str[n] + ", ����ڰ� �̰���ϴ�.");
				}
				else if(str[n].equals("��")) { // ��ǻ�ʹ� ���� ���
					System.out.println("����� = " + User + ", ��ǻ�� = " + str[n] + ", �����ϴ�.");
				}
			}
			else if(User.equals("�׸�")) { // ����ڰ� �׸��� �Է��� ��� ���ڿ� ��� �� ���α׷� ����
				System.out.println("������ �����մϴ�...");
				break; // break ������ while �ݺ��� ����
			}
			else { // ����ڰ� ����, ����, ��, �׸� �̿��� ���ڿ��� �Է��� ��� ������ ���
				System.out.println("�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���");
			}
		}
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}