import java.util.*; // import문으로 util의 모든 클래스 삽입

class Location{ // Location 이름으로 클래스 선언
	private int x, y;
	public Location(int x, int y) { // 생성자 선언
		this.x = x;
		this.y = y;
	}
	public double distance(Location b) { // 거리 계산 메소드 선언
		double d = (x - b.x) * (x - b.x) + (y - b.y)*(y - b.y);
		return Math.sqrt(d);
	}
}
public class MouseLocation { // MouseLocation 이름으로 클래스 선언
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in); // scanner 객체 생성
		ArrayList<Location> mouseLocation = new ArrayList<Location>();
		
		mouseLocation.add(new Location(0, 0)); // 시작 위치 지정
		// 사용자로부터 위치 입력 받기
		System.out.println("쥐가 이동한 위치(x,y)를 5개 입력하라.");
		for(int i = 0; i < 5; i++) {
			System.out.print(">> ");
			int inputX = scanner.nextInt();
			int inputY = scanner.nextInt();
			mouseLocation.add(new Location(inputX, inputY));
		}
		mouseLocation.add(new Location(0, 0)); // 최종 위치 지정
		
		// 총 이동 거리 계산
		double sum = 0.0;
		for(int i = 0; i < mouseLocation.size()-1; i++) {
			// Location(i)와 Location(i+1) 사이의 이동 거리
			double d = mouseLocation.get(i).distance(mouseLocation.get(i+1));
			sum += d;
		}
		// 최종 결과값 출력
		System.out.println("총 이동 거리는 " + sum);
		scanner.close(); // scanner 스트림 닫기
	}
}