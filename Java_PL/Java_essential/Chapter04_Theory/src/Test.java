class A {
	int x;
	void f(int x) {
		this.x = x;
	}
	int f(int x, int y) { return x*y; }
}
public class Test {
	public static void main(String[] args) {
		A sample; // sample ���۷��� ����
		sample = new A(); // A ��ü ����
		sample.f(10);
		System.out.println(sample.x);
		System.out.println(sample.f(10, 20));
	}
}