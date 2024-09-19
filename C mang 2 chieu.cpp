#include <stdio.h>
#include <stdlib.h>  
int main ()
{
	int n,m;
	printf("Nhap so hang cua mang: "); scanf("%d",&n); 
	printf("Nhap so cot cua mang: "); scanf("%d",&m); 	
	int ma_tran[n][m];											//khai báo mang 2 chi?u 
	printf("Nhap mang: \n"); 									//nhap mang  
	for (int i=1;i<n+1;i++)
	{	for (int j=1;j<m+1;j++)
			{	
			printf("a[%d][%d] = ",i ,j ); 
			scanf("%d", &ma_tran[i][j]); 	
			}
		printf("\n");		
	 } 
																//duyet mang 
	printf("ket qua:\n"); 
	for (int i=1;i<n+1;i++)
	{	for (int j=1;j<m+1;j++)
			{	printf(" %d ", ma_tran[i][j]); 
			}
			printf("\n");
	 } 
	return 0;
}
