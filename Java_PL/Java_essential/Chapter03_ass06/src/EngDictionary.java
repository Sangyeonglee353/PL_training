import java.util.Scanner; // import문으로 Scanner 클래스 삽입
public class EngDictionary { // EngDictionary 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		// scanner 객체 선언 및 new로 데어터 영역 할당
		Scanner scanner = new Scanner(System.in);
		
		// eng와 kor 문자열 배열 생성 및 초기화
		String eng[] = { "student", "love", "java", "happy", "future" };
		String kor[] = { "학생", "사랑", "자바", "행복한", "미래" };
		
		while(true) { // while 무한 반복문
			int check = 0; // 단어 검색 확인 변수 선언
			System.out.print("영어 단어를 입력하세요>>"); // 모니터에 문자열 출력
			String word = scanner.next(); // 문자열 토큰 읽기
			if(word.equals("exit")) { // exit가 입력된 경우 문자열 출력 및 while 반복문 종료
				System.out.println("종료합니다...");
				break; // while 반복문 종료
			}
			else { // exit 이외의 문자가 정상적으로 입력된 경우
				for(int i = 0 ; i < eng.length; i++) { // 입력값이 eng 배열에 존재하는지 검사
					if(word.equals(eng[i])) { // eng 배열에 존재한다면 해당 위치의 kor 배열값 출력
						System.out.println(kor[i]);
						check = 1; // 단어가 검색 되었는지 확인하기 위해 1로 변경
						break; // break 문으로 for 반복문 종료
					}
				}
				if(check == 0) { // 단어 검색이 안된 경우 오류문 출력
					System.out.println("그런 영어 단어가 없습니다.");	
				}
			}
		}
		scanner.close(); // scanner 스트림 닫기
	}
}