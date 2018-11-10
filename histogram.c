#include <stdio.h>
#define SIZE 5
int main (){
int histogram[SIZE];
int i,j;
 for (i=0;i<SIZE;i++){
 	scanf ("%d",&histogram[i]);
 
 }	
 for (i=0;i<SIZE;i++){
 	for (j=0;j<histogram[i];j++){
 		printf ("*");
	 }
 	printf("\n");
 }
 return 0;
}
