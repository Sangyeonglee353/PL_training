import java.util.Scanner; // import문으로 Scanner 클래스 삽입
public class LowAlpha { // LowAlpha 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		// scanner 객체 선언 및 new로 데이터 영역 할당
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("알파벳 한 문자를 입력하세요>>"); // 모니터에 문자열 출력 
		char s = scanner.next().charAt(0); // 입력받은 문자열 토큰에서 첫번째 문자를 변수 s에 저장
		
		for(int i = (int)'a'; i <= (int)s; i++) { // 아스키코드에서 소문자 a = 97부터 시작한다는 점을 이용하여 반복문을 구성
			                                      // 97을 변수 i의 초기값으로 사용할 수도 있지만, int 형변환을 이용해 표현
			for(int j = i; j <= (int)s; j++)      // 첫 시작 문자를 단계별로 줄이기 위해 이중 반복문으로 구성
				System.out.print((char)j);        // 변수 j는 정수이므로 char 형변환을 이용해 문자 형태로 모니터에 출력
			System.out.print("\n");               // 각 문장의 구분을 위해 줄바꿈 출력
		}
		scanner.close(); // scanner 스트림 닫기
	}
}