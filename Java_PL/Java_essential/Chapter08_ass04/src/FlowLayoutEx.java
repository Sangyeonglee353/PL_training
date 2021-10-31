import javax.swing.*;
import java.awt.*;

public class FlowLayoutEx extends JFrame{
	public FlowLayoutEx(){
		setTitle("FlowLayout Practice");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		Container contentPane = getContentPane(); // ����Ʈ�� �˾Ƴ���
		
		// ����Ʈ���� FlowLayout ��ġ������ �����ϱ�
		contentPane.setLayout(new FlowLayout());
		
		contentPane.add(new JLabel("100 + 200"));
		contentPane.add(new JButton("="));
		contentPane.add(new JLabel("300"));
		
		setSize(300, 200);
		setVisible(true);
	}
	public static void main(String[] args) {
		FlowLayoutEx frame = new FlowLayoutEx();
	}
}