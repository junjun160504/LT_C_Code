#include <stdio.h>
#include <math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int m[150];
        int a;
        int dem[150];
        scanf("%d",&a);
        for(int i=0;i<a;i++){
            scanf("%d",&m[i]);
            dem[m[i]]++;
        }
        int max=dem[m[0]];
        for(int i=0;i<a-1;i++){
            if(dem[m[i+1]]>max) max=dem[m[i+1]];
        }
       for(int i=0;i<a;i++){
           if(dem[m[i]]==max) {
               printf("%d ",m[i]);
               dem[m[i]]=0;
       }
           else dem[m[i]]=0;
       }
        printf("\n");
    }
}
