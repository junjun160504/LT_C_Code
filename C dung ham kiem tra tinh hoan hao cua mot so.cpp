#include <stdio.h>
void HoanHao(int n)
{
	int dem=0; 
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
		return;	
} 
int main()
{
	int n; 
	printf("\tNhap so can kiem tra tinh hoan hao: "); scanf("%d",&n);
	HoanHao(n); 
	return 0; 
}
