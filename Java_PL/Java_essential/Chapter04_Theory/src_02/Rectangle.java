public class Rectangle {
	int w, h;
	Rectangle(int w, int h) {
		this.w = w;
		this.h = h;
	}
	Rectangle(int w){
		//this(w, 2); // this() 대신 다른 코드로 수정하라.
		this.w = w;
		this.h = 2;
	}
	Rectangle() {
		//this(1); // this() 대신 다른 코드로 수정하라.
		this.w = 1;
		this.h = 2;
	}
	
	public static void main(String[] args) {
		Rectangle a = new Rectangle();
		System.out.println(a.w + " " + a.h);
		Rectangle b = new Rectangle(10);
		System.out.println(b.w + " " + b.h);
		Rectangle c = new Rectangle(30, 50);
		System.out.println(c.w + " " + c.h);
	}
}