import javax.swing.*;
import java.awt.*;

public class ColorButton extends JFrame{
	public ColorButton() {
		setTitle("Ten Color Buttons Frame");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		Container contentPane = getContentPane(); // 컨텐트팬 알아내기
		
		// 1x10의 GridLayout 배치관리자
		contentPane.setLayout(new GridLayout(1, 10));
		
		Color [] color = {Color.RED, Color.ORANGE, Color.YELLOW, Color.GREEN, 
				Color.CYAN, Color.BLUE, Color.MAGENTA, Color.GRAY, 
				Color.PINK, Color.LIGHT_GRAY
		};
		
		for(int i = 0; i < 10; i++) {
			String text = Integer.toString(i); // 정수 i를 문자열로 변환
			JButton button = new JButton(text); // 버튼 컴포넌트 생성
			button.setOpaque(true); // 배경색이 보이게 설정
			button.setBackground(color[i]); // 각 버튼의 색 설정
			contentPane.add(button); // 컨텐트팬에 버튼 부착
		}
		
		setSize(500, 200);
		setVisible(true);
	}
	public static void main(String[] main) {
		ColorButton frame = new ColorButton();
	}
}