import java.util.Scanner; // import문으로 Scanner 클래스 삽입
public class MultipleOfThree { // MultilpleOfThree 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		// scanner 객체 선언 및 new로 데이터 영역 할당
		Scanner scanner = new Scanner(System.in);
		
		final int SIZE = 10; // 상수 SIZE를 10으로 선언
		int intArray[] = new int[SIZE]; // 배열의 레퍼런스를 선언하고 new로 배열 저장 공간을 확보
		System.out.print("정수 10개 입력>>"); // 모니터에 문자열 출력
		for(int i = 0; i < intArray.length; i++) // 배열의 크기만큼 반복
			intArray[i] = scanner.nextInt(); // 입력 받은 정수 토큰을 배열에 저장
		for(int i = 0; i < intArray.length; i++) // 배열의 크기만큼 반복
			if(intArray[i] % 3 == 0) // 배열의 값 중 3의 배수인 경우 모니터에 출력
				System.out.print(intArray[i] + " ");
		
		scanner.close(); // scanner 스트림 닫기
	}
}