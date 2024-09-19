#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int t;
	scanf("%d", &t);
	for (int v=1; v<=t ; v++ )
	{
		for (int u = 1 ; u<=v;u++) 
		{	printf(" * "); 		}
		for (int j = 1;j <=t ;j++){
			if (j <= t-v)
				printf (" ");
			else printf (" * "); 
		} 
		printf(" \n");
	 }
	 for (int v=t; v>=1 ; v-- )
	{
		for (int u=v ; u>=1;u--) 
		{	printf(" * ");}
		for (int j = 1;j <=t ;j++){
			if (j <=v)
				printf (" ");
			else printf (" * "); }
		
		printf(" \n");  
	 } 
 } 
