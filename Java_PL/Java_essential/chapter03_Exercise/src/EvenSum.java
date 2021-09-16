public class EvenSum {
	public static void main(String[] args) {
		int i = 0, sum = 0;
		while(i < 10) {
			i = i + 2;
			sum += i;
		}
		System.out.println(sum);
	}
}