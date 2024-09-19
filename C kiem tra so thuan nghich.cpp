#include <stdio.h>
#include <stdlib.h> 
int main ()
{
	int n; 
	scanf("%d", &n);
	int m=n; 
	int dao;
	while (n)	{	
		dao= dao *10 + n % 10;
		n /=10;
	}
	if (m==dao)	{	printf("YES");  } 
	else 	{printf("NO");  } 
	return 0;
}
