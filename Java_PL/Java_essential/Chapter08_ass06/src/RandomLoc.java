import javax.swing.*;
import java.awt.*;

public class RandomLoc extends JFrame{
	public RandomLoc() {
		setTitle("Random Labels");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		Container contentPane = getContentPane(); // 컨텐트팬 알아내기
		
		for(int i = 0; i < 20; i++) {
			JLabel label = new JLabel(Integer.toString(i)); // 정수 i 값의 레이블 컴포넌트 생성
			int x = (int)(Math.random()*220)+30; // 30~250 사이의 랜덤 x
			int y = (int)(Math.random()*220)+30; // 30~250 사이의 랜덤 y
			label.setLocation(x, y);
			label.setSize(20, 20);
			label.setForeground(Color.MAGENTA);
			contentPane.add(label);
		}
		
		setSize(300, 300);
		setVisible(true);
	}
	public static void main(String[] args) {
		RandomLoc rand = new RandomLoc();
	}
}