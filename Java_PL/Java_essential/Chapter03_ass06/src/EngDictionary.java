import java.util.Scanner; // import������ Scanner Ŭ���� ����
public class EngDictionary { // EngDictionary �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		// scanner ��ü ���� �� new�� ������ ���� �Ҵ�
		Scanner scanner = new Scanner(System.in);
		
		// eng�� kor ���ڿ� �迭 ���� �� �ʱ�ȭ
		String eng[] = { "student", "love", "java", "happy", "future" };
		String kor[] = { "�л�", "���", "�ڹ�", "�ູ��", "�̷�" };
		
		while(true) { // while ���� �ݺ���
			int check = 0; // �ܾ� �˻� Ȯ�� ���� ����
			System.out.print("���� �ܾ �Է��ϼ���>>"); // ����Ϳ� ���ڿ� ���
			String word = scanner.next(); // ���ڿ� ��ū �б�
			if(word.equals("exit")) { // exit�� �Էµ� ��� ���ڿ� ��� �� while �ݺ��� ����
				System.out.println("�����մϴ�...");
				break; // while �ݺ��� ����
			}
			else { // exit �̿��� ���ڰ� ���������� �Էµ� ���
				for(int i = 0 ; i < eng.length; i++) { // �Է°��� eng �迭�� �����ϴ��� �˻�
					if(word.equals(eng[i])) { // eng �迭�� �����Ѵٸ� �ش� ��ġ�� kor �迭�� ���
						System.out.println(kor[i]);
						check = 1; // �ܾ �˻� �Ǿ����� Ȯ���ϱ� ���� 1�� ����
						break; // break ������ for �ݺ��� ����
					}
				}
				if(check == 0) { // �ܾ� �˻��� �ȵ� ��� ������ ���
					System.out.println("�׷� ���� �ܾ �����ϴ�.");	
				}
			}
		}
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}