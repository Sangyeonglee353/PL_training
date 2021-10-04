import java.util.Scanner; // import������ Scanner Ŭ���� ����

abstract class Shape{ // �߻� Ŭ���� ����
	private Shape next;
	public Shape() { next = null; }
	public void setNext(Shape obj) { next=obj; }
	public Shape getNext() {return next;}
	public abstract String draw(); // �߻� �޼ҵ� ����
}
class Line extends Shape{
	public String draw() { // �޼ҵ� �������̵�
		// System.out.println("Line");
		return "Line";
	}
}
class Rect extends Shape {
	public String draw() { // �޼ҵ� �������̵�
		// System.out.println("Rect");
		return "Rect";
	}
}
class Circle extends Shape {
	public String draw() { // �޼ҵ� �������̵�
		// System.out.println("Circle");
		return "Circle";
	}
}
class Run{
	Shape head;
	Shape tail;
	int count = 0;
	
	// ����(1)
	public void insert(Shape shapelist, int shapeSelect) {
		switch(shapeSelect) {
		case 1: // Line(1)
			shapelist = new Line();
			break;
		case 2: // Rect(2)
			shapelist = new Rect();
			break;
		case 3: // Circle(3)
			shapelist = new Circle();
			break;
		default:
			System.out.println("�߸��� �����Դϴ�. �ٽ� �Է����ּ���");
			break;
		}
		// ����Ʈ�� ����
		if(head == null) {
			head = shapelist;
			tail = shapelist;
		}
		else {
			tail.setNext(shapelist);
			tail = shapelist;
		}
		count++;
	}
	
	// ����(2)
	public void delete(int location) {
		Shape temp = head;
		Shape num = null;
		
		for(int i = 0; i < location-1; i++) {
			if(i == location -2) {
				num = temp; // num�� ���� �� ���
			}
			temp = temp.getNext(); // temp�� ������ ���
		}
		
		if(location == 1) { // ���� ó�� ��� ����
			if(head == tail) {
				head = null;
				tail = null;
			}
			else {
				head=head.getNext();
			}
		}
		else if(temp == null) {
			System.out.println("������ �� �����ϴ�.");
		}
		else if(temp == tail) {
			tail = num; // tail�� ���� �� ��尪���� ����
			num.setNext(null);;
		}
		else {
			num.setNext(temp.getNext());
		}
	}
	
	// ��� ����(3)
	public void show() {
		Shape temp = head;
		if(temp == null) {
			System.out.println("�ٷ��� ������ �����ϴ�.");
		}
		else {
			while(true) {
				System.out.println(temp.draw());
				if(temp==tail) {
					break;
				}
				temp=temp.getNext();
			}
		}
	}
}

public class GraphicEditer {
	public static void main(String[] args) {
		// ���۷��� ���� shapelist�� ���� �� ��ü ���� �� ���� ����
		Shape shapelist = null;
		// ���۷��� ���� scanner�� ���� �� ��ü ���� �� �Է��� ���ڷ� ����
		Scanner scanner = new Scanner(System.in);
		// ���۷��� ���� run�� ���� �� ��ü ����
		Run run = new Run(); 
		boolean Check = true;
		
		while(Check) {
			System.out.print("����(1), ����(2), ��� ����(3), ����(4)>>"); // ���ڿ� ���
			int menuSelect = scanner.nextInt(); // ���� ��ū �б�
			
			switch(menuSelect) {
			case 1: // ����(1)
				System.out.print("���� ���� Line(1), Rect(2), Circle(3)>>"); // ���ڿ� ���
				int shapeSelect = scanner.nextInt(); // ���� ��ū �б�
				run.insert(shapelist, shapeSelect);
				break;
			case 2: // ����(2)
				System.out.print("������ ������ ��ġ>>");
				int location = scanner.nextInt();
				run.delete(location);
				break;
			case 3: // ��� ����(3)
				run.show();
				break;
			case 4: // ����(4)
				System.out.println("���α׷��� �����մϴ�...");
				Check = false;
				break;
			}
		}
		scanner.close(); // scanner ��Ʈ�� �ݱ�
	}
}