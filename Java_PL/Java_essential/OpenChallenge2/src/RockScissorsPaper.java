import java.util.Scanner;
public class RockScissorsPaper {
	public static void main(String[] args) {
		System.out.println("���� ���� �� �����Դϴ�. ����, ����, �� �߿��� �Է��ϼ���");
		
		Scanner scanner = new Scanner(System.in);
		System.out.print("ö�� >> ");
		String player1 = scanner.next();
		System.out.print("���� >> ");
		String player2 = scanner.next();
		if(player1.equals("����")) {
			if(player2.equals("����")) {
				System.out.println("���� �����ϴ�.");
			}
			else if(player2.equals("����")) {
				System.out.println("ö���� �̰���ϴ�.");
			}
			else if(player2.equals("��")) {
				System.out.println("���� �̰���ϴ�.");
			}
			else {
				System.out.println("�߸��� �Է��Դϴ�!!");
			}
		}
		else if(player1.equals("����")) {
			if(player2.equals("����")) {
				System.out.println("���� �̰���ϴ�.");
			}
			else if(player2.equals("����")) {
				System.out.println("���� �����ϴ�.");
			}
			else if(player2.equals("��")) {
				System.out.println("ö���� �̰���ϴ�.");
			}
			else {
				System.out.println("�߸��� �Է��Դϴ�!!");
			}
		}
		else if(player1.equals("��")) {
			if(player2.equals("����")) {
				System.out.println("ö���� �̰���ϴ�.");
			}
			else if(player2.equals("����")) {
				System.out.println("���� �̰���ϴ�.");
			}
			else if(player2.equals("��")) {
				System.out.println("���� �����ϴ�.");
			}
			else {
				System.out.println("�߸��� �Է��Դϴ�!!");
			}
		}
		else {
			System.out.println("�߸��� �Է��Դϴ�!!");
		}
		scanner.close();
	
	}
}
