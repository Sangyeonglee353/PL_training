import javax.swing.*;
public class JFrameEx extends JFrame {
	public JFrameEx(){
		setTitle("Let's study Java");
		setSize(400, 200);
		setVisible(true);
	}
	public static void main(String[] args) {
		JFrameEx frame = new JFrameEx();
	}
}