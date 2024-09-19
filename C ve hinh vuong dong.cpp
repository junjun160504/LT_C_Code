#include <stdio.h>
#include <stdlib.h> 
int main ()
//// chua xong  
{
	int n;
	scanf("%d", &n);
	for (int i=0; i <= n; i++)
	{
		for (int j =0; j<n ; j++)
		{	if (i==0 || i==n-1 || j==0 || j==n-1 )
		{
			printf ("%d",i);
		 } 
			else {
				for (int t=i; t<=i; t--);
				printf ("t");
		}
		 } 
		 printf ("\n");  
	} 
	return 0; 
 } 
 
