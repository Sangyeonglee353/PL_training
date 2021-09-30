import java.util.Scanner; // import문으로 Scanner 클래스 삽입
public class ArraySort { // ArraySort 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		// scanner 객체 선언 및 new로 데이터 영역 할당
		Scanner scanner = new Scanner(System.in);
		
		int intArray[] = new int[10]; // 정수 배열을 10의 크기로 생성
		int temp, indexMin; // 임시 변수 선언
		System.out.print("정수 10개 입력>>"); // 모니터에 문자열 출력
		for(int i = 0; i < intArray.length; i++) // 배열의 크기만큼 반복하여 배열에 값을 저장
			intArray[i] = scanner.nextInt(); // 정수 토큰을 읽어 배열에 저장
		
		for(int i = 0; i < intArray.length; i++) { // 최소값을 찾아 앞에서부터 정렬하는 선택정렬 형태로 반복문 구성
			indexMin = i; // 최소값을 저장할 위치로 현재 위치 저장
			for(int j = i+1; j < intArray.length; j++) { // 현재 위치 다음값부터 배열의 끝까지 최소값을 찾아 위치 저장
				if(intArray[indexMin] > intArray[j]) {
					indexMin = j;
				}
			}
			// 현재 위치의 배열값을 최소값 위치의 배열값으로 변경 
			temp = intArray[i];
			intArray[i] = intArray[indexMin];
			intArray[indexMin] = temp;
		}
		for(int i = 0; i < intArray.length; i++) // 오름차순 정렬된 배열 출력 
			System.out.print(intArray[i] + " ");
		
		scanner.close(); // scanner 스트림 닫기
	}
}