#include <stdio.h>
#include <math.h>
int main(){
    int a;
    scanf("%d",&a);
    int m[150];
    for(int i=0;i<a;i++){
    scanf("%d",&m[i]);
}
    for(int i=0;i<a-1;i++){
        int min=i;
        for(int j=i+1;j<a;j++){
            if(m[j]<m[min]) min =j;
        }
        int temp=m[i];
        m[i]=m[min];
        m[min]=temp;
        int cnt=i+1;
        if(cnt<a){
            printf("Buoc %d: ",cnt);
            cnt++;
            for(int k=0;k<a;k++){
                printf("%d ",m[k]);
            }
        }
        printf("\n");
    }
   
}

