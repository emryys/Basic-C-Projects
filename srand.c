#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main (){
	unsigned int i,y;
	srand(time(NULL));
	for (i=0;i<30;i++){
		y=rand();
		printf("%u    ",y);
	}
}
