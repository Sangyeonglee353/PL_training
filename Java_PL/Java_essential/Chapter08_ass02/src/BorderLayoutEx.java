import javax.swing.*;
import java.awt.*;

public class BorderLayoutEx extends JFrame{
	public BorderLayoutEx(){
		setTitle("BorderLayout Practice");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		
		Container contentPane = getContentPane(); // ����Ʈ�� �˾Ƴ���
		// ����Ʈ�ҿ� BorderLayout ��ġ������ ����
		contentPane.setLayout(new BorderLayout(50, 5));
		
		contentPane.add(new JButton("North"), BorderLayout.NORTH);
		contentPane.add(new JButton("West"), BorderLayout.WEST);
		contentPane.add(new JButton("East"), BorderLayout.EAST);
		contentPane.add(new JButton("South"), BorderLayout.SOUTH);
		contentPane.add(new JButton("Center"), BorderLayout.CENTER);
		
		setSize(400, 200);
		setVisible(true); // �������� ȭ�鿡 ��� <- ��� ������ �������� �´�.
		
	}
	public static void main(String[] args) {
		BorderLayoutEx frame = new BorderLayoutEx();
	}
}