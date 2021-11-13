import java.awt.*;
import java.awt.event.*;
import javax.swing.*;


public class ComboActionEx extends JFrame{
	private String[] fruits = {"apple", "banana", "mango"}; // �޺��ڽ� ������
	private ImageIcon[] images = {new ImageIcon("images/apple.jpg"),
								new ImageIcon("images/banana.jpg"),
								new ImageIcon("images/mango.jpg")};
	private JLabel imgLabel = new JLabel(images[0]); // �̹����� ����� ���̺�
	
	public ComboActionEx() {
		setTitle("�޺��ڽ� Ȱ�� ����");
		Container c = getContentPane();
		c.setLayout(new FlowLayout());
		JComboBox<String> combo = new JComboBox<String>(fruits); // �޺��ڽ� ����
		c.add(combo);
		c.add(imgLabel);
		
		// �޺��ڽ��� Action ������ ���, ���õ� �������� �̹��� ���
		combo.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e){
				// Action �̺�Ʈ�� �߻��� �޺��ڽ� �˾Ƴ���
				JComboBox<String> cb = (JComboBox<String>)e.getSource();
				// �޺��ڽ��� ���õ� �������� �ε��� ��ȣ �˾Ƴ���
				int index = cb.getSelectedIndex();
				// �ε����� �̹����� �̹��� ���̺� ���
				imgLabel.setIcon(images[index]);
			}
		});
		
		setSize(300, 250);
		setVisible(true);
	}
	
	public static void main(String[] args) {
		new ComboActionEx();
	}
}
