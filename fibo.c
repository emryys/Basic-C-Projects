#include <stdio.h>
int main ()
{
	int temp,i,num1=0,num2=1,n,a,b,j;
	scanf ("%d",&n);
	for(j=0;j<n ;j++)
	{
	
		for(i=0; i<n; i++)
		{
			if (i==0) b=num2;
			if (i==1) a=num2;
		
			printf("%2d ",num2);	
			temp=num2;
			num2+=num1;
			num1=temp;
		}
		num1=b;
		num2=a;
		printf ("\n");
	}
return 0;
}
