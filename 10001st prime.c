#include <stdio.h>
int check_prime(int a);
int main(){
	int counter,i;
	for (i = 2 ;; i++){
		if (check_prime(i))
			counter++;
		if (counter==10001);
			break;
	}
	printf ("%d",i);
	return 0;

}
int check_prime(int a)
{
   int c;
 
   for ( c = 2 ; c <= a - 1 ; c++ )
   { 
      if ( a%c == 0 )
     return 0;
   }
   return 1;
}
