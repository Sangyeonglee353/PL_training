import java.util.Scanner;
public class ArrayChar {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("10���� ���ڸ� �Է��Ͻÿ�.");
		
		char myChar[] = new char[10];
		for(int i = 0; i < 10; i++)
			myChar[i] = scanner.next().charAt(0);
		
		for(int i = 0; i < 10; i++)
			System.out.print(myChar[i] + " ");
	}
}