import java.util.*; // import문으로 util의 모든 클래스 삽입

public class CoffeeOrder { // CoffeeOrder 이름으로 클래스 선언
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in); // scanner 객체 생성
		// 키로 문자열, 값으로 정수형만 삽입 가능한 HashMap 컬렉션 생성
		HashMap<String, Integer> h = new HashMap<String, Integer>();
		
		// HashMap 컬렉션에 값 삽입
		h.put("에스프레소", 2000);
		h.put("아메리카노", 2500);
		h.put("카푸치노", 3000);
		h.put("카페라떼", 3500);
				
		System.out.println("에스프레소, 아메리카노, 카푸치노, 카페라떼 있습니다");
		// 주문받기
		System.out.print("주문 >> ");
		String order = scanner.next();
		while(!order.equals("그만")) { // 그만을 입력할 때까지 계속 주문받기
			switch(order) {
			case "에스프레소":
				System.out.println(order + "는 " + h.get(order) + "입니다.");
				break;
			case "아메리카노":
				System.out.println(order + "는 " + h.get(order) + "입니다.");
				break;
			case "카푸치노":
				System.out.println(order + "는 " + h.get(order) + "입니다.");
				break;
			case "카페라떼":
				System.out.println(order + "는 " + h.get(order) + "입니다.");
				break;
			default:
				System.out.println(order + "는 판매하지 않습니다. 다시 골라주세요.");
				
			}
			System.out.print("주문 >> ");
			order = scanner.next();
		}
		
		scanner.close(); // scanner 스트림 닫기
	}
}