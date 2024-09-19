#include <stdio.h>
#include <math.h>
int main(){
	long n;
	long tong=0 ;
	scanf("%ld", &n);
	while (n>0){
	tong=tong+n%10;
	n=n/10;
	}
	printf("%ld", tong);
}

