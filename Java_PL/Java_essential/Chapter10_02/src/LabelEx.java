import java.awt.*;
import javax.swing.*;

public class LabelEx extends JFrame{
	public LabelEx() {
		setTitle("레이블 예제");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane(); // 컨탠트팬 알아내기
		c.setLayout(new FlowLayout()); // 레이아웃 설정하기
		
		// 문자열 레이블 생성
		JLabel textLabel = new JLabel("제임스 고슬링입니더!");
		
		// 이미지 레이블 생성
		ImageIcon img = new ImageIcon("images/gosling.jpg"); // 이미지 로딩
		JLabel imageLabel = new JLabel(img); // 레이블 생성
		
		// 문자열 이미지 모두 가진 레이블 생성
		ImageIcon icon = new ImageIcon("images/icon.gif"); // 이미지 로딩
		JLabel label = new JLabel("커피한잔 하실래예, 전화주이소", icon, SwingConstants.CENTER);
		
		// 컨텐트팬에 3개의 레이블 삽입
		c.add(textLabel);
		c.add(imageLabel);
		c.add(label);
		
		setSize(300, 500);
		setVisible(true);
	}
	
	public static void main(String[] args) {
		new LabelEx();
	}
}
