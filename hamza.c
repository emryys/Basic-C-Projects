#include <stdio.h>
int main(){
	int fact=1, i, p, n,t;
	double x, us = 1.0, sum = 0, k;
	scanf ("%lf %d",&x,&n);
	
	
	for (i=1;i<=n-1;i++){
		fact=1;
		us=1.0;
		if (i%2==1)
			t=-1;
		else
			t=1;
			for (p=1;p<=i*2;p++){
				fact*=p;
				us *= x;
		}
		k = t * us / (fact);
		sum += k;		
	}
printf ("%lf",sum+1.0);
}
