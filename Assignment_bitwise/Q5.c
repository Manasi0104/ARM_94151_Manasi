#include<stdio.h>
#include<stdint.h>
#define BV(n) (1<<(n))
int main()
{
	uint8_t reg = 0xAA;
	uint8_t regr = 0xAA;
	print_bin(reg);	
	reg = reg >> 2;
	char read = reg & 0x02;
	printf("\nRead the value of bits from bit 2 to bit 4 :");
	print_bin(read);
	char write = regr & (BV(2)|BV(3)| ~BV(4));
	write |= BV(2);
	printf("\nWrite the value 0b011 into bits 2 to 4 without changing other bits :");
	print_bin(write);
	}
int print_bin(int n)
{
	int bin,i;
	for(i=7;i>=0;i--)
	{
		bin =(n >>i) & 1;
		printf("%d",bin);		
	}
}
