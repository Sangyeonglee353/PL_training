import java.util.Scanner; // import문으로 Scanner 클래스 삽입
class Phone { // Phone 이름으로 클래스 선언
	private String name, tel; // private 타입으로 문자열 변수 name과 tel 선언
	public Phone(String name, String tel) { // public 타입으로 생성자 선언
		this.name = name; // 매개변수 name을 클래스의 name으로 저장
		this.tel = tel;   // 매개변수 tel을 클래스의 tel로 저장
	}
	public String getName() { return name; } // 클래스의 name 변수를 리턴 
	public String getTel() { return tel; }   // 클래스의 tel 변수를 리턴
}
public class PhoneManager { // PhoneManager 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		// 레버런스 변수 scanner의 선언 및 객체 생성
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("인원수>>"); // 문자열을 모니터에 출력
		int num = scanner.nextInt(); // 정수 토큰 읽기
		// 레퍼런스 배열 변수 customer의 선언 및 객체 배열 생성
		Phone [] customer = new Phone[num];
		// 객체 배열의 크기만큼 이름과 전화번호를 입력받아 배열 원소 객체 생성
		for(int i = 0; i < customer.length; i++) {
			// 문자열을 모니터에 출력
			System.out.print("이름과 전화번호(번호는 연속적으로 입력)>>");
			String name = scanner.next(); // 문자열 토큰 읽기
			String tel = scanner.next();  // 문자열 토큰 읽기
			customer[i] = new Phone(name, tel); // 배열 원소 객체 생성
		}
		System.out.println("저장되었습니다..."); // 문자열을 모니터에 출력
		
		while (true) { // while 무한 반복문 실행
			int check = 0; // 이름 검색 확인 변수 선언
			System.out.print("검색할 이름>>"); // 문자열을 모니터에 출력
			String searchName = scanner.next(); // 문자열 토큰 읽기
			if(searchName.equals("exit")) { // exit가 입력된 경우 종료
				System.out.print("프로그램을 종료합니다..."); // 종료문 출력
				break; // while 반복문 종료
			}
			else { // exit 이외의 문자가 정상적으로 입력된 경우
				// 검색 이름이 객체 배열에 있는지 검사하기 위해 배열의 크기만큼 반복문 실행
				for(int i = 0; i < customer.length; i++) {
					// 검색 이름이 객체 배열 원소에 있는지 검사 
					if(customer[i].getName().equals(searchName)) {
						// 검색 이름이 있는 경우 해당 내용 출력
						System.out.println(customer[i].getName() + "의 번호는 " + customer[i].getTel() + " 입니다.");
						check = 1; // 이름이 검색되었음을 표시하기 위해 1로 변경
						break; // for 반복문 종료
					}
				}
				if(check == 0) { // 이름 검색이 안된 경우 오류문 출력
					System.out.println(searchName + " 이 없습니다.");
				}
			}
		}
		scanner.close(); // scanner 스트림 닫기
	}
}