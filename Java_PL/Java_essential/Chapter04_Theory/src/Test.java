class A {
	int x;
	void f(int x) {
		this.x = x;
	}
	int f(int x, int y) { return x*y; }
}
public class Test {
	public static void main(String[] args) {
		A sample; // sample 레퍼런스 선언
		sample = new A(); // A 객체 생성
		sample.f(10);
		System.out.println(sample.x);
		System.out.println(sample.f(10, 20));
	}
}