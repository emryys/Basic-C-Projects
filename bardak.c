#include <stdio.h>
int main (){
	int height,j,i,sifir,p,k;
	scanf("%d",&height);
	sifir =3*height-4;
	for (i=1;i<=height;i++){
			for (j=0;j<i;j++){
				printf (" ");
			}
			printf("*");
			if(height==i){
				for (p=0;p<i-1;p++)
				printf ("*");
				return 0;
			}
				
			for (k=0;k<sifir;k++){
				printf (" ");
			}
		sifir-=2;
		printf("*");
		printf ("\n");
				
	}
return 0;
}
