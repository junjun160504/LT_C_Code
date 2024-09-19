#include <stdio.h>
#include <stdlib.h>
int main ()
{	
//khai bao 
	int n, a[n],max,dem; 
//nhap lieu 
	printf("Nhap so phan tu cua mang: "); 
	scanf("%d", &n);
	printf("Nhap mang: \n"); 
	for (int i=0; i<n;i++)
	{	
		printf("Phan tu thu %d la: ", i+1); 
		scanf("%d", &a[i]); 	
	}
//tim max va vi tri cua max 
	max=a[0]; 
   for(int j = 1; j < n; j++)
    {
      if( max < a[j] ) 
        {
		 max = a[j];
		 dem=j; 
		 } 
   	}
  	printf("Phan tu lon nhat la: %d o vi tri thu ", max);  
   	for (int t = 0; t<n; t ++)
	   {
	   	if (max == a[t])
			printf(" %d ", t+1);   
		} 
		  
	return 0;
}
