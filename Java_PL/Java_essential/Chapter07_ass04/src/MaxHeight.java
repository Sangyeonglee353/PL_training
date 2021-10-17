import java.util.*; // import문으로 util의 모든 클래스 삽입

public class MaxHeight { // MaxHeight 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in); // scanner 객체 생성
		// 실수형만 삽입가능한 Vector 컬렉션 생성
		Vector<Double> heightList = new Vector<Double>();
		
		System.out.println("2000~2009년까지 1년 단위로 키(cm)를 입력");
		// 사용자로부터 1년 단위 키를 입력받아 Vector에 삽입
		for(int i = 0; i < 10; i++) {
			double height = scanner.nextDouble(); // 키보드로부터 실수형 입력
			heightList.add(height); // Vector 컬렉션에 삽입
		}
		
		double maxHeight = 0; // 키 증가폭 저장 변수
		int year = 0;         // 해당 년도 저장 변수
		for(int i = 0; i < heightList.size()-1; i++) { // 가장 키가 많이 자란 년도 계산
			double temp = heightList.get(i+1) - heightList.get(i);
			if(maxHeight < temp) {
				maxHeight = temp;
				year = i;
			}
		}
		// 최종 결과값 출력
		System.out.println("가장 키가 많이 자란 년도는 200" + year + "년 " + maxHeight + "cm");
		scanner.close(); // scanner 스트림 닫기
	}
}