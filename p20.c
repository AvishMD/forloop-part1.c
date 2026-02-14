#include<stdio.h>
int main(){
    int n,sum=0;
    int fact;
    scanf("%d",&n);
     for(int i=1;i<=n;i++){
          fact=i*i;
          sum+=fact;
     }
     printf("%d",sum);
    return 0;
    
}
