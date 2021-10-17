import java.util.*; // import문으로 util의 모든 클래스 삽입

public class MaxNations { // MaxNations 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in); // scanner 객체 생성
		// 키로 문자열, 값으로 정수형만 삽입가능한 HashMap 컬렉션 생성
		HashMap<String, Integer> nations = new HashMap<String, Integer>();
		
		System.out.println("나라 이름과 인구를 5개 입력하세요. (예: Korea 5000)");
		for(int i = 0; i < 5; i++) {
			String nation = scanner.next(); // 키보드로부터 문자열 입력
			int population = scanner.nextInt(); // 키보드로부터 정수형 입력
			nations.put(nation, population); // HashMap 컬렉션에 삽입
		}
		
		String maxNation = ""; // 제일 많은 인구의 나라
		int maxPopulation = 0; // 제일 많은 인구
		Set<String> names = nations.keySet(); // HashMap 컬렉션에서 키값만 가져옴
		Iterator<String> it = names.iterator(); 
		while(it.hasNext()) { // it으로 모든 키만큼 반복
			String name = it.next(); // 키값 나라이름
			int num = nations.get(name); // 해당 나라의 인구 수
			if(maxPopulation < num) { // 제일 인구가 많은 나라 선별
				maxNation = name;
				maxPopulation = num;
			}
		}
		// 최종 결과값 출력
		System.out.println("제일 인구가 많은 나라는 (" + maxNation + ", " + maxPopulation + ")");
		scanner.close(); // scanner 스트림 닫기
	}
}