#define SIZE 7
#include <stdio.h>
int main()
{
	int a[SIZE] = { 15, 19, 7, 1, 13, 2, 9};
	int hold,i,j,k,s;
	
	printf ("Originial array \n");
	for (s=0;s<SIZE;s++){
		printf("a[%d] = %d   ",s,a[s]);
	}
	printf ("\n\n");
	for ( i=0 ; i<SIZE ; i++){
		
		for ( j=0 ; j<SIZE-1 ; j++){
			
			if (a[j]> a[j+1]){
				
				hold=a[j];
				
				a[j]=a[j+1];
				
				a[j+1]= hold;
				
			}
		}
	}
	printf ("Sorted Array\n");
	for (k=0;k<SIZE;k++){
		printf("a[%d] = %d   ",k,a[k]);
	}
	return 0;
}
