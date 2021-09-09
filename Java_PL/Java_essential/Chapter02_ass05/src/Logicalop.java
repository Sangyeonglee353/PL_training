import java.util.Scanner; // import문으로 Scanner 클래스 삽입

public class Logicalop { // Logicalop 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		System.out.print("논리 연산을 입력하세요>>"); // 모니터에 문자열 출력
		
		// Scanner 객체 생성, new로 데이터 영역 할당
		Scanner scanner = new Scanner(System.in);
		boolean a = scanner.nextBoolean(); // 첫 번째 논리 값 읽기
		String op = scanner.next(); // 논리 연산자(AND 또는 OR)를 문자열로 읽기
		boolean b = scanner.nextBoolean(); // 두 번째 논리 값 읽기
		switch(op) {
		case "AND": // op가 AND라면 false를 출력
			System.out.println("false"); 
		case "OR": // op가 OR라면 true를 출력
			System.out.println("true");
		}
		
		scanner.close(); // scanner 스트림 닫기
	}
}