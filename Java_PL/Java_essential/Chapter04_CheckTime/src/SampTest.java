class Samp{
	int id;
	public Samp(int x) { this.id = x; }
	public Samp() {
		this(0);
		System.out.println("������ ȣ��");
	}
}

public class SampTest {
	public static void main(String[] args) {
		
		Samp sample; // ���۷��� ���� sample ����
		sample = new Samp(); // new �����ڷ� Samp() ��ü ����
		
		Samp sample2; // ���۷��� ���� sample2 ����
		sample2 = new Samp(10); // new �����ڷ� Samp(10) ��ü ����
		
	}
}