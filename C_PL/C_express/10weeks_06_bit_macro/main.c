// [예제 6] Bit 매크로
#include <stdio.h>

#define GET_BIT(w, k) (((w) >> (k)) & 0x01)
#define SET_BIT_ON(w, k) ((w) |= (0x01 << (k)))
#define SET_BIT_OFF(w, k) ((w) &= ~(0x01 << (k)))

int main(void)
{
	int data = 8; // 00000000 00000000 00000000 00001000
	printf("%d \n", GET_BIT(data, 3)); // 1

	SET_BIT_ON(data, 2);
	printf("%08X\n", data); // 00000000 00000000 00000000 00001010 -> 00 00 00 0C
	printf("%d\n", GET_BIT(data, 2));

	SET_BIT_OFF(data, 2);
	printf("%08X\n", data); // 00000000 00000000 00000000 00001000 -> 00 00 00 08
	printf("%d\n", GET_BIT(data, 2));

	return 0;
}