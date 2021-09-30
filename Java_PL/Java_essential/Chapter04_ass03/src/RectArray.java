import java.util.Scanner;  // import 문으로 Scanner 클래스 삽입
class Rect{ // Rect 이름으로 클래스 선언
	private int width, height; // private 타입으로 정수형 변수 width와 height 선언
	public Rect(int width, int height) { // public 타입으로 생성자 선언
		this.width = width; // 매개변수 width를 해당 클래스의 width로 저장
		this.height = height; // 매개변수 height를 해당 클래스의 height로 저장
	}
	// public 타입으로 width*height를 정수형으로 반환하는 메소드 선언
	public int getArea() { return width*height; } 
}
public class RectArray { // RectArray 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		// 레퍼런스 변수 scanne의 선언 및 객체 생성
		Scanner scanner = new Scanner(System.in);
		
		// 레퍼런스 배열 변수 rectangle 선언 및 객체 배열 생성
		Rect [] rectangle = new Rect[4];
		
		// 사각형 면적의 합을 저장할 변수 totalArea 선언
		int totalArea = 0;
		
		// for 반복문으로 배열의 크기만큼 너비와 높이 입력받아 사각형들의 면적합 구하기
		for(int i = 0; i < rectangle.length; i++) {
			System.out.print((i+1) + " 너비와 높이 >>"); // 문자열 모니터에 출력
			int width = scanner.nextInt(); // 정수 토큰 읽기
			int height = scanner.nextInt(); // 정수 토큰 읽기
			rectangle[i] = new Rect(width, height); // 배열 원소 객체 생성
			totalArea += rectangle[i].getArea(); // 사각형 면적의 합 누적
		}
		
		// 반복문이 끝난 뒤 문자열 출력
		System.out.println("저장하였습니다...");
		// 사각형들의 면적 합 출력하기
		System.out.println("사각형의 전체 합은 " + totalArea);
		
		scanner.close(); // scanner 스트림 닫기
	}
}