#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0;
int prime(int x);
int main(){
	int counter=0,i;
	for (i = 2 ;; i++){
		if (prime(i)){
		++counter;
		}
		if (counter==10001){
			break;
		}
			
	}
	printf ("%d",i);
	return 0;
}
int prime(int x){
	int y,i;
	if (x==2 || x==3)
		return 1;
	
	for (i = 2 ; i <= sqrt(x) ; i++){
		if ( x % i != 0){
			y = TRUE;
		}
		if ( x % i == 0){
			y = FALSE;
			break;
		}			
	}
	return y;
}

