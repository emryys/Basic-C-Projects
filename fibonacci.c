#include <stdio.h>
int main()
{
	int temp,num1=1,num2=1,i,j,n;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
	for (i=0;i<n;i++)
		{
			temp=num1;
			num1+=num2;
			num2=temp;
			printf ("%d ",num2);
		}
	printf ("\n");
	num1=1,num2=1;
	}
}
