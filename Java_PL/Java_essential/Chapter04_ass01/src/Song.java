public class Song { // Song 이름의 클래스 선언
	private String title; // 문자열 title 변수를 private 타입으로 선언
	
	public Song(String title) { // Song의 생성자로 매개변수로 문자열을 받음
		this.title = title;     // 받은 문자열을 해당 클래스의 title 변수에 저장
	}
	
	public String getTitle() { // Song 클래스의 getTitle() 메소드 선언
		return title; // Song 클래스의 title 변수를 문자열로 리턴함
	}
	
	// 자바 프로그램의 실행 시작을 알리는 main() 메소드(함수)
	public static void main(String[] args) {
		// 레퍼런스 변수 mySong의 선언과 동시에 객체 생성 후 인자 전달
		Song mySong = new Song("Nessun Dorma");
		// 레퍼런스 변수 yourSong의 선언과 동시에 객체 생성 후 인자 전달
		Song yourSong = new Song("공주는 잠 못 이루고");
		// 해당 객체가 가리키는 레퍼런스의 메소드로 값 출력
		System.out.println("내 노래는 " + mySong.getTitle());
		// 해당 객체가 가리키는 레퍼런스의 메소드로 값 출력
		System.out.println("너 노래는 " + yourSong.getTitle());
	}
}