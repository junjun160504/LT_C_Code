#include <stdio.h>
int min(int a,int b){
	if(a>b) return b; 
	return a;
}
int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a*2-1;i++){
		for(int j=1;j<=a*2-1;j++){
			int x=min(min(j-1,a*2-1-j),min(i-1,a*2-1-i));
			printf("%d",a-x);
		}
		printf("\n");
	}	
}
