import java.util.Scanner; // import문으로 Scanner 클래스 삽입
import java.util.InputMismatchException; // import문으로 예외 클래스 삽입
public class OddAndEven { // OddAndEven 이름으로  클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		// scanner 객체 선언 및 new로 데이터 영역 할당
		Scanner scanner = new Scanner(System.in);
		try { // 실행문 입력
			System.out.print("정수를 입력하세요>>"); // 모니터에 문자열 출력
			int num = scanner.nextInt(); // 정수 토큰 읽기
			if(num % 2 == 0) // 짝수인 경우 짝을 출력
				System.out.println("짝");
			else // 홀수인 경우 홀을 출력
				System.out.println("홀");
		}
		catch(InputMismatchException e) { // 정수가 아닌 문자를 입력한 경우(예외) 발생시 오류문 출력
			System.out.println("수를 입력하지 않아 프로그램 종료합니다.");
		}
		finally { // 항상 마지막에 실행
			scanner.close(); // scanner 스트림 닫기
		}
	}
}