#include<stdio.h>
void num(int);
int main()
{
	int p;
	printf("Enter the year\n");
	scanf("%d",&p);
	num(p);
	
	return 0;
}

void num(int n)
{
	for(;n!=0;)
	{
		if(n>=1000)
		{
			n=n-1000;
			printf("M");
		}
		else if(n>=500 && n<1000)
		{
			n=n-500;
			printf("D");
		}
		else if(n>=100 && n<500)
		{
			n=n-100;
			printf("C");
		}
		else if(n>=50 && n<100)
		{
			n=n-50;
			printf("L");
		}
		else if(n>=40 && n<50)
		{
			n=n-40;
			printf("XL");
		}
		else if(n>=30 && n<40)
		{
			n=n-30;
			printf("XXX");
		}
		else if(n>=20 && n<30)
		{
			n=n-20;
			printf("XX");
		}
		else if(n>=10 && n<20)
		{
			n=n-10;
			printf("X");
		}
		else
		{
			switch(n)
			{
				case 1: n=n-1;
				printf("I");
				break;
				
				case 2: n=n-2;
				printf("II");
				break;
				
				case 3: n=n-3;
				printf("III");
				break;
				
				case 4: n=n-4;
				printf("IV");
				break;
				
				case 5: n=n-5;
				printf("V");
				break;
				
				case 6: n=n-6;
				printf("VI");
				break;
				
				case 7: n=n-7;
				printf("VII");
				break;
				
				case 8: n=n-8;
				printf("VIII");
				break;
				
				case 9: n=n-9;
				printf("IX");
				break;
				
				
			}
		}
		
	}
}
