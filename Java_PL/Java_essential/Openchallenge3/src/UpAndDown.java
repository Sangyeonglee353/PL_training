import java.util.Scanner;
import java.util.Random;

public class UpAndDown {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		Random r = new Random();
		int k = r.nextInt(100); // 0~99까지 임의의 정수 생성
		
		int First = 0, Last = 99;
		
		System.out.println("Up & Down게임입니다. 숨겨진 수를 맞추어 보세요.");
		System.out.println(First + "-" + Last);
		
		int i = 1;
		int check = 0; // 게임 반복값 측정
		while(check == 0) {
			System.out.print(i + ">>");
			int input = scanner.nextInt();
			if(input == k) {
				System.out.println("맞았습니다.");
				i = 1; // 초기화
				System.out.print("다시하시겠습니까(y/n)>>");
				if(scanner.next().equals("y")) { // 재시작
					k = r.nextInt(100); // 랜덤 난수 초기화
					System.out.println("Up & Down게임입니다. 숨겨진 수를 맞추어 보세요.");
					First = 0;
					Last = 99;
					System.out.println(First + "-" + Last);
				}
				else { // 종료
					check = 1;
					scanner.close(); // scanner 스트림 닫기
				}
			}
			else if(input < k) { // 입력 수가 랜덤 수보다 작은 경우
				System.out.println("더 높게");
				First = input; // 범위 변경
				System.out.println(First + "-" + Last);
				i++; // 횟수 증가
			}
			else { // 입력 수가 랜덤 수보다 큰 경우
				System.out.println("더 낮게");
				Last = input; // 범위 변경
				System.out.println(First + "-" + Last);
				i++; // 횟수 증가
			}
		}		
	}
}
