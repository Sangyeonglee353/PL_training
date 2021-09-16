public class EvenSumWhile {
	public static void main(String[] args) {
		int i = 0, sum = 0;
		while(true) {
			i = i + 2;
			sum += i;
			if(i > 8) break;
		}
		System.out.println(sum);
	}
}