#include <stdio.h>
#include <stdlib.h> 
//chua xong  
int main ()
{
	int n;
	scanf("%d", &n);
	for (int i=1; i <=n;i++)
	{	printf("%d",i); 	}
	printf("\n"); 
	for (int i=n; i >=n-1;i--)
	{	printf("%d",i); 	} 
	return 0;
}
