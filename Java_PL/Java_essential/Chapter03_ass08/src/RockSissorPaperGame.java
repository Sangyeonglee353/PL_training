import java.util.Scanner; // import문으로 Scanner 클래스 삽입
public class RockSissorPaperGame { // RockSissorPaperGame 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		// scanner 객체 선언 및 new로 데이터 영역 할당
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("컴퓨터와 가위 바위 보 게임을 합니다."); // 모니터에 문자열 출력
		String str[] = {"가위", "바위", "보"}; // str 배열 생성

		while(true) { // while 무한 반복문 실행
			System.out.print("가위 바위 보!>>"); // 모니터에 문자열 출력
			String User = scanner.next(); // 문자열 토큰 읽기
			
			// 컴퓨터의 가위, 바위, 보 결정
			int n = (int)(Math.random()*3); // 0. 1, 2 중에 랜덤 정수 리턴
					
			if(User.equals("가위")){ // 사용자가 가위를 입력한 경우
				if(str[n].equals("가위")) { // 컴퓨터도 가위인 경우
					System.out.println("사용자 = " + User + ", 컴퓨터 = " + str[n] + ", 비겼습니다.");
				}
				else if(str[n].equals("바위")) { // 컴퓨터는 바위인 경우
					System.out.println("사용자 = " + User + ", 컴퓨터 = " + str[n] + ", 컴퓨터가 이겼습니다.");
				}
				else if(str[n].equals("보")) { // 컴퓨터는 보인 경우
					System.out.println("사용자 = " + User + ", 컴퓨터 = " + str[n] + ", 사용자가 이겼습니다.");
				}
			}
			else if(User.equals("바위")) { // 사용자가 바위를 입력한 경우
				if(str[n].equals("가위")) { // 컴퓨터는 가위인 경우
					System.out.println("사용자 = " + User + ", 컴퓨터 = " + str[n] + ", 사용자가 이겼습니다.");
				}
				else if(str[n].equals("바위")) { // 컴퓨터는 바위인 경우
					System.out.println("사용자 = " + User + ", 컴퓨터 = " + str[n] + ", 비겼습니다.");
				}
				else if(str[n].equals("보")) { // 컴퓨터는 보인 경우
					System.out.println("사용자 = " + User + ", 컴퓨터 = " + str[n] + ", 컴퓨터가 이겼습니다.");
				}
			}
			else if(User.equals("보")) { // 사용자가 보를 입력한 경우
				if(str[n].equals("가위")) { // 컴퓨터는 가위인 경우
					System.out.println("사용자 = " + User + ", 컴퓨터 = " + str[n] + ", 컴퓨터가 이겼습니다.");
				}
				else if(str[n].equals("바위")) { // 컴퓨터는 바위인 경우
					System.out.println("사용자 = " + User + ", 컴퓨터 = " + str[n] + ", 사용자가 이겼습니다.");
				}
				else if(str[n].equals("보")) { // 컴퓨터는 보인 경우
					System.out.println("사용자 = " + User + ", 컴퓨터 = " + str[n] + ", 비겼습니다.");
				}
			}
			else if(User.equals("그만")) { // 사용자가 그만을 입력한 경우 문자열 출력 및 프로그램 종료
				System.out.println("게임을 종료합니다...");
				break; // break 문으로 while 반복문 종료
			}
			else { // 사용자가 가위, 바위, 보, 그만 이외의 문자열을 입력한 경우 오류문 출력
				System.out.println("잘못된 입력입니다. 다시 입력해주세요");
			}
		}
		scanner.close(); // scanner 스트림 닫기
	}
}