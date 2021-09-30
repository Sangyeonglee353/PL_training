public class Box { // Box 이름으로 클래스 선언
	private int width, height; // 박스의 너비와 높이
	private char fillChar; // 박스를 그리는 데 사용하는 문자
	public Box() { // 매개 변수 없는 생성자, 10x1의 박스 생성
		this(10,1); // this() 이용하여 완성하라.
	}
	public Box(int width, int height) { // 너비, 높이의 두 매개 변수를 가진 생성자
		this.width = width; // this 레퍼런스를 이용하라.
		this.height = height; // this 레퍼런스를 이용하라.
	}
	public void draw() { // 박스 그리는 메소드
		for(int i = 0 ; i<height; i++) {
			for(int j = 0; j<width; j++) {
				System.out.print(fillChar);
			}
			System.out.println();
		}
	}
	public void fill(char c) { // 박스를 그리는데 사용하는 문자 설정
		this.fillChar = c;
	}
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		Box a = new Box(); // 10x1 사각형
		Box b = new Box(20, 3); // 20x3 사각형
		a.fill('*'); // 문자 설정
		b.fill('%'); // 문자 설정
		a.draw(); // 박스 a 그리기
		b.draw(); // 박스 b 그리기
	}
}