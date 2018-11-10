#include <stdio.h>
int main(){
	int i,j,k,z,yildiz=1,n;
	scanf("%d",&n);
	for (i =1 ; i<=n ; i++){
		for (j=0 ; j <n-i ; j++){
			printf (" ");
		}
		for (k=0 ; k <yildiz ; k++){
			printf ("*");
		}
		for (z=0 ; z <n-i ; z++){
			printf (" ");
		}	
	printf ("\n");
	yildiz+=2;
}
 yildiz-=4;
	for (i=1;i<=n;i++){
		for (j=0 ; j <i ; j++){
			printf (" ");
		}
		for (j=0;j<yildiz;j++){
			printf ("*");
		}	
		for (z=0 ; z <i ; z++){
			printf (" ");
		}
		printf("\n");	
		yildiz-=2;	
	}




return 0;
}
