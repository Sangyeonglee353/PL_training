import javax.swing.*;
import java.awt.*;

class NorthPanel extends JPanel{
	public NorthPanel() {
		setBackground(Color.YELLOW); // 배경색 수정
		setLayout(new FlowLayout()); // 배치관리자 수정
		add(new JButton("새로 배치")); // 버튼 생성
		add(new JButton("종료"));    // 버튼 생성
	}
}

class CenterPanel extends JPanel{
	public CenterPanel() {
		
		setLayout(null);
		for(int i = 0; i < 10; i++) {
			JLabel label = new JLabel("*");
			int x = (int)(Math.random()*150) + 20;
			int y = (int)(Math.random()*150) + 20;
			
			label.setLocation(x, y); // label 위치 설정
			label.setSize(20, 20);   // label 크기 설정
			label.setForeground(Color.RED); // label 글자색 설정
			add(label);
		}
	}
}

class SouthPanel extends JPanel{
	public SouthPanel() {
		setBackground(Color.DARK_GRAY);
		setLayout(new FlowLayout(FlowLayout.LEFT, 5, 10));
		add(new JButton("별 개수 수정"));
		add(new JTextField(10));
	}
}

public class RandomStar extends JFrame{
	public RandomStar() {
		setTitle("Three Panel");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		Container contentPane = getContentPane();
		
		contentPane.add(new NorthPanel(), BorderLayout.NORTH);
		contentPane.add(new CenterPanel(), BorderLayout.CENTER);
		contentPane.add(new SouthPanel(), BorderLayout.SOUTH);
		
		setSize(300, 300);
		setVisible(true);
	}
	public static void main(String[] args) {
		RandomStar star = new RandomStar();
	}
}