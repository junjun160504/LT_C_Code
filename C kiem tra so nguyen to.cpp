#include <stdio.h>
#include <stdlib.h> 
int main ()
{
	int n, dem = 0;;
	scanf("%d", &n); 
	if (n==1 || n<=0 ) 
	{printf ("NO");} 
	else 
	{ 
	for (int i = 2; i <= n - 1  ; i++)
	{	if ((n % i) == 0 )
		{	dem++; } 
	} 
		
	if (dem==0)	{printf ("YES");  } 
 	else { 	printf("NO"); }
	}
	return 0; 
 } 
