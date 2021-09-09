import java.util.Scanner; // import문으로  Scanner 클래스 삽입

public class Addint { // Addint 이름의 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		System.out.print("두 정수를 입력하세요>>"); // 모니터에 문자열 출력
	
	// Scanner 객체 생성, new로 데이터 영역 할당
	Scanner scanner = new Scanner(System.in); 
	int a = scanner.nextInt(); // 정수 토큰 읽기
	int b = scanner.nextInt(); // 정수 토큰 읽기
	System.out.println(a+ "+" + b + "은 " + (a+b)); // 정수의 합 출력하기
	
	scanner.close(); // scanner 스트림 닫기
	}
}