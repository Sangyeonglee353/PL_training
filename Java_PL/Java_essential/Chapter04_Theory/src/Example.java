/*class Person{
	private int age;
	public Person(int age) { this.age = age; }
}
public class Example {
	public static void main(String args[]) {
		Person a = new Person(17);
	}
}*/

class Person {
	private int age;
	public void setAge(int age) { this.age = age; }
}
public class Example {
	public static void main (String args[]) {
		Person a = new Person();
		a.setAge(17);
		// System.out.print(a.age);
	}
}