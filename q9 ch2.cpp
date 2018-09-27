#include<stdio.h>
int main()
{
	
	int cur,d100,d50,d10,d5,d2,d1;
	printf("Enter the amount");
	scanf("%d",&cur);
	d100=cur/100; cur=cur%100;
		d50=cur/50; cur=cur%50;
			d10=cur/10; cur=cur%10;
				d5=cur/5; cur=cur%5;
					d2=cur/2; cur=cur%2;
						d1=cur/1; 
						
						printf("Denominations\n Re100=%d\n Re50=%d\n Re10=%d\n Re5=%d\n Re2=%d\n Re1=%d\n",d100,d50,d10,d5,d2,d1);
	
	return 0;
}
