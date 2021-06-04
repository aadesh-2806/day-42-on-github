#include<stdio.h>
#include<math.h>
void main()
{
	
	int a,b,c,s;
	float r,x;
	printf("hello\nenter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	printf("enter c=");
	scanf("%d",&c);
	
	s=(b*b)-(4*a*c);
	
	if(s<0)
	{
		printf("root are imaginary\n");
		r=(pow(-s,0.5)/(2*a));
		
		x=(-b)/(2*a);
		printf("%f+i(%f)\n",x,r);
		
		printf("%f-i(%f)",x,r);
	}
	
	if(s>0)
	{
		printf("root are real\n");
	
		r=(-b+pow(s,0.5)/(2*a));
		printf("%f\n",r);
	
		r=(-b-pow(s,0.5)/(2*a));
		printf("%f",r);
	}
	
	if(s==0)
	{
		printf("root are equal\n");
	
		r=(-b+pow(s,0.5)/(2*a));
		printf("%f\n",r);
	
		r=(-b-pow(s,0.5)/(2*a));
		printf("%f",r);
	}
	
	getch();
	
}	
