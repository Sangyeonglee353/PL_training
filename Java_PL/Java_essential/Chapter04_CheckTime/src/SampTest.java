class Samp{
	int id;
	public Samp(int x) { this.id = x; }
	public Samp() {
		this(0);
		System.out.println("생성자 호출");
	}
}

public class SampTest {
	public static void main(String[] args) {
		
		Samp sample; // 레퍼런스 변수 sample 선언
		sample = new Samp(); // new 연산자로 Samp() 객체 생성
		
		Samp sample2; // 레퍼런스 변수 sample2 선언
		sample2 = new Samp(10); // new 연산자로 Samp(10) 객체 생성
		
	}
}