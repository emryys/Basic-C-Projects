#include <stdio.h>
int main(){
	int n,i,j=1,k=1,x;
	scanf ("%d",&n);
	x=n;
	for (i=1;i<=n;i++){
		for(j=1;j<=x;j++){
			printf ("%d",k);
			k++;
		}
	x--;
	k=1;
	printf("\n");
	}
	return 0;
}
