#include <math.h>
#include <stdio.h>
#define TRUE 1
#define FALSE 0
int isprime (int );
int main()
{
	int num1,num2,i;
	scanf("%d %d",&num1,&num2);
	
	if (num1 > num2)
	{
		for (i = num2 ; i <= num1 ; i++)
		{
			if (isprime(i))
			{
				printf("%d  ",i);
			}
		}
	}
	if (num2 > num1)
	{
		for (i = num1 ; i <= num2 ; i++)
		{
			if (isprime(i)==1)
			{
				printf("%d  ",i);
			}
		}
	}

return 0;
}
int isprime (int x)
{
int i,y;
y= TRUE;
	for (i=2;i<=sqrt(x);i++)
	{
		if (x%i == 0)
			y=FALSE;
	}	
	if (x==2 || x==3) 
			y=TRUE;
	return y;
}
