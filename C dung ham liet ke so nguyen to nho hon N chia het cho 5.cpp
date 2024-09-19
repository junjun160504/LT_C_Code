#include <stdio.h>
#include <math.h>
int m[100001];
void sang(){
    for(int i=0;i<=100001;i++){
        m[i]=1;
    }
    m[0]=m[1]=0;
    for(int i=2;i<=sqrt(100001);i++){
        if(m[i]>0){
            for(int j=i*i;j<=100001;j=j+i){
                m[j]=0;
            }
        }
    }
}
int nam(int a){
    int s=0;
    while(a>0){
        s=s+a%10;
        a=a/10;
    }
    if(s%5==0) return 1;
    else return 0;
}
int main(){
    int a;
    sang();
    scanf("%d",&a);
    int cnt=0;
    for(int i=1;i<=a;i++){
        if(m[i]>0&&nam(i)>0){
            cnt++;
            printf("%d ",i);
        }
}
        printf("\n%d",cnt);
}
