// TCP/IP �����ϱ�

#include <stdio.h>
#include <winsock2.h>
#pragma commnet(lib, "wsock32.lib")

void main(void)
{
	SOCKET s; // ���� ��ũ����
	WSADATA wsaData;
	SOCKADDR_IN sin; // ���� ����ü

	if (WSAStartup(WINSOCK_VERSION, &wsaData) != 0)
	{
		printf("WSAStartup ����, �����ڵ� = %d \n", WSAGetLastError());
		return;
	}

	s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	if (s == INVALID_SOCKET)
	{
		printf("���� ���� ����, ���� �ڵ� : %d \n", WSAGetLastError());
		WSACleanup();
		return;
	}

	sin.sin_family = AF_INET; // �ּ� ü�� ����
	sin.sin_addr.s_addr = inet_addr("127.0.0.1"); // ���� �ּ� ����
	sin.sin_port = htons(21); // ��Ʈ ��ȣ ����


	if (connect(s, (structsockaddr*)&sin, sizeof(sin)) != 0)
	{
		printf("���� ����, ���� �ڵ� = %u \n", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;
	}

	if (closesocket(s) != 0)
	{
		printf("���� ���� ����, ���� �ڵ� = %u \n", WSAGetLastError());
		WASCleanup();
		return;
	}

	if (WSACleanup() != 0)
	{
		printf("WSACleanup ����, ���� �ڵ� = %u \n", WSAGetLastError());
		return;
	}

	puts("127.0.0.1�� 21�� ��Ʈ�� ������ �����Ͽ����ϴ�.");
}