import java.util.*; // import문으로 util 클래스를 모두 삽입

public class GradeConverter { // GradeConverter 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in); // scanner 객체 생성
		// 문자열만 삽입가능한 ArrayList 컬렉션 생성
		ArrayList<String> list = new ArrayList<String>();
		
		// 문자열 출력
		System.out.print("빈 칸으로 분리하여 5 개의 학점을 입력(A/B/C/D/E/F)>>");
		// 키보드로부터 5개의 문자열을 입력받아 ArrayList에 삽입
		for(int i = 0; i < 5; i++) {
			String grade = scanner.next(); // 키보드로부터 문자열 입력
			list.add(grade); // ArrayList 컬렉션에 삽입
		}
		
		// ArrayList 컬렉션의 크기만큼 값을 변환하여 출력
		for(int i = 0; i < list.size(); i++) {
			switch(list.get(i)) {
			case "A":
				System.out.print("4.0");
				break;
			case "B":
				System.out.print("3.0");
				break;
			case "C":
				System.out.print("2.0");
				break;
			case "D":
				System.out.print("1.0");
				break;
			case "F":
				System.out.print("0.0");
				break;
			default:
				System.out.print("잘못된 입력입니다.");
			}
			System.out.print(" ");
		}
		scanner.close(); // scanner 스트림 닫기
	}
}