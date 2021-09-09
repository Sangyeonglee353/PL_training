import java.util.Scanner; // import문으로 Scanner 클래스 삽입

public class Grade { // Grade 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		System.out.print("학점을 입력하세요>>"); // 모니터에 문자열 출력
		
		// Scanner 객체 선언, new로 데이터 영역 할당
		Scanner scanner = new Scanner(System.in);
		String rank = scanner.next(); // 입력 받은 문자열을 rank 변수에 저장
		switch(rank) {
		case "A": case "B": // rank가 A나 B인 경우 Excellent 문자열 출력
			System.out.println("Excellent");
			break;
		case "C": case "D": // rank가 C나 D인 경우 Good 문자열 출력
			System.out.println("Good");
			break;
		case "F": // rank가 F인 경우 Bye 문자열 출력
			System.out.println("Bye");
			break;
		default: // rank가 위 case에 해당하지 않는 경우 Error!! 문자열 출력
			System.out.println("Error!!");
		}
		
		scanner.close(); // scanner 스트림 닫기
	}
}