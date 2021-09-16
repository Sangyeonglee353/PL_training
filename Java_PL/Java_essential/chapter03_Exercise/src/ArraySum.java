public class ArraySum {
	public static void main(String[] args) {
		// Basic
		/*double sum = 0.0;
		double d[] = {1.0, 2.3, 3.4, 5.5};
		for(int i = 0; i < 4; i++) sum += d[i];
		System.out.println(sum);*/
		
		// Using the length field
/*		double sum = 0.0;
		double d[] = {1.0, 2.3, 3.4, 5.5};
		for(int i = 0; i < d.length; i++) sum += d[i];
		System.out.println(sum);*/
		
		// Using the length field and while
/*		double sum = 0.0;
		double d[] = {1.0, 2.3, 3.4, 5.5};
		int i = 0;
		while(i<d.length) {
			sum += d[i]; 
			i++;
		}
		System.out.println(sum);*/
		
		// Using the length field and do while
/*		double sum = 0.0;
		double d[] = {1.0, 2.3, 3.4, 5.5};
		int i = 0;
		do {
			sum += d[i];
			i++;
		}while(i < d.length);
		System.out.println(sum);
		*/
		
		
		// Using the length field and for each
		double sum = 0.0;
		double d[] = {1.0, 2.3, 3.4, 5.5};
		for(double i : d) {
			sum += i;
		}
		System.out.println(sum);
	}
}