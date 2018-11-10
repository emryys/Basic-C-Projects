#include <stdio.h>
#include <math.h>

unsigned long getSumOfOddDigits (unsigned long );

int main()
{
	int y;
	unsigned long n;
	scanf("%ul",&n);
	y=getSumOfOddDigits(n);
	printf("%d",y);
	
	return 0;
}

 unsigned long getSumOfOddDigits (unsigned long n)
{
	int i=1,x=1,sum=0;
	
	while (n!=0)
	{	
		if ((n%10)%2 == 1)
		sum += (n%10);
		
		n /= 10;
	}
	return sum;
}
