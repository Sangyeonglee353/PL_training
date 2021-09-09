import java.util.Scanner; // import문으로 Scanner 클래스 삽입

public class ThreeSixNineGame { // ThreeSixNineGame 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		System.out.print("1~99 사이의 정수를 입력하세요>>"); // 모니터에 문자열 출력
		
		// Scanner 객체 선언, new로 데이터 영역 할당
		Scanner scanner = new Scanner(System.in);
		int num = scanner.nextInt(); // 정수 토큰 읽기
		if(num < 1 || num > 99) { // 1~99 사이를 초과하는 경우 오류문 출력
			System.out.println("잘못된 입력입니다.");
		}
		else {
			int first = num/10; // 10의 자리 수 계산
			int second = num%10; // 1의 자리 수 계산
			if(first % 3 == 0 && second % 3 == 0) { // 두 수가 모두 3의 배수인 경우
				System.out.println("박수짝짝");
			}
			else if(first % 3 == 0 || second % 3 == 0) { // 두 수 중 하나만 3의 배수인 경우
				System.out.println("박수짝");
			}
			else { // 둘 다 3의 배수가 아닌 경우
				System.out.println("박수없음");
			}
		}
		
		scanner.close(); // scanner 클래스 닫기
	}
}