#define SIZE 40
#include <stdio.h>
int main()
{
	int a[SIZE],n,i,max,min,j,y;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		printf (" \n a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	max = a[0];
	min = a[0];
	for (j=0;j<n;j++)
	{
		if (a[j]%2 == 0 && max < a[j]) max = a[j];
			
		else if (a[j] % 2 ==1 && min > a[j]) min= a[j];
			
	}
	printf ("max = %d   min = %d",max,min);
	return 0;
}
