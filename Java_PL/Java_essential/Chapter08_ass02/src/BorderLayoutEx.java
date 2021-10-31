import javax.swing.*;
import java.awt.*;

public class BorderLayoutEx extends JFrame{
	public BorderLayoutEx(){
		setTitle("BorderLayout Practice");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		
		Container contentPane = getContentPane(); // 컨텐트팬 알아내기
		// 컨텐트팬에 BorderLayout 배치관리자 설정
		contentPane.setLayout(new BorderLayout(50, 5));
		
		contentPane.add(new JButton("North"), BorderLayout.NORTH);
		contentPane.add(new JButton("West"), BorderLayout.WEST);
		contentPane.add(new JButton("East"), BorderLayout.EAST);
		contentPane.add(new JButton("South"), BorderLayout.SOUTH);
		contentPane.add(new JButton("Center"), BorderLayout.CENTER);
		
		setSize(400, 200);
		setVisible(true); // 프레임을 화면에 출력 <- 모든 설정에 마지막에 온다.
		
	}
	public static void main(String[] args) {
		BorderLayoutEx frame = new BorderLayoutEx();
	}
}