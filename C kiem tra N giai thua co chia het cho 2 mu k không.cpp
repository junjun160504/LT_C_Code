#include <stdio.h>
#include <math.h>
int degree(int n){
    int ans=0;
    for(int i=2;i<=n;i=i*2){
        ans+=n/i;
    }
    return ans;
}
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    if(k<=degree(n)) printf("Yes");
    else printf("No");
}

