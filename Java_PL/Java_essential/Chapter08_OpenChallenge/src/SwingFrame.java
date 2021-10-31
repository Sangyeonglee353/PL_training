import javax.swing.*;
import java.awt.*;

class NorthPanel extends JPanel{ // North에 붙일 패널
	public NorthPanel() {
		//Container contentPane = getContentPane(); // 컨탠트팬 알아내기
		
		setLayout(new FlowLayout());
		add(new JButton("Open"));
		add(new JButton("Read"));
		add(new JButton("Close"));
		
		setBackground(Color.LIGHT_GRAY); // 배경색 회색으로 설정
		
	}
}

class CenterPanel extends JPanel{ // Center에 붙일 패널
	public CenterPanel() {
		//Container contentPane = getContentPane(); // 컨텐트팬 알아내기
		
		// 배치관리자 제거
		setLayout(null);
		JLabel label = new JLabel("Hello Java!");
		label.setSize(100, 20); // label 크기 설정
		label.setLocation(100, 50); // label 위치 설정
		add(label); // 배치관리자에 label 추가
		
	}
}
public class SwingFrame extends JFrame{
	public SwingFrame() {
		setTitle("Open Challenge 8");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		Container contentPane = getContentPane(); // 컨텐트팬 알아내기
		contentPane.add(new NorthPanel(), BorderLayout.NORTH);
		contentPane.add(new CenterPanel(), BorderLayout.CENTER);
		setSize(300, 200);
		setVisible(true);
	}
	public static void main(String[] args) {
		SwingFrame frame = new SwingFrame();
	}
}