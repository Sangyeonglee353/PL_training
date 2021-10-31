import javax.swing.*;
import java.awt.*;

public class ColorButton extends JFrame{
	public ColorButton() {
		setTitle("Ten Color Buttons Frame");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		Container contentPane = getContentPane(); // ����Ʈ�� �˾Ƴ���
		
		// 1x10�� GridLayout ��ġ������
		contentPane.setLayout(new GridLayout(1, 10));
		
		Color [] color = {Color.RED, Color.ORANGE, Color.YELLOW, Color.GREEN, 
				Color.CYAN, Color.BLUE, Color.MAGENTA, Color.GRAY, 
				Color.PINK, Color.LIGHT_GRAY
		};
		
		for(int i = 0; i < 10; i++) {
			String text = Integer.toString(i); // ���� i�� ���ڿ��� ��ȯ
			JButton button = new JButton(text); // ��ư ������Ʈ ����
			button.setOpaque(true); // ������ ���̰� ����
			button.setBackground(color[i]); // �� ��ư�� �� ����
			contentPane.add(button); // ����Ʈ�ҿ� ��ư ����
		}
		
		setSize(500, 200);
		setVisible(true);
	}
	public static void main(String[] main) {
		ColorButton frame = new ColorButton();
	}
}