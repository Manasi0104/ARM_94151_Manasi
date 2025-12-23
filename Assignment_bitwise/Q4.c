#include<stdio.h>
#include<stdint.h>
#define BV(n) (1<<(n))
int main()
{
	uint8_t value = 5;
	uint8_t left ;
	uint8_t right;
	print_bin(value);
	left = value << 2;
	printf("\nLeft shift the value by 2 positions : ");
	print_bin(left);
	right = value >> 1;
	printf("\nRight shift the original value by 1 position : ");
	print_bin(right);
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
