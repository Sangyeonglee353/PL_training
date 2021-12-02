#include "Employee.h"

// ��� ���� �Է� �Լ� ����
E get_record()
{
	E data;

	getchar(); // �ٹٲ� ���� ���ֱ�
	printf("�����: "); gets_s(data.Name, SIZE); // �̸��� �Է¹޴´�.
	printf("�ֹε�Ϲ�ȣ: "); gets_s(data.PersonID, SIZE); // �ֹε�Ϲ�ȣ�� �Է¹޴´�.
	printf("�ּ�: "); gets_s(data.Address, SIZE); // �ּҸ� �Է¹޴´�.
	printf("�Ի�⵵(YYYY MM DD): "); scanf("%d %d %d", &data.InitDate.year, &data.InitDate.month, &data.InitDate.day);
	printf("�⺻�޿�: "); scanf("%d", &data.Salary); // �޿����� �Է¹޴´�.

	return data;
}

// ���� ȭ�� ��� �Լ� ����
void mainDisplay()
{
	// ���� ȭ�� �Լ�
	printf("=====������� �������α׷�=====\n");
	printf("1. ��� �߰�\n");
	printf("2. ��� �˻�(�̸�)\n");
	printf("3. ��� ����\n");
	printf("4. ��ü ������� ���(�������)\n");
	printf("q. ���α׷� ����\n");
	printf("===============================\n");
	printf("���Ͻô� �޴��� �������ּ���: ");
}

// ��� �߰� �Լ� ����
void add_record(FILE* fp)
{
	E data;

	data = get_record();    // ����ڷκ��� �����͸� �޾Ƽ� ����ü�� ����
	fseek(fp, 0, SEEK_END); // ������ ������ ����.
	fwrite(&data, sizeof(data), 1, fp); // ����ü �����͸� ���Ͽ� ����.
	printf("���� ó���Ǿ����ϴ�.\n");
}

// ��� �˻� �Լ� ����
int search_record(FILE* fp)
{
	char name[30];
	E data;

	fseek(fp, 0, SEEK_SET); // ������ ó������ ����.

	// #1. ã�� ����� �Է� �ޱ�
	getchar(); // �ٹٲ� ���� ���ֱ�
	printf("ã���� ������� �Է��ϼ���: ");
	gets_s(name, 30);

	// #2. ��� ���� ���� ����ϱ�
	while (!feof(fp)) { // ������ ������ �ݺ��Ѵ�.
		fread(&data, sizeof(data), 1, fp); // ���� ��ġ���� �����͸� �д´�.
		if (strcmp(data.Name, name) == 0) { // �̸��� ���Ѵ�
			print_record(data); // ��ġ�ϸ� ȭ�鿡 ����Ѵ�.
			return 0;
		}
	}
	printf("��ġ�ϴ� ����� �����ϴ�.\n");
	return 0;
}

// ��� ���� �Լ� ����
int delete_record()
{
	char name[30];
	int index = 0;
	int find_pos; // ã�� ��ġ
	FILE* fp;
	E data, fdata[50];

	// #1. ���Ͽ��� �����͸� �о�� �迭�� �����ϱ�
	// ������ �̾�� ���� ����.
	if ((fp = fopen("companyData.dat", "a+")) == NULL) {
		fprintf(stderr, "�Է��� ���� ������ �� �� �����ϴ�.");
		exit(1);
	}

	fseek(fp, 0, SEEK_SET); // ������ ó������ ����.

	while (!feof(fp)) { // ������ ������ �ݺ��Ѵ�.
		fread(&data, sizeof(data), 1, fp); // ���� ��ġ���� �����͸� �д´�.

		// ���Ͽ� ����� �����͸� �迭�� �޾Ƴ���.
		strcpy(fdata[index].Name, data.Name);
		strcpy(fdata[index].PersonID, data.PersonID);
		strcpy(fdata[index].Address, data.Address);
		fdata[index].InitDate.year = data.InitDate.year;
		fdata[index].InitDate.month = data.InitDate.month;
		fdata[index].InitDate.day = data.InitDate.day;
		fdata[index].Salary = data.Salary;
		index++; // ��� �� ī��Ʈ
	}
	fclose(fp);

	// #2. ������ ������� �Է¹޾� �˻��� �� �����ϱ�
	// #2-1. ������ ����� �Է¹ޱ�
	getchar(); // �ٹٲ� ���� ���ֱ�
	printf("�����Ͻ� ������� �Է����ּ���:");
	gets_s(name, 30);

	// #2-2. �˻� �� �����ϱ�
	for (int pos = 0; pos < index; pos++) {
		if (strcmp(fdata[pos].Name, name) == 0) { // �̸� ���ϱ�
			printf("������ ����� �˻��Ǿ����ϴ�. �����Ͻðڽ��ϱ�(y/n)?");
			int yn = _getche();
			if (yn == 'y') {
				find_pos = pos; // ã�� ��ġ ����

				// ��� ���� �����
				for (int i = find_pos; i < index - 1; i++) {
					strcpy(fdata[i].Name, fdata[i + 1].Name);
					strcpy(fdata[i].PersonID, fdata[i + 1].PersonID);
					strcpy(fdata[i].Address, fdata[i + 1].Address);
					fdata[i].InitDate.year = fdata[i + 1].InitDate.year;
					fdata[i].InitDate.month = fdata[i + 1].InitDate.month;
					fdata[i].InitDate.day = fdata[i + 1].InitDate.day;
					fdata[i].Salary = fdata[i + 1].Salary;
				}
				index--; // ��ü ��� ��� ����

				printf("\n");

				// ������ ���� ������� ����
				if ((fp = fopen("companyData.dat", "wb")) == NULL) {
					fprintf(stderr, "�Է��� ���� ������ �� �� �����ϴ�.");
					exit(1);
				}
				fseek(fp, 0, SEEK_SET); // ������ ������ ����

				// ��� ���� ���Ͽ� ������Ʈ
				for (int i = 0; i < index - 1; i++)
				{
					fwrite(&fdata[i], sizeof(fdata[i]), 1, fp); // ����ü �����͸� ���Ͽ� ����.
				}
				fclose(fp);

				printf("\n��� ������ ������ �Ǿ����ϴ�.\n");
				return 0;
			}
			else if (yn == 'n') {
				printf("\n��� ���� ������ ����մϴ�.\n");
				return 0;
			}
			else {
				fflush(stdin);
				printf("\n�߸��Է��ϼ̽��ϴ�.\n");
				return 0;
			}
			break;
		}
	}
	printf("��ġ�ϴ� ����� �����ϴ�.\n");
	return 0;
}

// ��ü ��� ���� ��� �Լ� ����
void print_all_record(FILE* fp)
{
	int num = 0;
	E data, fdata[50];
	printf("��� ������ ����մϴ�.\n");
	fseek(fp, 0, SEEK_SET); // ������ ó������ ����.
	fflush(fp); // ���� ����� �� ��� ��ȯ

	while (!feof(fp)) { // ������ ������ �ݺ��Ѵ�.
		fread(&data, sizeof(data), 1, fp); // ���� ��ġ���� �����͸� �д´�.

		// ���Ͽ� ����� �����͸� �迭�� �޾Ƴ���.
		strcpy(fdata[num].Name, data.Name);
		strcpy(fdata[num].PersonID, data.PersonID);
		strcpy(fdata[num].Address, data.Address);
		fdata[num].InitDate.year = data.InitDate.year;
		fdata[num].InitDate.month = data.InitDate.month;
		fdata[num].InitDate.day = data.InitDate.day;
		fdata[num].Salary = data.Salary;
		num++;
	}

	for (int i = 0; i < num - 1; i++) { // �������� �ѹ� �� ��µǴ� ���� �ذ�
		printf("\n%d. ", i + 1);
		print_record(fdata[i]);
	}
	printf("\n��� ������ ��� ����߽��ϴ�.\n");
}

// ��� ���� ��� �Լ� ����
void print_record(E data)
{
	printf("\n");
	printf("�����: %s\n", data.Name);
	printf("�ֹε�Ϲ�ȣ: %s\n", data.PersonID);
	printf("�ּ�: %s\n", data.Address);
	printf("�Ի� ����: %d�� %d�� %d��\n", data.InitDate.year, data.InitDate.month, data.InitDate.day);
	printf("�⺻�޿�: %d��\n", data.Salary);
}
