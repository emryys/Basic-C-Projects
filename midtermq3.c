#include <stdio.h>
#define TRUE 1
#define FALSE 0
void display_mixed(int A[],int B[],int na, int nb);
int main (){
	int i;
	int A[10],B[10];
printf ("Determine the size of Array A \n");
scanf ("%d",&na);
printf ("ENTER THE ELEMENTS OF A ARRAY\n");
for (i=0;i<na;i++){
	scanf("%c",&A[i])
}
printf ("Determine the size of Array B\n");
scanf ("%d",&nb);

printf ("ENTER THE ELEMENTS OF B ARRAY\n");
for (i=0;i<nb;i++){
	scanf("%c",&B[i])
}


	return 0;
}
void display_mixed(int A[],int B[],int na, int nb){
	int x;
	for (x=0; x<10;x++){
		putchar(A[x]);
		putchar(B[x]);
	}
}
