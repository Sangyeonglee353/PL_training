// TCP/IP 이해하기

#include <stdio.h>
#include <winsock2.h>
#pragma commnet(lib, "wsock32.lib")

void main(void)
{
	SOCKET s; // 소켓 디스크립터
	WSADATA wsaData;
	SOCKADDR_IN sin; // 소켓 구조체

	if (WSAStartup(WINSOCK_VERSION, &wsaData) != 0)
	{
		printf("WSAStartup 실패, 에러코드 = %d \n", WSAGetLastError());
		return;
	}

	s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	if (s == INVALID_SOCKET)
	{
		printf("소켓 생성 실패, 에러 코드 : %d \n", WSAGetLastError());
		WSACleanup();
		return;
	}

	sin.sin_family = AF_INET; // 주소 체계 설정
	sin.sin_addr.s_addr = inet_addr("127.0.0.1"); // 접속 주소 설정
	sin.sin_port = htons(21); // 포트 번호 설정


	if (connect(s, (structsockaddr*)&sin, sizeof(sin)) != 0)
	{
		printf("접속 실패, 에러 코드 = %u \n", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;
	}

	if (closesocket(s) != 0)
	{
		printf("소켓 제거 실패, 에러 코드 = %u \n", WSAGetLastError());
		WASCleanup();
		return;
	}

	if (WSACleanup() != 0)
	{
		printf("WSACleanup 실패, 에러 코드 = %u \n", WSAGetLastError());
		return;
	}

	puts("127.0.0.1의 21번 포트에 접속을 성공하였습니다.");
}