#include <stdio.h>
int main(){
	int SUM1,SUM2,n;
	scanf("%d",&n);
	SUM1 = n*(n+1)*(2*n+1)/6;
	SUM2= n*n*(n+1)*(n+1)/4;
	printf ("%d",SUM2-SUM1);
	return 0;
}
