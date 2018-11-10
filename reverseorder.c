#include <stdio.h>
int main()
{
	int n,count=0,sum=0,x,i,j,y,a;
	scanf("%d",&n);
	x=n;
	while (x!=0)  //basamak sayisini bulmak istiyorum
	{
		count++;
		x/=10;
	}
	a=count;
	for (i=0;i<count;i++) //yeni olusan basamaklarin ondaliklari toplami
	{
		y=1;
		for(j=1;j<a;j++) //basamak ondaligini bulmak
		{
			y*=10;
		}
		a--;
		sum += (n%10) * y; //yeni sayiyi olusturmak
		n /= 10;
	}
	printf ("%d",sum);
	return 0;
}
