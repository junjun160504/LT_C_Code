#include <stdio.h>
#include <math.h>
long int ucln(long int a,long int b){
	while(a!=b){
		if(a>b) a=a-b;
		if(a<b) b=b-a;
	}
	return a;
}
int main(){
	long int a,b;
	scanf("%ld%ld",&a,&b);
	printf("%ld\n%ld",ucln(a,b),a*b/ucln(a,b));
}
