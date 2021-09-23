// 예제 4-10: 멤버의 접근 지정자
class Sample{
	public int a;
	private int b; // private으로 다른 클래스에서 접근 불가
	int c;
}
public class AccessEx {
	public static void main(String[] args) {
		Sample aClass = new Sample();
		aClass.a = 10;
		aClass.b = 10;
		aClass.c = 10;
	}
}