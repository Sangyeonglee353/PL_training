import javax.swing.*;
import java.awt.*;

public class GridLayoutEx extends JFrame{
	public GridLayoutEx() {
		setTitle("4x4 Color Frame");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		Container contentPane = getContentPane();
		
		contentPane.setLayout(new GridLayout(4, 50));
		
		Color [] color = {Color.RED, Color.ORANGE, Color.YELLOW, Color.GREEN,
				Color.CYAN, Color.BLUE, Color.MAGENTA, Color.GRAY,
				Color.PINK, Color.LIGHT_GRAY, Color.WHITE, Color.DARK_GRAY,
				Color.BLACK, Color.ORANGE, Color.BLUE,Color.MAGENTA}; 
		
		for(int i = 0; i<16; i++) {
			String text = Integer.toString(i);
			JLabel label = new JLabel(text);
			label.setOpaque(true); // 배경색 보이게 설정
			label.setBackground(color[i]); // 배경색 설정
			
			contentPane.add(label);
		}
		
		setSize(500, 200);
		setVisible(true);
	}
	public static void main(String[] args) {
		GridLayoutEx frame = new GridLayoutEx();
	}
}