import java.util.Scanner; // import문으로 Scanner 클래스 삽입

public class Equation { // Equation 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		System.out.print("x 값을 입력하세요>>"); // 모니터에 문자열 출력
		
		// Scanner 객체 생성, new로 데이터 영역 할당
		Scanner scanner = new Scanner(System.in);
		int x = scanner.nextInt(); // 입력 받은 정수 토큰을 변수 x에 저장
		System.out.print("x=" + x + ", y=" + (int)(Math.pow(x,2)-3*x+7)); // 결과값 출력
		
		scanner.close(); // scanner 스크림 닫기
	}
}