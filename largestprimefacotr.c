#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0
 
 long long  primefunc(long long x);

int main (){
	
	long long x,i,large;
	scanf ("%lld",&x);
	
		for (i=2;i<=x;i++){
			
			if (x%i == 0 &&primefunc(i)==1)
				large = i;
	}
	
	printf("Largest prime factor = %lld",large);
	
	return 0;
}
 long long primefunc(long long x){
int y;

long long i;
	if (x == 2){
		return 1;
	}
	for (i = 2 ; i < sqrt(x) ; i++){
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
