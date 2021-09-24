class StaticSample {
	int x; // 
	static int y;
	static int f() { return y; }
}
public class UsingStatic {
	public static void main(String[] args) {
		StaticSample.x = 5; // static 멤버가 아니면 공유가 되지 않는다.
		StaticSample.y = 10;
		int tmp = StaticSample.f();
		StaticSample a = new StaticSample();
		tmp = a.y;
	}
}