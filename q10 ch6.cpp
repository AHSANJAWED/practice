#include<stdio.h>
int main()
{
	int base,hypo,i;
	printf("Enter a right angled triangle base,hypotenuse\n");
	scanf("%d%d",&base,&hypo);
	printf("ENter prime no. you want to multiply\n");
	scanf("%d",&i);
	for(int side=1 ; side<=30; side++)
	{
	
	if(base*base*i+side*side*i==hypo*hypo*i )
	{
	
	printf("the given triangle with side %d is pythogoreon triplets\n",side);
}

else
{
	//printf("the given triangle with side %d is not pythogoreon triplets\n",side);
}
}
return 0;
}
