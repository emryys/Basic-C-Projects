#include <stdio.h>
int main()
{
	int n,i,j,k,x;
	scanf ("%d",&n);
	scanf ("%d",&k);
	x=n;
	for (i=0;i<k;i++)
	{
		x/=10;
	}
	printf ("%d",x);
	return 0;	
}
