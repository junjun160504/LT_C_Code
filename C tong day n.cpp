#include <stdio.h>
#include <stdlib.h> 
int main ()
{
	int n, dem1=0, dem2=0, dem3=0; 
	long long tong, tich; 
	scanf("%d", &n);
	for (int i=0; i<=n; i++)
	{
		dem1=dem1+i; 
		if (i%2==0)
		{
			dem2=dem2+i; 
		} 
		else 
		{
			dem3=dem3+i; 
		 } 
	 } 
	printf("%d\n%d\n%d", dem1, dem2, dem3); 
	tong = dem1+dem2+dem3;
	tich = dem1*dem2*dem3; 
	printf("\n%lli\n%lli\n", tong , tich); 
	if (tich > 2712)
	{
		printf("YES"); 
	 } 
	else 
	{
		printf("NO"); 
	 } 
	return 0; 
 }  
