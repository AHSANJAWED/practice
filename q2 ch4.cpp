#include<stdio.h>
int main()
{
	char c;
	printf("Enter any charcter\n");
	scanf("%c",&c);
	if(c>=65&& c<=90)
	{
		printf("Entered character is a Capital letter\n");
	}
	else if(c>=97 && c<=122)
	{
		printf("entered charcter is a small letter\n");
	}
	else
	{
		printf("entered character is a special symbol\n");
	}
	return 0;
}
