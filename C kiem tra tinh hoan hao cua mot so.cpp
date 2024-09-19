#include <stdio.h>
int main()
{
	int n, dem=0; 
	printf("\tNhap so can kiem tra tinh hoan hao: "); scanf("%d",&n);
	for(int i=1; i<n; i++)
	{
		if((n%i==0) )
		{
			dem+=i; 
		}
	} 
	if(dem==n)
	{
		printf("\n\t%d la so hoan hao\n", n); 
	}
	else printf("\n\t%d la so khong hoan hao\n", n); 
	return 0; 
}
