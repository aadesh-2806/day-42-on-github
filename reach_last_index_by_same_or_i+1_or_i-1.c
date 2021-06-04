#include<stdio.h>
#include<math.h>

void main()
{
	int i,a[50],m,s,r,n,t;
	printf("hello\nenter value=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter %d=",i+1);
		scanf("%d",&a[i]);		
	}
	r=0;
	for(t=0;t<n;t++)
	{
		s=0;
		for(i=n-1;i>t;i++)
		{
			if(a[i]==a[t])
			{
				t=i;
				r++;
				break;
			}
			s++;
		}
		if(s==(n-1-t))
		{
			if(t==n-1)
			{
				break;
			}
			else
			{
				r++;
			}
		}
	}
	printf("%d",r);
	getch();
}
