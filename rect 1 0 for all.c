#include<stdio.h>

void main()
{
	
	int i,b[100],a[50][50],k,n,m,j,s;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	i=0;
	while(i<n)												
	{
		j=0;
		while(j<n)
		{
			printf("enter value%d,%d=",i+1,j+1);
			scanf("%d",&a[i][j]);
			j++;
		}
		i++;
	}
	s=1;
	while(s<n)
	{
		i=0;
		while(i<n-2)						//rect 1 0 for all.c
		{
			j=0;
			while(j<n-2)
			{
				if(a[i][j]==1 && a[i][j+s]==1 && a[i+s][j]==1 && a[i+s][j+s]==1)
				{
					printf("yes");
					goto a;
				}
				j++;
			}
			i++;
		}
		s++;
	}
	if(i==n-2)
	{
		printf("no");
	}
	a:;
	getch();
	
}	
