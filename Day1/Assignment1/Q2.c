#include<stdio.h>
int print_binary(int n);
int main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	//num = 0x0F;
	printf("\nBinary Number :");
	print_binary(num);
	return 0 ;
}
int print_binary(int n)
{
	int bin,i;
	for(i=7;i>=0;i--)
	{
		bin =(n >>i) & 1;
		printf("%d",bin);
	}
}
