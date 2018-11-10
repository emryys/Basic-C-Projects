#include <stdio.h>
int main(){
	int i,P,Q;
	printf ("Enter P and Q \n");
	scanf ("%d %d",&P,&Q);
	
	for(i=2;i<=P;i++){
		
			if (P % i == 0 && Q % i == 0){
				P = P/i;
				Q =  Q/i;
			}
	}
	printf (" %d / %d",P,Q);
	return 0;
}
