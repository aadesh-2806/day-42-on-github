#include<stdio.h>

int rec(int ,int );
void main()
{
	
	int i,b[100],a[50][50],s,q,z,c[100],m,n,j,l;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);
	
	i=0;	
	s=rec(n,i);
	
	getch();
	
}
int rec(int a,int b)
{
	int r;
	r=a%10;
	if(r==0)
	{
		
	}
	return rec(a/10);
}
