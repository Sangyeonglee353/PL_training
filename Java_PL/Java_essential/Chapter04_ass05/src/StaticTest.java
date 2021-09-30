class Circle{ // Circle �̸����� Ŭ���� ����
	private int radius; // private Ÿ���� ������ ���� radius ����
	public Circle(int radius) { this.radius = radius; } // ������ ����
	public int getRadius() { return this.radius; } // �������� �����ϴ� �޼ҵ� ����
	public void setRadius(int radius) { this.radius = radius; } // ������ ����
}
class CircleManager { // static �޼ҵ常 ����
	static void copy(Circle src, Circle dest) { // src�� dest�� ����
		dest.setRadius(src.getRadius()); // src�� �������� dest�� ����
	}
	static boolean equals(Circle a, Circle b) { // a�� b�� �������� ������ true ����
		if (a.getRadius() == b.getRadius())
			return true;
		else
			return false;
	}
}
public class StaticTest { // StaticTest �̸����� Ŭ���� ����
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		Circle pizza = new Circle(5); // �������� 5�� �� ����
		Circle waffle = new Circle(1); // �������� 1�� �� ����
		
		boolean res = CircleManager.equals(pizza, waffle); // pizza�� waffle ��
		if(res == true)
			System.out.println("pizza�� waffle ũ�� ����");
		else
			System.out.println("pizza�� waffle ũ�� �ٸ�");
		
		CircleManager.copy(pizza, waffle); // pizza�� waffle�� ����
		res = CircleManager.equals(pizza, waffle); // pizza�� waffle ��
		if(res == true)
			System.out.println("pizza�� waffle ũ�� ����");
		else
			System.out.println("pizza�� waffle ũ�� �ٸ�");
	}
}