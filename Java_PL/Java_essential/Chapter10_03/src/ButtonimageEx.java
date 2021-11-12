import java.awt.*;
import javax.swing.*;

public class ButtonimageEx extends JFrame{
	public ButtonimageEx() {
		setTitle("이미지 버튼 예제");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane(); // 컨텐트팬 알아내기
		c.setLayout(new FlowLayout()); // 레이아웃 설정
		
		// 3개의 이미지를 읽어들인다.
		ImageIcon normalIcon = new ImageIcon("images/normalIcon.gif");
		ImageIcon rolloverIcon = new ImageIcon("images/rolloverIcon.gif");
		ImageIcon pressedIcon = new ImageIcon("images/pressedIcon.gif");
		
		// 3개의 아이콘을 가진 버튼 컴포넌트 생성
		JButton btn = new JButton("call~~", normalIcon);
		btn.setPressedIcon(pressedIcon); // pressedIcon용 이미지 등록
		btn.setRolloverIcon(rolloverIcon); // rolloverIcon용 이미지 등록
		
		// 버튼을 컨텐트 팬에 추가
		c.add(btn);
		
		setSize(250, 150);
		setVisible(true);
		
	}
	
	public static void main(String[] args) {
		new ButtonimageEx();
	}
}
