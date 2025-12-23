#include<stdio.h>
void swap(int a,int b);
int main()
{
	int num1 , num2,temp;
	printf("Enter num 1 :");
	scanf("%d",&num1);
	printf("Enter num 2 :");
	scanf("%d",&num2);
	printf("After swapping result :\n");
	swap(num1,num2);
	return 0;
}
void swap(int a,int b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf(" num1 = %d\n",a);
	printf(" num2 = %d",b);
}
