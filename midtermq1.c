#include <stdio.h>
int main(){
	int N,i,x;
	don:
	printf ("Enter an positive integer number \n");
	scanf ("%d",&N);
	printf("%d  ",N);
	if (N <= 0){
		printf("You entered an invalid number. Again.. \n");
		goto don;
	}
	for (i=0;;i++){
		if (N % 2 == 1){
		N = 3*N + 1;
		printf ("%d  ",N);
		}	
		if ( N % 2 == 0){
			N = N / 2;
			printf ("%d  ", N);
		}	
		if ( N == 1)
			break;
	}
}
