import java.awt.*;
import javax.swing.*;

public class ButtonimageEx extends JFrame{
	public ButtonimageEx() {
		setTitle("�̹��� ��ư ����");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane(); // ����Ʈ�� �˾Ƴ���
		c.setLayout(new FlowLayout()); // ���̾ƿ� ����
		
		// 3���� �̹����� �о���δ�.
		ImageIcon normalIcon = new ImageIcon("images/normalIcon.gif");
		ImageIcon rolloverIcon = new ImageIcon("images/rolloverIcon.gif");
		ImageIcon pressedIcon = new ImageIcon("images/pressedIcon.gif");
		
		// 3���� �������� ���� ��ư ������Ʈ ����
		JButton btn = new JButton("call~~", normalIcon);
		btn.setPressedIcon(pressedIcon); // pressedIcon�� �̹��� ���
		btn.setRolloverIcon(rolloverIcon); // rolloverIcon�� �̹��� ���
		
		// ��ư�� ����Ʈ �ҿ� �߰�
		c.add(btn);
		
		setSize(250, 150);
		setVisible(true);
		
	}
	
	public static void main(String[] args) {
		new ButtonimageEx();
	}
}
