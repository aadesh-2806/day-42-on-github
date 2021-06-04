#include<stdio.h>

void main()
{
	
	int i,b[100],a[50][50],s,q,z,c[100],m,n,j,l;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter %d,%d=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}					
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(s=j+1;s<n;s++)
			{
				for(t=s+1;t<n;t++)
				{
					for(u=t+1;u<n;u++)
					{
						
					}
				}
			}
		}
	}
	getch();
	
}
