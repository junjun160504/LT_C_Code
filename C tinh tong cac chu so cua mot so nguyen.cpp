#include <stdio.h>
#include <stdlib.h> 
int main ()
// chua xong 
{
	int n,m, dem=0;
	scanf("%d",&n);
	do
	{
		m=n%10;
		dem=dem+m;
		n=n/10; 
	 } 
	while (n>0); 
	printf("%d", dem); 
	return 0; 
 }
