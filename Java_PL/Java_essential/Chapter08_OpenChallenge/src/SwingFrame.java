import javax.swing.*;
import java.awt.*;

class NorthPanel extends JPanel{ // North�� ���� �г�
	public NorthPanel() {
		//Container contentPane = getContentPane(); // ����Ʈ�� �˾Ƴ���
		
		setLayout(new FlowLayout());
		add(new JButton("Open"));
		add(new JButton("Read"));
		add(new JButton("Close"));
		
		setBackground(Color.LIGHT_GRAY); // ���� ȸ������ ����
		
	}
}

class CenterPanel extends JPanel{ // Center�� ���� �г�
	public CenterPanel() {
		//Container contentPane = getContentPane(); // ����Ʈ�� �˾Ƴ���
		
		// ��ġ������ ����
		setLayout(null);
		JLabel label = new JLabel("Hello Java!");
		label.setSize(100, 20); // label ũ�� ����
		label.setLocation(100, 50); // label ��ġ ����
		add(label); // ��ġ�����ڿ� label �߰�
		
	}
}
public class SwingFrame extends JFrame{
	public SwingFrame() {
		setTitle("Open Challenge 8");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		Container contentPane = getContentPane(); // ����Ʈ�� �˾Ƴ���
		contentPane.add(new NorthPanel(), BorderLayout.NORTH);
		contentPane.add(new CenterPanel(), BorderLayout.CENTER);
		setSize(300, 200);
		setVisible(true);
	}
	public static void main(String[] args) {
		SwingFrame frame = new SwingFrame();
	}
}