import java.util.Scanner; // import문으로 Scanner 클래스 삽입

public class BeveragePrice { // BeveragePrice 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		System.out.print("커피 주문하세요>>"); // 모니터에 문자열 출력
		
		// Scanner 객체 선언, new로 데이터 영역 할당
		Scanner scanner = new Scanner(System.in);
		String coffee = scanner.next(); // 문자열 토큰 읽기
		int cnt = scanner.nextInt(); // 정수 토큰 읽기
		if(coffee.equals("에스프레소")) { // 에스프레소인 경우
			System.out.println(2000*cnt + "원입니다.");
		}
		else if(coffee.equals("아메리카노")) { // 아메리카노인 경우
			System.out.println(2500*cnt + "원입니다.");
		}
		else if(coffee.equals("카푸치노")) { // 카푸치노인 경우
			System.out.println(3000*cnt + "원입니다.");
		}
		else if(coffee.equals("카페라떼")) { // 카페라떼인 경우 
			System.out.println(3500*cnt + "원입니다.");
		}
		else { // 커피 목록에 없는 경우 에러 문장 출력
			System.out.println("죄송합니다. 저희 가게는 해당 커피를 판매하지 않습니다.");
		}
		
		scanner.close(); // scanner 스트림 닫기
	}
}