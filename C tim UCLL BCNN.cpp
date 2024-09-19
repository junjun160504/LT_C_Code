#include <stdio.h>
#include <stdlib.h> 
//chua xong
int main ()
{
	long long  a,b;  
	scanf("%lli %lli", &a, &b);
	for (int j=a+b; j>=1 ;j--)
	{
		if (a%j==0 && b%j==0)
		{
			printf("%d\n", j); 
				 break; 
		 } 
	
	 } 
	long long i=(a*b)/j;
	printf("%lli", i); 
	return 0; 
 }
