
public class LogicalOperator {
	public static void main(String[] args) {
		System.out.println('a'>'b');
		System.out.println(3 >= 2);
		System.out.println(-1 < 0);
		System.out.println(3.45 <= 2);
		System.out.println(3 == 2);
		System.out.println(3 != 2);
		System.out.println(!(3 != 2));
		// Short circuit 주의: 앞의 false면 다음 계산안하고 넘어감
		System.out.println((3>2) && (3>4)); 
		System.out.println((3!=2)||(-1>0));
		System.out.println((3!=2)^(-1>0));
	}
}
