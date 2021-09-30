public class ArraySum {
	public static void main(String[] args) {
		int intArray[] = new int[10];
		int i = 1, sum = 0;
		while(i < 11) {
			intArray[i-1] = i; // 배열의 원소값은 1 작아야 하므로
			sum += i;
			i++;
		}
		System.out.println("모든 원소의 합은 " + sum);
	}
}