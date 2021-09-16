public class TryCatchFinally {
	public static void main(String[] args) {
		String s = "123";
		try {
			int n = Integer.parseInt(s); // s가 정수 문자열이 아니면 NumberFormatException 예외 발생
			n++;
			System.out.println(n);
		}
		catch(NumberFormatException e) {
			System.out.println(s + "를 정수로 변환할 수 없습니다.");
		}
		finally {
			System.out.println("계산을 끝냅니다.");
		}
	}
}
