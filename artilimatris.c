#include <stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	if (n%2==1)
	{
		for (i=0;i<n;i++)
		{
			if (i==n/2)
			{
				for (k=0;k<n;k++)
				{
					printf("*");
				}
				goto atla;
			}
			for (j=0; j<n; j++)
			{
				if (j==n/2) printf ("*");
				else printf(" ");
			}
			atla:
			printf ("\n");
		}
	}
	else
	{
			for (i=1;i<=n;i++)
		{
			if (i==n/2 || i == (n/2)+1 )
			{
				for (k=0;k<n;k++)
				{
					printf("*");
				}
				goto atla2;
			}
			for (j=1; j<=n; j++)
			{
				if (j==n/2 || j==(n/2)+1) printf ("*");
				else printf(" ");
			}
			atla2:
			printf ("\n");
		}
		
	}
return 0;
}
