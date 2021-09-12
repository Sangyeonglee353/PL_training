
public class CheckTime {
	public static void main(String[] args) {
		int x = 2, y = 10, z= 0;
		z = x++*2+--y-5+x*(y%2);
		System.out.println(z);
		// 4+9-5+3*(9%2) = 8+3 = 11
		
		System.out.println(8 >> 1);
		// 4
		
		int opr = 4;
		System.out.println(opr++);
		// 4
	}
}
