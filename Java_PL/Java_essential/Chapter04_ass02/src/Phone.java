import java.util.Scanner; // import������ Scanner Ŭ���� ����
public class Phone { // Phone �̸��� Ŭ���� ����
	private String name, tel; // private Ÿ������ ���ڿ� ���� name�� tel ����
	public Phone(String name, String tel) { // public Ÿ������ ������ ����
		this.name = name;  // �Ű����� name�� Ŭ������ name ������ ����
		this.tel = tel;    // �Ű����� tel�� Ŭ������ tel ������ ����
	}
	public String getName() { return name; } // Ŭ������ name ������ ����
	public String getTel() { return tel; }   // Ŭ������ tel ������ ����
	
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		// ���۷��� ���� scanner�� ���� �� ��ü ����
		Scanner scanner = new Scanner(System.in);
		// ���۷��� �迭 ���� member ���� �� ��ü �迭 ����
		Phone [] member = new Phone[2];
		// for �ݺ������� �迭 ���� ��ü ����
		for(int i = 0; i < member.length; i++) {
			System.out.print("�̸��� ��ȭ��ȣ �Է� >>");
			String name = scanner.next(); // ���ڿ� ��ū �б�
			String tel = scanner.next(); // ���ڿ� ��ū �б�
			// �迭 ���� ��ü ����
			member[i] = new Phone(name, tel);
		}
		
		// for �ݺ������� ��ü �迭 ���
		for(int i = 0; i < member.length; i++) {
			System.out.println(member[i].getName() + "�� ��ȣ " + member[i].getTel());
		}
		
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}