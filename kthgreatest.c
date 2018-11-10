#include <stdio.h>
// vay amina koyim ilk defa bir programim tekte çalisti.
int kthgreatest(int [],int ,int );
int main ()
{
	int y;
	int a[5] = {2,8,4,5,3};
	y = kthgreatest(a,5,3);
	printf("%d",y);
	return 0;
}
int kthgreatest(int a[],int N,int k){
	int i,j,hold;
	for (j=0;j<N;j++)
	{
		for (i=0;i<N-1;i++)
		{
			if (a[i]<a[i+1])
			{
				hold = a[i];
				a[i] = a[i+1];
				a[i+1] = hold;
			}
				
		}
	}
	return a[k-1];
}
