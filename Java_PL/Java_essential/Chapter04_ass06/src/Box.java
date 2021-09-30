public class Box { // Box �̸����� Ŭ���� ����
	private int width, height; // �ڽ��� �ʺ�� ����
	private char fillChar; // �ڽ��� �׸��� �� ����ϴ� ����
	public Box() { // �Ű� ���� ���� ������, 10x1�� �ڽ� ����
		this(10,1); // this() �̿��Ͽ� �ϼ��϶�.
	}
	public Box(int width, int height) { // �ʺ�, ������ �� �Ű� ������ ���� ������
		this.width = width; // this ���۷����� �̿��϶�.
		this.height = height; // this ���۷����� �̿��϶�.
	}
	public void draw() { // �ڽ� �׸��� �޼ҵ�
		for(int i = 0 ; i<height; i++) {
			for(int j = 0; j<width; j++) {
				System.out.print(fillChar);
			}
			System.out.println();
		}
	}
	public void fill(char c) { // �ڽ��� �׸��µ� ����ϴ� ���� ����
		this.fillChar = c;
	}
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		Box a = new Box(); // 10x1 �簢��
		Box b = new Box(20, 3); // 20x3 �簢��
		a.fill('*'); // ���� ����
		b.fill('%'); // ���� ����
		a.draw(); // �ڽ� a �׸���
		b.draw(); // �ڽ� b �׸���
	}
}