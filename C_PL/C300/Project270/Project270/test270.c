// TCP/IP ����/Ŭ���̾�Ʈ ���α׷� �����

#include <Stdio.h>
#include <winsock2.h>

#pragma comment(lib, "wsock32.lib")

void main(void)
{
	SOCKET s, cs; // ���� ��ũ����
	WSADATA wsaData;
	struct sockaddr_in sin, cli_addr; // ���� ����ü
	int size = sizeof(cli_addr);
	char data[10] = { 0, };

	if (WSAStartup(WINSOCK_VERSION, &wsaData) != 0)
	{
		printf("WSAStartup ����, �����ڵ� = %d \n", WSAGetLastError());
		return;
	}

	s = socket(AF_INET, SOCK_SREAM, IPPROTO_TCP);

	if (s == INVALID_SOCKET)
	{
		printf("���� ���� ����, �����ڵ� = %d \n", WSAGetLastError());
		WSACleanup();
		return;
	}
}