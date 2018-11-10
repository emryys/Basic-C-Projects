#include <stdio.h>
#include <stdlib.h>

void printArray(int array[], int length){
	int i;
for ( i=0;i<length-1;++i)
printf("%d ,",array[i]);
}
int main(){
	int i,j;
int array[16]={5};
for (i=1;i<16;++i)
array[i]=array[i-1]+5;
printArray(array,sizeof(array)/sizeof(int));
srand(time(0L));
int k= rand()%16;
int leftArray[8]={0},rightArray[8]={0};
for (i=k,j=0;i<(k+8);++i,++j)
leftArray[j]=array[i%16];
printArray(leftArray,sizeof(leftArray)/sizeof(int));
for (i=k+8,j=0;i<(k+16);++i,++j)
rightArray[j]=array[i%16];
printArray(rightArray,sizeof(rightArray)/sizeof(int));

return 0;
}
