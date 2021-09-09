import java.util.Scanner; // import문으로 Scanner 클래스 삽입

public class DiscountDrinkPrice { // DrinkPrice 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		System.out.print("커피 주문하세요>>"); // 모니터에 문자열 출력
		
		// Scanner 객체 선언, new로 데이터 영역 할당
		Scanner scanner = new Scanner(System.in);
		String coffee = scanner.next(); // 문자열 토큰 읽기
		int cnt = scanner.nextInt(); // 정수 토큰 읽기
		switch(coffee) {
		case "에스프레소": // 에스프레소인 경우
			if(cnt >= 10) { // 10잔 이상인 경우 할인율 5% 적용
				double price = 2000*cnt*0.95; // 할인된 가격을 price 변수에 저장
				System.out.print((int)price + "원입니다."); // int형으로 변환하여 출력
				break; // switch문 종료
			}
			else { // 10잔 미만인 경우 할인율 미적용
				System.out.println(2000*cnt + "원입니다.");
				break; // switch문 종료
			}
		case "아메리카노": // 아메리카노인 경우
			System.out.println(2500*cnt + "원입니다.");
			break; // switch문 종료
		case "카푸치노": // 카푸치노인 경우
			System.out.println(3000*cnt + "원입니다.");
			break; // switch문 종료
		case "카페라떼": // 카페라떼인 경우
			System.out.println(3500*cnt + "원입니다.");
			break; // switch문 종료
		default: // 커피 목록에 없는 경우 에러 문장 출력
			System.out.println("죄송합니다. 저희 가게는 해당 커피를 판매하지 않습니다.");
		}
		
		scanner.close(); // scanner 스트림 닫기
	}
}