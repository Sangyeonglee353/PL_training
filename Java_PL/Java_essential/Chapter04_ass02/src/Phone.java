import java.util.Scanner; // import문으로 Scanner 클래스 삽입
public class Phone { // Phone 이름의 클래스 선언
	private String name, tel; // private 타입으로 문자열 변수 name과 tel 선언
	public Phone(String name, String tel) { // public 타입으로 생성자 선언
		this.name = name;  // 매개변수 name을 클래스의 name 변수에 저장
		this.tel = tel;    // 매개변수 tel을 클래스의 tel 변수에 저장
	}
	public String getName() { return name; } // 클래스의 name 변수를 리턴
	public String getTel() { return tel; }   // 클래스의 tel 변수를 리턴
	
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		// 레퍼런스 변수 scanner의 선언 및 객체 생성
		Scanner scanner = new Scanner(System.in);
		// 레퍼런스 배열 변수 member 선언 및 객체 배열 생성
		Phone [] member = new Phone[2];
		// for 반복문으로 배열 원소 객체 생성
		for(int i = 0; i < member.length; i++) {
			System.out.print("이름과 전화번호 입력 >>");
			String name = scanner.next(); // 문자열 토큰 읽기
			String tel = scanner.next(); // 문자열 토큰 읽기
			// 배열 원소 객체 생성
			member[i] = new Phone(name, tel);
		}
		
		// for 반복문으로 객체 배열 출력
		for(int i = 0; i < member.length; i++) {
			System.out.println(member[i].getName() + "의 번호 " + member[i].getTel());
		}
		
		scanner.close(); // scanner 스트림 닫기
	}
}