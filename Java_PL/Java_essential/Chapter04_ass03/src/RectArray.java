import java.util.Scanner;  // import ������ Scanner Ŭ���� ����
class Rect{ // Rect �̸����� Ŭ���� ����
	private int width, height; // private Ÿ������ ������ ���� width�� height ����
	public Rect(int width, int height) { // public Ÿ������ ������ ����
		this.width = width; // �Ű����� width�� �ش� Ŭ������ width�� ����
		this.height = height; // �Ű����� height�� �ش� Ŭ������ height�� ����
	}
	// public Ÿ������ width*height�� ���������� ��ȯ�ϴ� �޼ҵ� ����
	public int getArea() { return width*height; } 
}
public class RectArray { // RectArray �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		// ���۷��� ���� scanne�� ���� �� ��ü ����
		Scanner scanner = new Scanner(System.in);
		
		// ���۷��� �迭 ���� rectangle ���� �� ��ü �迭 ����
		Rect [] rectangle = new Rect[4];
		
		// �簢�� ������ ���� ������ ���� totalArea ����
		int totalArea = 0;
		
		// for �ݺ������� �迭�� ũ�⸸ŭ �ʺ�� ���� �Է¹޾� �簢������ ������ ���ϱ�
		for(int i = 0; i < rectangle.length; i++) {
			System.out.print((i+1) + " �ʺ�� ���� >>"); // ���ڿ� ����Ϳ� ���
			int width = scanner.nextInt(); // ���� ��ū �б�
			int height = scanner.nextInt(); // ���� ��ū �б�
			rectangle[i] = new Rect(width, height); // �迭 ���� ��ü ����
			totalArea += rectangle[i].getArea(); // �簢�� ������ �� ����
		}
		
		// �ݺ����� ���� �� ���ڿ� ���
		System.out.println("�����Ͽ����ϴ�...");
		// �簢������ ���� �� ����ϱ�
		System.out.println("�簢���� ��ü ���� " + totalArea);
		
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}