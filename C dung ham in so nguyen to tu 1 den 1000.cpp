#include <stdio.h>
#include <stdlib.h> 
int NguyenTo(int n)
{
	int dem=0; 
		for (int i = 2; i < n  ; i++)
		{	
			if ((n % i) == 0 )
			{	dem++; } 
		} 
		if (dem==0)	{return 1;  } 
} 
int main ()
{
	int x; 
	printf("\tSo nguyen to tu 1 den 1000 la: \n"); 
	for (int n=2;n<=1000;n++)
	{ 
		if(NguyenTo(n)==1)
		{
			printf("%d\t",n);
			x+=1;
			if(x%10==0) 
		{
			printf("\n"); 
		}
		}
	} 
		
	return 0; 
 } 
