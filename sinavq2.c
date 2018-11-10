#define TRUE 1
#define FALSE 0
#include <stdio.h>
#include <math.h>
int isprime (int x);
int main (){
	int N,k=0,z;
	printf ("Enter a positive integer number \n");
	scanf ("%d",&N);
	z=N;
	while (z!=0 && k<=z){
		N=z+k;
		if (isprime(z)==1 && isprime (k)==1)
			printf("%d = %d + %d \n",N,z,k);
	z--;
	k++;
	}
	return 0;
}
int isprime (int x){
int i,y;
	if (x==0 || x==1)
		return 0;
		y=TRUE;
	for (i =2; i<=sqrt(x);i++){
		if (x%i == 0){
			y =FALSE;
			break;
	}
	}
	return y;
}
