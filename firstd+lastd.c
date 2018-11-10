#include <stdio.h>
int main()
{
	int n,i,x,sum=0,firstdigit,count;
	scanf ("%d",&n);
	firstdigit= n%10;
	x=n;
	
	while (n!=0)
	{
		count++;
		n /= 10;
	}
	
	for (i=0;i<count-1;i++)
	{
		x /= 10;
	}
	
	sum = x + firstdigit;
	printf ("%d",sum);
	
	return 0;
}
