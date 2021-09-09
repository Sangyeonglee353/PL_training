import java.util.Scanner; // import문으로 Scanner 클래스 삽입

public class BuildingHeight { // BuildingHeight 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		final int HEIGHT = 5; // 한 층의 높이를 HEIGHT 상수로 정의
		System.out.print("몇 층인지 입력하세요>>"); // 모니터에 문자열 출력
		
		// Scanner 객체 생성, new로 데이터 영역 할당 
		Scanner scanner = new Scanner(System.in);
		int floor = scanner.nextInt(); // 입력받은 정수 토큰을 floor 변수에 저장
		System.out.println(floor*HEIGHT + "m 입니다."); // 건물의 높이 출력
		
		scanner.close(); // scanner 스트림 닫기
	}
}
