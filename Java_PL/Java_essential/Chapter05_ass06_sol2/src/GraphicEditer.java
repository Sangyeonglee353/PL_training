import java.util.Scanner; // import문으로 Scanner 클래스 삽입

abstract class Shape{ // 추상 클래스 선언
	private Shape next;
	public Shape() { next = null; }
	public void setNext(Shape obj) { next=obj; }
	public Shape getNext() {return next;}
	public abstract String draw(); // 추상 메소드 선언
}
class Line extends Shape{
	public String draw() { // 메소드 오버라이딩
		// System.out.println("Line");
		return "Line";
	}
}
class Rect extends Shape {
	public String draw() { // 메소드 오버라이딩
		// System.out.println("Rect");
		return "Rect";
	}
}
class Circle extends Shape {
	public String draw() { // 메소드 오버라이딩
		// System.out.println("Circle");
		return "Circle";
	}
}
class Run{
	Shape head;
	Shape tail;
	int count = 0;
	
	// 삽입(1)
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
			System.out.println("잘못된 선택입니다. 다시 입력해주세요");
			break;
		}
		// 리스트에 연결
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
	
	// 삭제(2)
	public void delete(int location) {
		Shape temp = head;
		Shape num = null;
		
		for(int i = 0; i < location-1; i++) {
			if(i == location -2) {
				num = temp; // num는 삭제 전 노드
			}
			temp = temp.getNext(); // temp는 삭제할 노드
		}
		
		if(location == 1) { // 제일 처음 노드 삭제
			if(head == tail) {
				head = null;
				tail = null;
			}
			else {
				head=head.getNext();
			}
		}
		else if(temp == null) {
			System.out.println("삭제할 수 없습니다.");
		}
		else if(temp == tail) {
			tail = num; // tail을 삭제 전 노드값으로 변경
			num.setNext(null);;
		}
		else {
			num.setNext(temp.getNext());
		}
	}
	
	// 모두 보기(3)
	public void show() {
		Shape temp = head;
		if(temp == null) {
			System.out.println("줄력할 도형이 없습니다.");
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
		// 레퍼런스 변수 shapelist의 선언 및 객체 생성 후 인자 전달
		Shape shapelist = null;
		// 레퍼런스 변수 scanner의 선언 및 객체 생성 후 입력을 인자로 전달
		Scanner scanner = new Scanner(System.in);
		// 레퍼런스 변수 run의 선언 및 객체 생성
		Run run = new Run(); 
		boolean Check = true;
		
		while(Check) {
			System.out.print("삽입(1), 삭제(2), 모두 보기(3), 종료(4)>>"); // 문자열 출력
			int menuSelect = scanner.nextInt(); // 정수 토큰 읽기
			
			switch(menuSelect) {
			case 1: // 삽입(1)
				System.out.print("도형 종류 Line(1), Rect(2), Circle(3)>>"); // 문자열 출력
				int shapeSelect = scanner.nextInt(); // 정수 토큰 읽기
				run.insert(shapelist, shapeSelect);
				break;
			case 2: // 삭제(2)
				System.out.print("삭제할 도형의 위치>>");
				int location = scanner.nextInt();
				run.delete(location);
				break;
			case 3: // 모두 보기(3)
				run.show();
				break;
			case 4: // 종료(4)
				System.out.println("프로그램을 종료합니다...");
				Check = false;
				break;
			}
		}
		scanner.close(); // scanner 스트림 닫기
	}
}