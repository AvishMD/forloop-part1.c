#include<stdio.h>
int main(){
    int a,b,max;
    scanf("%d %d",&a,&b);
    if(a<b)
        max=b;
    else
        max=a;
    for(int i=max; ;i++){
        if(i%a==0 && i%b==0){
            printf("%d",i);
            break;
        }
    }
    return 0;
    
}
