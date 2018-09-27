#include<stdio.h>
#include<math.h>
int tr(int,int,int);
int main()
{
    int a,b,c;
    printf("ENter the value\n");
    scanf("%d%d%d",&a,&b,&c);
    int ca=tr(a,b,c);
    printf("area=%d\n",ca);
    return 0;
}

int tr(int x,int y,int z)
{
    int s=(x+y+z)/2;
    int area=s*(s-x)*(s-y)*(s-z);
    return sqrt(area);
}