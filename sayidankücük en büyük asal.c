#include <math.h>
#include <stdio.h>
#define TRUE 1
#define FALSE 0
int main()
{
	int n,i,flag,j;
	scanf ("%d",&n);

	for (i=n-1;i<n;i--)
	{
			flag=1;
		for (j=2;j<=sqrt(i);j++)
		{
			if (i%j==0) flag=0;
		}
		if (flag==1) break;
	}
	printf ("%d",i);
	
return 0;
}

