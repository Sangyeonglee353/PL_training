class GStack<T>{ // ���׸� ���� ����. ���׸� Ÿ�� T
	int tos;
	Object[] stck; // ���ÿ� ����� ����� ����, T[] stack;�� �Ұ���
	public GStack() {
		tos = 0;
		stck = new Object[10]; // new T[10];�� �� �� ����. ���׸� Ÿ���� �迭 ���� �Ұ�
	}
	public void push(T item) {
		if(tos == 10) // ������ �� ���� �� �̻� ��Ҹ� ������ �� ����
			return;
		stck[tos] = item;
		tos++;
	}
	public T pop() {
		if(tos == 0) // ������ ��� �־� ���� ��Ұ� ����
			return null;
		tos--;
		return (T)stck[tos]; // Ÿ�� �Ű� ���� Ÿ������ ĳ���� << �ָ�
	}
}

public class MyStack {
	public static void main(String[] args) {
		GStack<String> stringStack = new GStack<String>(); // String Ÿ���� GStack ����
		stringStack.push("seoul");
		stringStack.push("busan");
		stringStack.push("LA");
		
		for(int n = 0; n < 3; n++)
			System.out.println(stringStack.pop()); // stringStack ���ÿ� �ִ� 3���� ���ڿ� ��
		
		GStack<Integer> intStack = new GStack<Integer>(); // Integer Ÿ���� GStack ����
		intStack.push(1);
		intStack.push(3);
		intStack.push(5);
		
		for(int n = 0; n <3; n++)
			System.out.println(intStack.pop());
		
	}
}
