import java.util.Scanner; // import문으로 Scanner 클래스 삽입

public class Counter { // Counter 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		System.out.print("돈의 액수를 입력하세요>>"); // 모니터에 문자열 출력
		
		// Scanner 객체 선언, new로 데이터 영역 할당
		Scanner scanner = new Scanner(System.in);
		int m = scanner.nextInt(); // 입력 받은 정수 토큰을 변수 m에 저장
		System.out.print("오만원"+ (m/50000) + "개, "); // 오만원 개수 출력
		m = m % 50000; // 나머지 저장
		System.out.print("만원" + (m/10000) + "개, "); // 만원 개수 출력
		m = m % 10000; // 나머지 저장
		System.out.print("천원" + (m/1000) + "개, "); // 천원 개수 출력
		m = m % 1000; // 나머지 저장
		System.out.print("500원" + (m/500) + "개, "); // 500원 개수 출력
		m = m % 500; // 나머지 저장
		System.out.print("100원" + (m/100) + "개, "); // 100원 개수 출력
		m = m % 100; // 나머지 저장
		System.out.print("10원" + (m/10) + "개, "); // 10원 개수 출력
		m = m % 10; // 나머지 저장
		System.out.print("1원" + m + "개"); // 1원 개수 출력
		
		scanner.close(); // scanner 스트림 닫기
	}
}