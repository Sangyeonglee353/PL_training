public class TryCatchFinally {
	public static void main(String[] args) {
		String s = "123";
		try {
			int n = Integer.parseInt(s); // s�� ���� ���ڿ��� �ƴϸ� NumberFormatException ���� �߻�
			n++;
			System.out.println(n);
		}
		catch(NumberFormatException e) {
			System.out.println(s + "�� ������ ��ȯ�� �� �����ϴ�.");
		}
		finally {
			System.out.println("����� �����ϴ�.");
		}
	}
}
