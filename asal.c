#include<stdio.h>
#include <math.h>
 
int checkprimenumber(int n);
int main()
{
    int n1,n2,i,flag;
    
    printf("enter the two positive integers:");
    scanf("%d %d",&n1,&n2);
    printf("prime numbers between %d and %d are: ",n1, n2);
    
    if( n1 < n2 ) {
    
    for(i=n1; i<=n2; ++i)
    {
        	if(checkprimenumber(i))
        	printf("%d ",i);   
    }
}
	else
	{
		for(i=n2; i<=n1; ++i)
   		 { 
        	if(checkprimenumber(i))
        	printf("%d ",i);
    	}
	}
	

    return 0;
 
}
 
int checkprimenumber(int n)
{
    int j, flag=1;
    
    for( j = 2; j <= sqrt(n); j++ )
    {
        if( n % j == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

