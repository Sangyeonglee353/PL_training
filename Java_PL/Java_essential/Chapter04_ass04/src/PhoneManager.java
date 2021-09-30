import java.util.Scanner; // import������ Scanner Ŭ���� ����
class Phone { // Phone �̸����� Ŭ���� ����
	private String name, tel; // private Ÿ������ ���ڿ� ���� name�� tel ����
	public Phone(String name, String tel) { // public Ÿ������ ������ ����
		this.name = name; // �Ű����� name�� Ŭ������ name���� ����
		this.tel = tel;   // �Ű����� tel�� Ŭ������ tel�� ����
	}
	public String getName() { return name; } // Ŭ������ name ������ ���� 
	public String getTel() { return tel; }   // Ŭ������ tel ������ ����
}
public class PhoneManager { // PhoneManager �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		// �������� ���� scanner�� ���� �� ��ü ����
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("�ο���>>"); // ���ڿ��� ����Ϳ� ���
		int num = scanner.nextInt(); // ���� ��ū �б�
		// ���۷��� �迭 ���� customer�� ���� �� ��ü �迭 ����
		Phone [] customer = new Phone[num];
		// ��ü �迭�� ũ�⸸ŭ �̸��� ��ȭ��ȣ�� �Է¹޾� �迭 ���� ��ü ����
		for(int i = 0; i < customer.length; i++) {
			// ���ڿ��� ����Ϳ� ���
			System.out.print("�̸��� ��ȭ��ȣ(��ȣ�� ���������� �Է�)>>");
			String name = scanner.next(); // ���ڿ� ��ū �б�
			String tel = scanner.next();  // ���ڿ� ��ū �б�
			customer[i] = new Phone(name, tel); // �迭 ���� ��ü ����
		}
		System.out.println("����Ǿ����ϴ�..."); // ���ڿ��� ����Ϳ� ���
		
		while (true) { // while ���� �ݺ��� ����
			int check = 0; // �̸� �˻� Ȯ�� ���� ����
			System.out.print("�˻��� �̸�>>"); // ���ڿ��� ����Ϳ� ���
			String searchName = scanner.next(); // ���ڿ� ��ū �б�
			if(searchName.equals("exit")) { // exit�� �Էµ� ��� ����
				System.out.print("���α׷��� �����մϴ�..."); // ���Ṯ ���
				break; // while �ݺ��� ����
			}
			else { // exit �̿��� ���ڰ� ���������� �Էµ� ���
				// �˻� �̸��� ��ü �迭�� �ִ��� �˻��ϱ� ���� �迭�� ũ�⸸ŭ �ݺ��� ����
				for(int i = 0; i < customer.length; i++) {
					// �˻� �̸��� ��ü �迭 ���ҿ� �ִ��� �˻� 
					if(customer[i].getName().equals(searchName)) {
						// �˻� �̸��� �ִ� ��� �ش� ���� ���
						System.out.println(customer[i].getName() + "�� ��ȣ�� " + customer[i].getTel() + " �Դϴ�.");
						check = 1; // �̸��� �˻��Ǿ����� ǥ���ϱ� ���� 1�� ����
						break; // for �ݺ��� ����
					}
				}
				if(check == 0) { // �̸� �˻��� �ȵ� ��� ������ ���
					System.out.println(searchName + " �� �����ϴ�.");
				}
			}
		}
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}