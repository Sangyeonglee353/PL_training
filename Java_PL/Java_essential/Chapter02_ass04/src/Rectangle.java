import java.util.Scanner; // import문으로 Scanner 클래스 삽입

public class Rectangle { // Rectangle 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		final int x1 = 50, y1 = 50; // x1, y1을 상수로 정의
		final int x2 = 100, y2 = 100; // x2, y2을 상수로 정의
		System.out.print("점 (x,y)의 좌표를 입력하세요>>"); // 모니터에 문자열 출력
		
		// Scanner 객체 생성, new로 데이터 영역 할당
		Scanner scanner = new Scanner(System.in);
		int x = scanner.nextInt(); // 정수 토큰 읽기
		int y = scanner.nextInt(); // 정수 토큰 읽기
		if(x >= x1 && x <= x2) { // x가 사각형 내부에 있는지 검사
			if(y >= y1 && y <= y2) { // y가 사각형 내부에 있는지 검사
				// 사각형 내에 있다는 문자열 출력
				System.out.println("점(" + x + "," + y + ")은 (" + x1 + "," + y1 + ")과 "
						+ "("+ x2 + "," + y2 + ")의 사각형 내에 있습니다.");
			}
			else {
				// 사각형 밖에 있다는 문자열 출력
				System.out.println("점(" + x + "," + y + ")은 (" + x1 + "," + y1 + ")과 "
						+ "("+ x2 + "," + y2 + ")의 사각형 밖에 있습니다.");
			}
		}else {
			// 사각형 밖에 있다는 문자열 출력
			System.out.println("점(" + x + "," + y + ")은 (" + x1 + "," + y1 + ")과 "
					+ "("+ x2 + "," + y2 + ")의 사각형 밖에 있습니다.");
		}
		
		scanner.close(); // scanner 스트림 닫기
	}
}