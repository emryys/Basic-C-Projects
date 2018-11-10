#include <stdio.h>
int main (){
int i, j,n,s;
scanf("%d",&n);
for (i =1 ; i<=n ; i++){
	for (s =0 ; s<n-i ; s++){
		printf (" ");
}
		
	for (j=0 ; j<i ; j++){
		printf ("*");
	
	}
	printf ("\n");
}
return 0;
}
