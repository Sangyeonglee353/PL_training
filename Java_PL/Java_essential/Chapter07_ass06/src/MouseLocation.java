import java.util.*; // import������ util�� ��� Ŭ���� ����

class Location{ // Location �̸����� Ŭ���� ����
	private int x, y;
	public Location(int x, int y) { // ������ ����
		this.x = x;
		this.y = y;
	}
	public double distance(Location b) { // �Ÿ� ��� �޼ҵ� ����
		double d = (x - b.x) * (x - b.x) + (y - b.y)*(y - b.y);
		return Math.sqrt(d);
	}
}
public class MouseLocation { // MouseLocation �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in); // scanner ��ü ����
		ArrayList<Location> mouseLocation = new ArrayList<Location>();
		
		mouseLocation.add(new Location(0, 0)); // ���� ��ġ ����
		// ����ڷκ��� ��ġ �Է� �ޱ�
		System.out.println("�㰡 �̵��� ��ġ(x,y)�� 5�� �Է��϶�.");
		for(int i = 0; i < 5; i++) {
			System.out.print(">> ");
			int inputX = scanner.nextInt();
			int inputY = scanner.nextInt();
			mouseLocation.add(new Location(inputX, inputY));
		}
		mouseLocation.add(new Location(0, 0)); // ���� ��ġ ����
		
		// �� �̵� �Ÿ� ���
		double sum = 0.0;
		for(int i = 0; i < mouseLocation.size()-1; i++) {
			// Location(i)�� Location(i+1) ������ �̵� �Ÿ�
			double d = mouseLocation.get(i).distance(mouseLocation.get(i+1));
			sum += d;
		}
		// ���� ����� ���
		System.out.println("�� �̵� �Ÿ��� " + sum);
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}