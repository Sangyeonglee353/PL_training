import java.util.Scanner; // import문으로 Scanner 클래스 삽입
import java.util.InputMismatchException; // import문으로 예외 클래스 삽입
public class SevenDays { // SevenDays 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		// scanner 객체 선언 및 new로 데이터 영역 할당
		Scanner scanner = new Scanner(System.in);
		
		// 문자 배열 day를 생성하고 초기화
		char day[] = {'일', '월', '화', '수', '목', '금', '토'};
		while(true) { // while 문을 활용한 무한 반복문
			System.out.print("정수를 입력하세요>>"); // 모니터에 문자열 출력
			try { // 실행문 입력
				int num = scanner.nextInt(); // 정수 토큰 읽기
				if(num > 0) // 양의 정수를 입력했을이 요일을 출력
					System.out.println(day[num % day.length]);
				else if(num == 0){ // 0을 입력시 오류문 출력
					System.out.println("양의 정수를 입력해주세요!!");
				}
				else { // 음수 입력시 메시지 출력 및 프로그램 종료
					System.out.println("프로그램 종료합니다...");
					break; // break 문으로 반복문 종료
				}
			}
			catch(InputMismatchException e) { // 정수를 입력하지 않은 예외가 발생했을 시 오류문 출력
				System.out.println("경고! 수를 입력하지 않았습니다.");
				scanner.next(); // 입력 스트림에 있는 정수가 아닌 토큰을 버린다.
				continue; // 다음 루프
			}
		}
		scanner.close(); // scanner 스트림 닫기
	}
}