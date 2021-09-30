public class ThreeSixNineGame { // ThreeSixNineGame 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		for(int num = 1; num < 100; num++) { // 1부터 99까지 반복문 실행
			int First = num/10; // 10의 자리를 저장
			int Second = num%10; // 1의 자리를 저장
			
			if(First == 3 || First == 6 || First == 9) { // 10의 자리가 3, 6, 9인 경우
				if(Second == 3 || Second == 6 || Second == 9) { // 1의 자리도 3, 6, 9인 경우
					System.out.println(num + " 박수두번"); // 해당 숫자와 박수두번을 출력
				}
				else { // 1의 자리는 3, 6, 9가 아닌 경우
					System.out.println(num + " 박수한번"); // 해당 숫자와 박수한번을 출력
				}
			}
			else { // 10의 자리가 3, 6, 9가 아닌 경우
				if(Second == 3 || Second == 6 || Second == 9) { // 1의 자리는 3, 6, 9인 경우
					System.out.println(num + " 박수한번"); // 해당 숫자와 박수한번을 출력
				}
			}
		}
	}
}