#include<stdio.h>
#include<stdint.h>
#define BV(n) (1<<(n))
int print_bin(int num);
int main()
{
	uint8_t reg = 0x2A;
	uint8_t p =0x2A;
	uint8_t q =0x2A;
	printf("original value :");
	print_bin(reg);
	printf("\nSet bit number 4");
	reg |= BV(4);
	printf("\nBinary no. is :");
	print_bin(reg);
	printf("\nHexadecimal no. is :");
	printf("%X",reg);
	printf("\nClear bit number 1");
	p &= ~BV(1);
	printf("\nBinary no. is :");
	print_bin(p);
	printf("\nHexadecimal no. is :");
	printf("%X",p);
	printf("\nToggle bit number 5");
	q ^= BV(5);
	printf("\nBinary no. is :");
	print_bin(q);
	printf("\nHexadecimal no. is :");
	printf("%X",q);
	return 0;
}
int print_bin(int num)
{
	int bin,i;
	for(i=7;i>=0;i--)
	{
		bin =(num >>i) & 1;
		printf("%d",bin);
	}
}

