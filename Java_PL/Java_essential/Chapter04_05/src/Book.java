// ���� 4-5: this()�� �ٸ� ������ ȣ��
public class Book {
	String title;
	String author;
	void show() { System.out.println(title + " " + author);}
	
	public Book() { // �Ű� ������ ���� ��� �ʱ�ȭ
		this("", ""); 
		System.out.println("������ ȣ���");
	}
	
	public Book(String title) { // �Ű� ������ �ϳ��� ��� �ʱ�ȭ
		this(title, "���ڹ̻�");
	}
	
	public Book(String title, String author) { // �Ű� ������ ���� ��� �ʱ�ȭ
		this.title = title;
		this.author = author;
	}
	
	public static void main(String[] args) {
		Book littlePrince = new Book("�����", "�������丮");
		Book loveStory = new Book("������");
		Book emptyBook = new Book();
		loveStory.show();
	}
}