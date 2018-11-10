#include <stdio.h>
int main()
{
	char a[5]={"a$bc!"};
	char b[5];
	int i,y;
	printf ("ORIGINAL STRING : %s \n",a);
	for (i=0;i<5;i++)
	{
		y=i;
		 if (a[i]<65)
			 b[i]=a[i];	
		
		else if (a[i]>=65)
		{
		
			while (a[4-y]<65)
			{
				y++;	
			}
			b[i]=a[4-y];
		}
				
			
	}
	
	printf ("REVERSED STRING : %s",b);
	
	

	return 0;
}
