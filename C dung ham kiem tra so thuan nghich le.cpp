#include <stdio.h>
int nghich(long long int a){
	int m[19];
	int cnt=0;
	while(a>0){
		cnt++;
		m[cnt]=a%10;
		a/=10;
	}
	for(int i=1;i<=cnt/2;i++){
		if(m[i]!=m[cnt+1-i]) return 0;
	}
	return 1;
}
int le(long long int a){
	int s=0;
	while (a>0){
		int c=a%10;
		if(c%2==0) return 0;
		s=s+c;
		a=a/10;
	}
	if(s%2==0) return 0;
	return 1;
}
int main (){
	int t;
	scanf("%d",&t);
	while(t--){
		long long int a;
		scanf("%lld",&a);
		if(nghich(a)&&le(a)) printf("YES\n");
		else printf("NO\n");
		
	}
}

