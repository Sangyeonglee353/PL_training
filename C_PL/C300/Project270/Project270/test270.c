// TCP/IP 서버/클라이언트 프로그램 만들기

#include <Stdio.h>
#include <winsock2.h>

#pragma comment(lib, "wsock32.lib")

void main(void)
{
	SOCKET s, cs; // 소켓 디스크립터
	WSADATA wsaData;
	struct sockaddr_in sin, cli_addr; // 소켓 구조체
	int size = sizeof(cli_addr);
	char data[10] = { 0, };

	if (WSAStartup(WINSOCK_VERSION, &wsaData) != 0)
	{
		printf("WSAStartup 실패, 에러코드 = %d \n", WSAGetLastError());
		return;
	}

	s = socket(AF_INET, SOCK_SREAM, IPPROTO_TCP);

	if (s == INVALID_SOCKET)
	{
		printf("소켓 생성 실패, 에러코드 = %d \n", WSAGetLastError());
		WSACleanup();
		return;
	}
}