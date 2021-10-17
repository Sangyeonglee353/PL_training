import java.util.*; // import문으로 util의 모든 클래스 삽입

public class PointManagement { // PointManagement 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in); // scanner 객체 생성
		// 키값으로 문자열, 값으로 정수형만 삽입가능한 HashMap 컬렉션 생성
		HashMap<String, Integer> pointInfo = new HashMap<String, Integer>(); 
		
		System.out.println("** 포인트 관리 프로그램입니다 **");
		System.out.print("이름과 포인트 입력>>");
		String name = scanner.next(); // 키보드로부터 문자열 입력
		while(!name.equals("exit")) {
			int point = scanner.nextInt(); // 키보드로부터 정수형 입력
			if(!pointInfo.containsKey(name)) { // 해시맵에 일치하는 키가 없다면
				pointInfo.put(name, point); // 해시맵에 삽입
			}
			else { // 해시맵에 일치하는 키가 있다면
				pointInfo.replace(name, pointInfo.get(name) + point); // 포인트 누적
			}
			
			// 해시맵 저장값 출력
			Set<String> names = pointInfo.keySet(); // HashMap 컬렉션에서 키값만 가져옴
			Iterator<String> it = names.iterator(); 
			while(it.hasNext()) { // it으로 모든 키 만큼 반복
				String customerName = it.next();
				int customerPoint = pointInfo.get(customerName);
				System.out.print("(" + customerName + ", " + customerPoint + ") ");
			}
			System.out.println(""); // 줄바꿈
			System.out.print("이름과 포인트 입력>>"); // 다음 값 입력
			name = scanner.next();
		}
		System.out.println("프로그램을 종료합니다...");
		scanner.close(); // scanner 스트림 닫기
	}
}