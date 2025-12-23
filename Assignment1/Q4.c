#include <stdio.h>
int check_parity(int n);
int main()
{
	int i,b;
	unsigned int num;
	printf("Enter number :");
	scanf("%d",&num);
	check_parity(num);
	return 0;
}
int check_parity(int n)
{
	int count=0,a;
	a=n;
	while(n>0)
	{
		if(n & 1)
		{
			count++;
		}
		n = n >> 1;
	}
	if(count % 2 != 0)
	{
		a = a | 0x80;
	}
	printf("%d",a);
}
