public class Song { // Song �̸��� Ŭ���� ����
	private String title; // ���ڿ� title ������ private Ÿ������ ����
	
	public Song(String title) { // Song�� �����ڷ� �Ű������� ���ڿ��� ����
		this.title = title;     // ���� ���ڿ��� �ش� Ŭ������ title ������ ����
	}
	
	public String getTitle() { // Song Ŭ������ getTitle() �޼ҵ� ����
		return title; // Song Ŭ������ title ������ ���ڿ��� ������
	}
	
	// �ڹ� ���α׷��� ���� ������ �˸��� main() �޼ҵ�(�Լ�)
	public static void main(String[] args) {
		// ���۷��� ���� mySong�� ����� ���ÿ� ��ü ���� �� ���� ����
		Song mySong = new Song("Nessun Dorma");
		// ���۷��� ���� yourSong�� ����� ���ÿ� ��ü ���� �� ���� ����
		Song yourSong = new Song("���ִ� �� �� �̷��");
		// �ش� ��ü�� ����Ű�� ���۷����� �޼ҵ�� �� ���
		System.out.println("�� �뷡�� " + mySong.getTitle());
		// �ش� ��ü�� ����Ű�� ���۷����� �޼ҵ�� �� ���
		System.out.println("�� �뷡�� " + yourSong.getTitle());
	}
}