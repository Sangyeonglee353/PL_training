public class ScoreAverage {
	public static void main(String[] args) {
		double score[][] = {{4.0, 4.5}, // 1�г� 1, 2�б� ����
							{4.5, 4.5}, // 2�г� 1, 2�б� ����
							{4.5, 4.5}, // 3�г� 1, 2�б� ����
							{4.5, 4.5}}; // 4�г� 1, 2�б� ����
		double sum = 0;
		
		for(int year = 0; year < score.length; year++) // �� �г⺰�� �ݺ�
			for(int term = 0; term < score[year].length; term++) // �� �г��� �б⺰�� �ݺ�
				sum += score[year][term]; // ��ü ���� ��
		
		int n = score.length;    // �迭�� �� ����, 4
		int m = score[0].length; // �迭�� �� ����, 2
		
		System.out.println("4�� ��ü ���� ����� " + sum/(n*m));
	}
}