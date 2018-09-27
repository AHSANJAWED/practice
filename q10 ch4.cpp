#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	((c>=97&&c<=122)?printf("lower case\n"):printf("not lower case\n"));
	
	return 0;
	
}
