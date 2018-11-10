#include <stdio.h>
#include <math.h>
#define TRUE 1 
#define FALSE 0
int main ()
{
	int n,i,x;
	scanf ("%d",&n);
	for (i=2; i<n;i++)
	{
		if (isprime (i)  &&  n%i==0) printf ("%d  ",i);
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

