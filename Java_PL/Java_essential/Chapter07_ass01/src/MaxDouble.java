import java.util.*; // import문으로 util의 클래스들을 모두 삽입

public class MaxDouble { // MaxDouble 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		// 레퍼런스 변수 scanner의 선언 및 객체 생성 후 입력을 인자로 전달
		Scanner scanner = new Scanner(System.in);
		// 실수형만 삽입가능한 Vector 컬렉션 생성
		Vector<Double> d = new Vector<Double>();
		
		// 키보드로부터 5개의 실수를 입력받아 Vector에 삽입
		for(int i = 0; i < 5; i++) {
			double num = scanner.nextDouble(); // 키보드로부터 실수 입력
			d.add(num); // Vector 컬렉션에 삽입
		}
		
		// Vector d의 요소를 순차 검색할 Iterator 객체 리턴
		Iterator<Double> it = d.iterator();
		double max = d.get(0);
		while(it.hasNext()) { // it로 Vector의 끝까지 반복
			double temp = it.next(); // 요소 리턴. it의 요소 타입은 Double이므로 실수 리턴
			if(max < temp) { // 최대값 선별
				max = temp;
			}
		}
		
		// 최종 결과값 출력
		System.out.println("가장 큰 수는 " + max);
		scanner.close(); // scanner 스트림 닫기
	}

}