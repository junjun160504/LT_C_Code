#include<stdio.h>
int main()
{
	int a[50],position, i, n, value;
	printf("Nhap so phan tu cua mang : "); scanf("%d",&n);
	for(i=0; i<n; i++)
		{
			printf("Phan tu thu %d la: ", i+1); 
			scanf("%d",&a[i]);
		}
	printf("\n Nhap vi tri can chen : "); scanf("%d",&position );
	printf("\n Nhap gia tri can chen : "); scanf("%d",&value);
	for (i = n-1; i>= position-1; i--)
		{
	    	a[i+1]=a[i];
	  	}
		a[position-1]=value;
	printf(" Mang sau chen la: ");
	for (i = 0; i<=n; i++) printf("%5d",a[i]);
	return 0;
}

  
