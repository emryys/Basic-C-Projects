#include <math.h>
#include <stdio.h>
#define FALSE 0
#define TRUE 1
int main (){
	int i,y,p=4;
	for (i=1;i<p/2;i++){
	
		if (p%i!=0)
			y = TRUE;
		else{
			y= FALSE;
			break;
		}						
	}
	printf ("%d",y);
		return 0;
}
