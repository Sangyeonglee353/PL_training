// 예제 4-5: this()로 다른 생성자 호출
public class Book {
	String title;
	String author;
	void show() { System.out.println(title + " " + author);}
	
	public Book() { // 매개 변수가 없는 경우 초기화
		this("", ""); 
		System.out.println("생성자 호출됨");
	}
	
	public Book(String title) { // 매개 변수가 하나인 경우 초기화
		this(title, "작자미상");
	}
	
	public Book(String title, String author) { // 매개 변수가 둘인 경우 초기화
		this.title = title;
		this.author = author;
	}
	
	public static void main(String[] args) {
		Book littlePrince = new Book("어린왕자", "생텍쥐페리");
		Book loveStory = new Book("춘향전");
		Book emptyBook = new Book();
		loveStory.show();
	}
}