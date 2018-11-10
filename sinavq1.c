#include <stdio.h>
int main(){
	int N,x;
	scanf ("%d",&N);
	
		if (N<0){
			printf("invalid\n");
			scanf ("%d",&N);
		}
	
		
		while (N!=1){
				x=N;
			if (N%2==0){
					N=x/2;
					printf ("%d    ",N);
			}
			else{
					N=3*x+1;
					printf ("%d    ",N);
			}
				
				
	
		}
	return 0;
}
