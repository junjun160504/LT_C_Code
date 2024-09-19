#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main ()
{	
	int n, dem=0;
	scanf("%d", &n);
	int a[n];
	for (int i=0; i<n;i++)
	{	scanf("%d", &a[i]); 	} 
	for (int i=0; i<n;i++)
	{
		for(int j=0; j<n;j++)
		{
			if (a[i]==a[j])
			{dem=dem+1; }
		  
		 }
		break;  
	 }  
	printf("%d", dem); 
	return 0;
}
