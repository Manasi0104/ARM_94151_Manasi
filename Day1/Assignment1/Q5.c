#include<stdio.h>
int main()
{
	char ch,a;
	printf("Enter the character : ");
	scanf("%c",&ch);
	if((ch >= 'a' && ch <= 'z') || (ch >= 'A'&& ch <= 'Z'))
	{
		 a = ch ^ 32;
		 printf(" XOR result : %c",a);
	}
	else 
	{
	printf(" Not a alphabet");
	}
	return 0;
}



