#include<stdio.h>
#include<stdint.h>
#define BV(n) (1<<(n))
int main()
{
	uint16_t reg = 0xABCD;
	char lower = reg & 0x000F;
	printf("lower 4 bits : %X",lower);
	reg = reg >> 4;
	char upper = reg & 0x000F;
	printf("\nUpper 4 bits of lower byte : %X",upper);
	return 0;
}
