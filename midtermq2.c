#include <stdio.h>
#define TRUE 1
#define FALSE 0
int isprime (int x);
int main (){
	int N,y,x=0;
	printf ("Enter an even integer number \n");
	scanf ("%d",&N);
	y=N;
	while (y!=0){
		if (isprime(y) && isprime(x))
			printf("%d + %d = %d \n",y,x,N);
	y--;
	x++;
	}
return 0;
	}
int isprime (int x){
	int i,y;
	if (x==0 || x==1)
		y=FALSE;
	for (i=2 ; i < x/2 ; i++){
		
		if ( x % i !=0){
			y = TRUE;
		}
		if ( x % i == 0){
			y = FALSE;
			break;
		}
	
	}
return y;
}
